// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_DMI_Cube.h"
#include "GAM415_Project/GAM415_ProjectCharacter.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ACC_DMI_Cube::ACC_DMI_Cube()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));

	RootComponent = BoxComponent;
	CubeMesh->SetupAttachment(BoxComponent);
	
}

// Called when the game starts or when spawned
void ACC_DMI_Cube::BeginPlay()
{
	Super::BeginPlay();

	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ACC_DMI_Cube::OnOverlapBegin);

	if (CubeMaterial)
	{
		DmiMat = UMaterialInstanceDynamic::Create(CubeMaterial, this);
	}

	if (CubeMesh)
	{
		CubeMesh->SetMaterial(0, DmiMat);
	}
}

// Called every frame
void ACC_DMI_Cube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACC_DMI_Cube::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AGAM415_ProjectCharacter* OverlappedActor = Cast<AGAM415_ProjectCharacter>(OtherActor);

	if (OverlappedActor)
	{
		float randomNumX = UKismetMathLibrary::RandomFloatInRange(0, 1);
		float randomNumY = UKismetMathLibrary::RandomFloatInRange(0, 1);
		float randomNumZ = UKismetMathLibrary::RandomFloatInRange(0, 1);
		float RandomOpacity = UKismetMathLibrary::RandomFloatInRange(0, 1);

		FVector4 RandomColor = FVector4(randomNumX, randomNumY, randomNumZ, 1);
		if (DmiMat)
		{
			DmiMat->SetVectorParameterValue("Color", RandomColor);
			DmiMat->SetScalarParameterValue("Darkness", randomNumX);
			DmiMat->SetScalarParameterValue("Opacity", RandomOpacity);
		}
		
	}
}

