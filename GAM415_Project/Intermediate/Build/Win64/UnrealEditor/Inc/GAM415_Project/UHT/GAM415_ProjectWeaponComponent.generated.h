// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAM415_ProjectWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGAM415_ProjectCharacter;
#ifdef GAM415_PROJECT_GAM415_ProjectWeaponComponent_generated_h
#error "GAM415_ProjectWeaponComponent.generated.h already included, missing '#pragma once' in GAM415_ProjectWeaponComponent.h"
#endif
#define GAM415_PROJECT_GAM415_ProjectWeaponComponent_generated_h

#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAM415_ProjectWeaponComponent(); \
	friend struct Z_Construct_UClass_UGAM415_ProjectWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UGAM415_ProjectWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAM415_Project"), NO_API) \
	DECLARE_SERIALIZER(UGAM415_ProjectWeaponComponent)


#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGAM415_ProjectWeaponComponent(UGAM415_ProjectWeaponComponent&&); \
	UGAM415_ProjectWeaponComponent(const UGAM415_ProjectWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAM415_ProjectWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAM415_ProjectWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGAM415_ProjectWeaponComponent) \
	NO_API virtual ~UGAM415_ProjectWeaponComponent();


#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectWeaponComponent_h_11_PROLOG
#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAM415_PROJECT_API UClass* StaticClass<class UGAM415_ProjectWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
