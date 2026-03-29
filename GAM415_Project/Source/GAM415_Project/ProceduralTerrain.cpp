// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralTerrain.h"
#include "ProceduralMeshComponent.h"
#include "KismetProceduralMeshLibrary.h"
#include "StaticMeshOperations.h"
#include "Curve/CurveUtil.h"

// Sets default values
AProceduralTerrain::AProceduralTerrain()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//set the procedural terrain object and make it the root componant
	ProceduralTerrainMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Procedural Mesh"));
	RootComponent = ProceduralTerrainMesh;

}

// Called when the game starts or when spawned
void AProceduralTerrain::BeginPlay()
{
	Super::BeginPlay();

	//call create vertices the creat triangle
	CreateVertices();
	CreateTriangles();

	//create mesh section
	ProceduralTerrainMesh->CreateMeshSection(SectionID, Vertices, Triangles, Normals, UV0, UpVertexColor, TArray<FProcMeshTangent>(), true);
	
	//set the material
	ProceduralTerrainMesh->SetMaterial(0, Material);
	
}

// Called every frame
void AProceduralTerrain::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProceduralTerrain::AlterMesh(FVector impactPoint)
{
	//loop trough total number of vertices
	for (int i = 0; i < Vertices.Num(); i++)
	{
		//set variable to hold location of impact based on location from trace
		FVector TempVector = impactPoint - this->GetActorLocation();

		//check if the current vertices - the temp vector. size is less the size of the radius 
		if (FVector(Vertices[i] - TempVector).Size() < Radius)
		{
			//set current vertices depth to current depth minus Depth
			Vertices[i] = Vertices[i] - Depth;
			//update terrain
			ProceduralTerrainMesh->UpdateMeshSection(SectionID, Vertices, Normals, UV0, UpVertexColor, TArray<FProcMeshTangent>());
		}
	}
}

void AProceduralTerrain::CreateVertices()
{
	//nested for loop of y in x to create the perlin noise used to place vertex location at random height locations 
	for (int X = 0; X <= XSize; X++)
	{
		for (int Y = 0; Y <= YSize; Y++)
		{
			float Z = FMath::PerlinNoise2D(FVector2D(X * NoiseScale + .1, Y * NoiseScale + .1)) * ZMultiplier;
			GEngine->AddOnScreenDebugMessage(-1, 999.0f, FColor::Yellow, FString::Printf(TEXT("Z %f"), Z));
			Vertices.Add(FVector(X * Scale, Y * Scale, Z));
			UV0.Add(FVector2D(X * UVScale, Y * UVScale));
		}
	}
}

void AProceduralTerrain::CreateTriangles()
{
	int Vertex = 0;

	//nested for loop to set up triangles based on wind order so proper uvs are up 
	for (int X = 0; X < XSize; X++)
	{
		for (int Y = 0; Y < YSize; Y++)
		{
			Triangles.Add(Vertex);
			Triangles.Add(Vertex + 1);
			Triangles.Add(Vertex + YSize + 1);
			Triangles.Add(Vertex + 1);
			Triangles.Add(Vertex + YSize + 2);
			Triangles.Add(Vertex + YSize + 1);

			Vertex++;
		}
		Vertex++;
	}
	
}
