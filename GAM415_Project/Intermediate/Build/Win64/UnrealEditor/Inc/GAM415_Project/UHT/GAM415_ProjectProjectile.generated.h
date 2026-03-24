// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAM415_ProjectProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GAM415_PROJECT_GAM415_ProjectProjectile_generated_h
#error "GAM415_ProjectProjectile.generated.h already included, missing '#pragma once' in GAM415_ProjectProjectile.h"
#endif
#define GAM415_PROJECT_GAM415_ProjectProjectile_generated_h

#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectProjectile_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGAM415_ProjectProjectile(); \
	friend struct Z_Construct_UClass_AGAM415_ProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AGAM415_ProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAM415_Project"), NO_API) \
	DECLARE_SERIALIZER(AGAM415_ProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGAM415_ProjectProjectile(AGAM415_ProjectProjectile&&); \
	AGAM415_ProjectProjectile(const AGAM415_ProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGAM415_ProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGAM415_ProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGAM415_ProjectProjectile) \
	NO_API virtual ~AGAM415_ProjectProjectile();


#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectProjectile_h_13_PROLOG
#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectProjectile_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectProjectile_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectProjectile_h_16_INCLASS_NO_PURE_DECLS \
	FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectProjectile_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAM415_PROJECT_API UClass* StaticClass<class AGAM415_ProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
