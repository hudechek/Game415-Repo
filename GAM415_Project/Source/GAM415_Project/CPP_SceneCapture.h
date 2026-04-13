// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "CPP_SceneCapture.generated.h"


class USceneCaptureComponent;
class AGAM415_ProjectCharacter;

UCLASS()
class GAM415_PROJECT_API ACPP_SceneCapture : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACPP_SceneCapture();
	
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	USceneCaptureComponent2D* CaptureComponent;

	UPROPERTY(EditAnywhere)
	UMaterialInterface* SceneMaterial;
	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents() override;

	void UpdateSceneCap();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
