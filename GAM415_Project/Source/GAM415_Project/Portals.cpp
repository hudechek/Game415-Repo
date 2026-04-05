// Fill out your copyright notice in the Description page of Project Settings.


#include "Portals.h"

#include "GAM415_ProjectCharacter.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/MapErrors.h"

// Sets default values
APortals::APortals()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//Create Basic Defualt Subobject to be used in editor
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CameraComponent"));

	//Set hierarcy for componants
	RootComponent = BoxComponent;
	StaticMesh->SetupAttachment(RootComponent);
	CaptureComponent->SetupAttachment(StaticMesh);

	//set collision Response to ignore
	StaticMesh->SetCollisionResponseToAllChannels(ECR_Ignore);

}

// Called when the game starts or when spawned
void APortals::BeginPlay()
{
	Super::BeginPlay();

	//set overlap function to be called whenever object is overlapped
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &APortals::OnOverlapBegin);

	//check if material is valid
	if (Material)
	{
		//set staticmesh material
		StaticMesh->SetMaterial(0, Material);
	}
}

// Called every frame
void APortals::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//call UpdatePortals every tick to update portal visual
	UpdatePortals();
}

inline void APortals::OnOverlapBegin(UPrimitiveComponent* OverlappedActor, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AGAM415_ProjectCharacter* Player = Cast<AGAM415_ProjectCharacter>(OtherActor);

	//check if cast was successful
	if (Player)
	{
		//check if other portal is set
		if (OtherPortal)
		{
			//check that the player isnt already teleporting
			if (!Player->IsTeleporting)
			{
				//set player IsTeleporting to true 
				Player->IsTeleporting = true;
				//Get OtherPortal Location and store it in Location
				FVector Location = OtherPortal->GetActorLocation();
				//Set Players location to stored Location
				Player->SetActorLocation(Location);

				//set a timer up
				FTimerHandle TimerHandle;
				//set up a delegate to be called when the timer runs out
				FTimerDelegate TimerDelegate;
				//bind delegate function of SetBool to be called by the Delgate
				TimerDelegate.BindUFunction(this, "SetBool", Player);
				//Set up timer parameters
				GetWorld()->GetTimerManager().SetTimer(TimerHandle, TimerDelegate, 1, false);
				
			}
		}
	}
}

void APortals::SetBool(AGAM415_ProjectCharacter* Player)
{
	//if player is valid set is teleporting to false
	if (Player)
	{
		Player->IsTeleporting = false;
	}
}

void APortals::UpdatePortals()
{
	//camera location set up for render view form linked portal
	FVector Location = this->GetActorLocation() - OtherPortal->GetActorLocation();
	FVector CamLocation = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->GetTransformComponent()->GetComponentLocation();
	FRotator CamRotation = UGameplayStatics::GetPlayerCameraManager(GetWorld(), 0)->GetTransformComponent()->GetComponentRotation();
	FVector CombinedLocation = CamLocation + Location;

	CaptureComponent->SetWorldLocationAndRotation(CombinedLocation, CamRotation);
}
