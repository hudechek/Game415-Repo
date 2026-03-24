// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CC_DMI_Cube.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GAM415_PROJECT_CC_DMI_Cube_generated_h
#error "CC_DMI_Cube.generated.h already included, missing '#pragma once' in CC_DMI_Cube.h"
#endif
#define GAM415_PROJECT_CC_DMI_Cube_generated_h

#define FID_GAM415_Project_Source_GAM415_Project_CC_DMI_Cube_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_GAM415_Project_Source_GAM415_Project_CC_DMI_Cube_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACC_DMI_Cube(); \
	friend struct Z_Construct_UClass_ACC_DMI_Cube_Statics; \
public: \
	DECLARE_CLASS(ACC_DMI_Cube, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GAM415_Project"), NO_API) \
	DECLARE_SERIALIZER(ACC_DMI_Cube)


#define FID_GAM415_Project_Source_GAM415_Project_CC_DMI_Cube_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACC_DMI_Cube(ACC_DMI_Cube&&); \
	ACC_DMI_Cube(const ACC_DMI_Cube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACC_DMI_Cube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACC_DMI_Cube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACC_DMI_Cube) \
	NO_API virtual ~ACC_DMI_Cube();


#define FID_GAM415_Project_Source_GAM415_Project_CC_DMI_Cube_h_12_PROLOG
#define FID_GAM415_Project_Source_GAM415_Project_CC_DMI_Cube_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GAM415_Project_Source_GAM415_Project_CC_DMI_Cube_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GAM415_Project_Source_GAM415_Project_CC_DMI_Cube_h_15_INCLASS_NO_PURE_DECLS \
	FID_GAM415_Project_Source_GAM415_Project_CC_DMI_Cube_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAM415_PROJECT_API UClass* StaticClass<class ACC_DMI_Cube>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GAM415_Project_Source_GAM415_Project_CC_DMI_Cube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
