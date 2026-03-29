// Fill out your copyright notice in the Description page of Project Settings.


#include "ProceduralFromStatic.h"
#include "KismetProceduralMeshLibrary.h"
#include "ViewportInteractionTypes.h"

// Sets default values
AProceduralFromStatic::AProceduralFromStatic()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	StaticProcMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("StaticMesh"));
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));

	RootComponent = StaticProcMesh;

	BaseMesh->SetupAttachment(StaticProcMesh);
	
}

// Called when the game starts or when spawned
void AProceduralFromStatic::BeginPlay()
{
	Super::BeginPlay();
	
}

void AProceduralFromStatic::PostActorCreated()
{
	Super::PostActorCreated();

	GetMeshData();
}

void AProceduralFromStatic::PostLoad()
{
	Super::PostLoad();
	
	GetMeshData();
}

// Called every frame
void AProceduralFromStatic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProceduralFromStatic::GetMeshData()
{
	UStaticMesh* mesh = BaseMesh->GetStaticMesh();
	if (mesh)
	{
		UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(mesh, 0, 0, Vertices, Triangles, Normals, UV0, Tangents);
		StaticProcMesh->UpdateMeshSection(0, Vertices, Normals, UV0, UpVectexColor, Tangents);
		CreateMesh();
	}
}

void AProceduralFromStatic::CreateMesh()
{
	if (BaseMesh)
	{
		StaticProcMesh->CreateMeshSection(0, Vertices, Triangles, Normals, UV0, UpVectexColor, Tangents, true);
	}
}

