// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GAM415_ProjectPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AGAM415_ProjectCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GAM415_PROJECT_GAM415_ProjectPickUpComponent_generated_h
#error "GAM415_ProjectPickUpComponent.generated.h already included, missing '#pragma once' in GAM415_ProjectPickUpComponent.h"
#endif
#define GAM415_PROJECT_GAM415_ProjectPickUpComponent_generated_h

#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectPickUpComponent_h_12_DELEGATE \
GAM415_PROJECT_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AGAM415_ProjectCharacter* PickUpCharacter);


#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGAM415_ProjectPickUpComponent(); \
	friend struct Z_Construct_UClass_UGAM415_ProjectPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UGAM415_ProjectPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAM415_Project"), NO_API) \
	DECLARE_SERIALIZER(UGAM415_ProjectPickUpComponent)


#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGAM415_ProjectPickUpComponent(UGAM415_ProjectPickUpComponent&&); \
	UGAM415_ProjectPickUpComponent(const UGAM415_ProjectPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGAM415_ProjectPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGAM415_ProjectPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGAM415_ProjectPickUpComponent) \
	NO_API virtual ~UGAM415_ProjectPickUpComponent();


#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectPickUpComponent_h_14_PROLOG
#define FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAM415_PROJECT_API UClass* StaticClass<class UGAM415_ProjectPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
