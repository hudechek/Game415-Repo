// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProceduralPlane.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAM415_PROJECT_ProceduralPlane_generated_h
#error "ProceduralPlane.generated.h already included, missing '#pragma once' in ProceduralPlane.h"
#endif
#define GAM415_PROJECT_ProceduralPlane_generated_h

#define FID_GAM415_Project_Source_GAM415_Project_ProceduralPlane_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateMesh);


#define FID_GAM415_Project_Source_GAM415_Project_ProceduralPlane_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProceduralPlane(); \
	friend struct Z_Construct_UClass_AProceduralPlane_Statics; \
public: \
	DECLARE_CLASS(AProceduralPlane, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAM415_Project"), NO_API) \
	DECLARE_SERIALIZER(AProceduralPlane)


#define FID_GAM415_Project_Source_GAM415_Project_ProceduralPlane_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProceduralPlane(AProceduralPlane&&); \
	AProceduralPlane(const AProceduralPlane&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProceduralPlane); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProceduralPlane); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProceduralPlane) \
	NO_API virtual ~AProceduralPlane();


#define FID_GAM415_Project_Source_GAM415_Project_ProceduralPlane_h_11_PROLOG
#define FID_GAM415_Project_Source_GAM415_Project_ProceduralPlane_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAM415_Project_Source_GAM415_Project_ProceduralPlane_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAM415_Project_Source_GAM415_Project_ProceduralPlane_h_14_INCLASS_NO_PURE_DECLS \
	FID_GAM415_Project_Source_GAM415_Project_ProceduralPlane_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAM415_PROJECT_API UClass* StaticClass<class AProceduralPlane>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAM415_Project_Source_GAM415_Project_ProceduralPlane_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
