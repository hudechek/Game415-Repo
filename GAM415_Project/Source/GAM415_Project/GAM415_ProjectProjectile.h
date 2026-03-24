// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GAM415_ProjectProjectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;
class UNiagaraSystem;

UCLASS(config=Game)
class AGAM415_ProjectProjectile : public AActor
{
	GENERATED_BODY()

	/** Sphere collision component */
	UPROPERTY(VisibleDefaultsOnly, Category=Projectile)
	USphereComponent* CollisionComp;

	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	UProjectileMovementComponent* ProjectileMovement;

	//static Mesh
	UPROPERTY(EditAnywhere, Category = "Projectile")
	UStaticMeshComponent* BallMesh;

	// Decal to be spawned during on hit
	UPROPERTY(EditAnywhere, Category = "Projectile")
	UMaterial* DecalBaseMat;

	//RGBA color variable for random color value storage called RandColor
	UPROPERTY()
	FLinearColor RandColor;

	//the material set to the ball by defualt
	UPROPERTY(EditAnywhere, Category = "Projectile")
	UMaterialInterface* ProjectileMaterial;

	//dynamic mesh to be set at spawn
	UPROPERTY()
	UMaterialInstanceDynamic* DmiMat;

	// create colorP of type NiagaraSystem to store linear color values to be used by system
	UPROPERTY(EditAnywhere, Category = "Partical")
	UNiagaraSystem* colorP;


public:
	AGAM415_ProjectProjectile();

private:
	//declared to allow for at spawn setting of RandColor
	virtual void BeginPlay() override;

public:

	/** called when projectile hits something */
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	/** Returns CollisionComp subobject **/
	USphereComponent* GetCollisionComp() const { return CollisionComp; }
	/** Returns ProjectileMovement subobject **/
	UProjectileMovementComponent* GetProjectileMovement() const { return ProjectileMovement; }

	
	
};

