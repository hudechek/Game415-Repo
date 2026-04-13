// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/ArrowComponent.h"
#include "Components/BoxComponent.h"
#include "Portals.generated.h"

//Forward Declarations
class AGAM415_ProjectCharacter;


UCLASS()
class GAM415_PROJECT_API APortals : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APortals();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Static Mesh object
	UPROPERTY(EditAnywhere)\
	UStaticMeshComponent* StaticMesh;

	//Scene Capture Comp object
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneCaptureComponent2D* CaptureComponent;

	//RenderTarget Object
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTextureRenderTarget2D* RenderTarget;

	//box component
	UPROPERTY(EditAnywhere)
	UBoxComponent* BoxComponent;

	//object to hold ref to another object in scene for RenderTarget
	UPROPERTY(EditAnywhere)
	APortals* OtherPortal;

	//Material interface for Dynamic material 
	UPROPERTY(EditAnywhere)
	UMaterialInterface* Material;

	//arrowComponent for spawning
	UPROPERTY(EditAnywhere)
	UArrowComponent* RootArrow;

	//function for when portal is overlapped
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedActor, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//function to set player ISTeleporting bool
	UFUNCTION()
	void SetBool(AGAM415_ProjectCharacter* Player);

	//function declaration for updating the render of portals
	UFUNCTION()
	void UpdatePortals();
};


