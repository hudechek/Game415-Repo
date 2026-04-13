// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralTerrain.generated.h"

class UProceduralMeshComponent;
class UMaterialInterface;

UCLASS()
class GAM415_PROJECT_API AProceduralTerrain : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProceduralTerrain();

	//size of mesh in X direction clamped to not go below 0
	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0))
	int XSize = 0;

	//size of mesh in Y direction clamped to not go below 0
	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0))
	int YSize = 0;

	//use to multiple Height of vertices clamped to not go below 0
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ClampMin = 0))
	float ZMultiplier = 1.0f;

	// scales frequency of the noise
	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0))
	float NoiseScale = 1.0f;

	//scales how wide vertices are set
	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0))
	float Scale = 0;

	//changes the scale of the UV
	UPROPERTY(EditAnywhere, Meta = (ClampMin = 0))
	float UVScale = 0;

	//how big of a hole to make
	UPROPERTY(EditAnywhere)
	float Radius;
	
	//how deep of a hole to make
	UPROPERTY(EditAnywhere)
	FVector Depth;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//also us to set material dynamically
	UPROPERTY(EditAnywhere)
	UMaterialInterface* Material;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//allows us to alter the mesh on hit of projectile object
	UFUNCTION()
	void AlterMesh(FVector impactPoint);

private:

	UPROPERTY(EditAnywhere)
	UProceduralMeshComponent* ProceduralTerrainMesh;

	//array of all vertices
	TArray<FVector> Vertices;
	
	//array for triangles 
	TArray<int> Triangles;

	//normal array
	TArray<FVector> Normals;

	//array of UVs
	TArray<FVector2D> UV0;

	//array fo up vector colors
	TArray<FColor> UpVertexColor;

	//section id if your working with sectioned meshes
	int SectionID = 0;

	//function to create vertices
	void CreateVertices();

	//function to connect vertices and make triangles
	void CreateTriangles();
};






