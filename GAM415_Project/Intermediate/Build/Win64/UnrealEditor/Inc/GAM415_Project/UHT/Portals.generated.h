// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Portals.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AGAM415_ProjectCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GAM415_PROJECT_Portals_generated_h
#error "Portals.generated.h already included, missing '#pragma once' in Portals.h"
#endif
#define GAM415_PROJECT_Portals_generated_h

#define FID_GAM415_Project_Source_GAM415_Project_Portals_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdatePortals); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_GAM415_Project_Source_GAM415_Project_Portals_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortals(); \
	friend struct Z_Construct_UClass_APortals_Statics; \
public: \
	DECLARE_CLASS(APortals, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAM415_Project"), NO_API) \
	DECLARE_SERIALIZER(APortals)


#define FID_GAM415_Project_Source_GAM415_Project_Portals_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APortals(APortals&&); \
	APortals(const APortals&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortals); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortals); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortals) \
	NO_API virtual ~APortals();


#define FID_GAM415_Project_Source_GAM415_Project_Portals_h_17_PROLOG
#define FID_GAM415_Project_Source_GAM415_Project_Portals_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAM415_Project_Source_GAM415_Project_Portals_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAM415_Project_Source_GAM415_Project_Portals_h_20_INCLASS_NO_PURE_DECLS \
	FID_GAM415_Project_Source_GAM415_Project_Portals_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAM415_PROJECT_API UClass* StaticClass<class APortals>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAM415_Project_Source_GAM415_Project_Portals_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
