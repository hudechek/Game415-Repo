// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/SceneCaptureComponent2D.h"
#include "CPP_SceneCapture.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/TextureRenderTarget2D.h"

// Sets default values
ACPP_SceneCapture::ACPP_SceneCapture()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;
	
	CaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Camera"));
	CaptureComponent->SetupAttachment(Mesh);
	
}

// Called when the game starts or when spawned
void ACPP_SceneCapture::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACPP_SceneCapture::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	UpdateSceneCap();
	
	/*UTextureRenderTarget2D* NewSceneCap = UKismetRenderingLibrary::CreateRenderTarget2D(this, 1024,1024);

	CaptureComponent->TextureTarget = NewSceneCap;

	UMaterialInstanceDynamic* DynamicSceneMat = UMaterialInstanceDynamic::Create(SceneMaterial, this);

	DynamicSceneMat->SetTextureParameterValue(FName("SceneTexture"), NewSceneCap);

	Mesh->SetMaterial(0, DynamicSceneMat);*/

	

	
}

void ACPP_SceneCapture::UpdateSceneCap()
{
	UTextureRenderTarget2D* NewSceneCap = UKismetRenderingLibrary::CreateRenderTarget2D(this, 1024,1024);

	CaptureComponent->TextureTarget = NewSceneCap;

	UMaterialInstanceDynamic* DynamicSceneMat = UMaterialInstanceDynamic::Create(SceneMaterial, this);

	DynamicSceneMat->SetTextureParameterValue(FName("SceneTexture"), NewSceneCap);

	Mesh->SetMaterial(0, DynamicSceneMat);

}

// Called every frame
void ACPP_SceneCapture::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateSceneCap();

}

