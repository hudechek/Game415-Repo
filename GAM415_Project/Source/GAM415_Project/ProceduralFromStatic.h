// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "GameFramework/Actor.h"
#include "ProceduralFromStatic.generated.h"

UCLASS()
class GAM415_PROJECT_API AProceduralFromStatic : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProceduralFromStatic();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PostActorCreated() override;
	virtual void PostLoad() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	TArray<FVector> Vertices;

	UPROPERTY(EditAnywhere)
	TArray<int> Triangles;

	UPROPERTY(EditAnywhere)
	TArray<FVector> Normals;

	UPROPERTY(EditAnywhere)
	TArray<FVector2D> UV0;

	UPROPERTY(EditAnywhere)
	TArray<FLinearColor> VertexColors;

	TArray<FColor> UpVectexColor;

	TArray<FProcMeshTangent> Tangents;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* BaseMesh;

private:
	UPROPERTY()
	UProceduralMeshComponent* StaticProcMesh;

	void GetMeshData();
	void CreateMesh();
};
