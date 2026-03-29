// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralTerrain.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAM415_PROJECT_ProceduralTerrain_generated_h
#error "ProceduralTerrain.generated.h already included, missing '#pragma once' in ProceduralTerrain.h"
#endif
#define GAM415_PROJECT_ProceduralTerrain_generated_h

#define FID_GAM415_Project_Source_GAM415_Project_ProceduralTerrain_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAlterMesh);


#define FID_GAM415_Project_Source_GAM415_Project_ProceduralTerrain_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProceduralTerrain(); \
	friend struct Z_Construct_UClass_AProceduralTerrain_Statics; \
public: \
	DECLARE_CLASS(AProceduralTerrain, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAM415_Project"), NO_API) \
	DECLARE_SERIALIZER(AProceduralTerrain)


#define FID_GAM415_Project_Source_GAM415_Project_ProceduralTerrain_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProceduralTerrain(AProceduralTerrain&&); \
	AProceduralTerrain(const AProceduralTerrain&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceduralTerrain); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralTerrain); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProceduralTerrain) \
	NO_API virtual ~AProceduralTerrain();


#define FID_GAM415_Project_Source_GAM415_Project_ProceduralTerrain_h_12_PROLOG
#define FID_GAM415_Project_Source_GAM415_Project_ProceduralTerrain_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAM415_Project_Source_GAM415_Project_ProceduralTerrain_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAM415_Project_Source_GAM415_Project_ProceduralTerrain_h_15_INCLASS_NO_PURE_DECLS \
	FID_GAM415_Project_Source_GAM415_Project_ProceduralTerrain_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAM415_PROJECT_API UClass* StaticClass<class AProceduralTerrain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAM415_Project_Source_GAM415_Project_ProceduralTerrain_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
