// Copyright Epic Games, Inc. All Rights Reserved.

#include "GAM415_ProjectProjectile.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/DecalComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "ProceduralTerrain.h"
#include "NiagaraComponent.h"

AGAM415_ProjectProjectile::AGAM415_ProjectProjectile() 
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &AGAM415_ProjectProjectile::OnHit);		// set up a notification for when this component hits something blocking

	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	//set up defaultSubObject for BallMesh
	BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));

	// Set as root component
	RootComponent = CollisionComp;

	BallMesh->SetupAttachment(CollisionComp);

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void AGAM415_ProjectProjectile::BeginPlay()
{
	Super::BeginPlay();

	//set RandColor to a random R,G,B values between 0 and 1 leaving the alpha at 1.
	RandColor = FLinearColor(UKismetMathLibrary::RandomFloatInRange(0, 1.0f),UKismetMathLibrary::RandomFloatInRange(0, 1.0f),UKismetMathLibrary::RandomFloatInRange(0, 1.0f), 1.0f);

	//creat and set DmiMAt to and instance of ProjectileMaterial and then set the ball mesh to the new instanced mesh
	DmiMat = UMaterialInstanceDynamic::Create(ProjectileMaterial, this);
	BallMesh->SetMaterial(0, DmiMat);

	//set the vector values to the stored value in RandColor
	DmiMat->SetVectorParameterValue("ProjectileColor", RandColor);
}

void AGAM415_ProjectProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	if ((OtherActor != nullptr) && (OtherActor != this) && (OtherComp != nullptr) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());
		
		Destroy();
	}

	if (OtherActor != nullptr)
	{
		//check if colorP is set if not do nothing
		if (colorP)
		{
			//create UNiagaraComponent called particle comp set it to spawnsystemattched at HitComp. then set linear color to RandColor to user linked value in niagara system destroy the ball mesh and set the collision to NoCollision
			UNiagaraComponent* particleComp = UNiagaraFunctionLibrary::SpawnSystemAttached(colorP, HitComp, NAME_None, FVector(-20.f, 0.f, 0.f), FRotator(0.f), EAttachLocation::KeepRelativeOffset, true);
			particleComp->SetNiagaraVariableLinearColor(FString("RandomColor"),RandColor);
			BallMesh->DestroyComponent();
			CollisionComp->BodyInstance.SetCollisionProfileName("NoCollision");
			
		}
		
		//set a float variable to a random number between 0 and 3 for our subframe 
		float FrameNumber = UKismetMathLibrary::RandomFloatInRange(0, 3.0f);

		//create a variable of Decal to spawn at world location 
		auto Decal = UGameplayStatics::SpawnDecalAtLocation(GetWorld(), DecalBaseMat, FVector(UKismetMathLibrary::RandomFloatInRange(20.f, 40.f)), Hit.Location, Hit.Normal.Rotation(), 0.f);
		auto MatInstance = Decal->CreateDynamicMaterialInstance();

		//set dynamic changes to material parameters for color and frame
		MatInstance->SetVectorParameterValue("Color", RandColor);
		MatInstance->SetScalarParameterValue("Frame", FrameNumber);

		//create AProceduralTerrain reference casting to other actor
		AProceduralTerrain* procTerrain = Cast<AProceduralTerrain>(OtherActor);

		// check if procTerrain is set if it is call alter mesh and pass in the impact point of the projectile
		if (procTerrain)
		{
			procTerrain->AlterMesh(Hit.ImpactPoint);
		}
	}
}
