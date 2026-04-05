// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAM415_Project/GAM415_ProjectCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAM415_ProjectCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAM415_PROJECT_API UClass* Z_Construct_UClass_AGAM415_ProjectCharacter();
GAM415_PROJECT_API UClass* Z_Construct_UClass_AGAM415_ProjectCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAM415_Project();
// End Cross Module References

// Begin Class AGAM415_ProjectCharacter
void AGAM415_ProjectCharacter::StaticRegisterNativesAGAM415_ProjectCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAM415_ProjectCharacter);
UClass* Z_Construct_UClass_AGAM415_ProjectCharacter_NoRegister()
{
	return AGAM415_ProjectCharacter::StaticClass();
}
struct Z_Construct_UClass_AGAM415_ProjectCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GAM415_ProjectCharacter.h" },
		{ "ModuleRelativePath", "GAM415_ProjectCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTeleporting_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Is PlayerTeleporting or not\n" },
#endif
		{ "ModuleRelativePath", "GAM415_ProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is PlayerTeleporting or not" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GAM415_ProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GAM415_ProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** MappingContext */" },
#endif
		{ "ModuleRelativePath", "GAM415_ProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "MappingContext" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "GAM415_ProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "GAM415_ProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "GAM415_ProjectCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_IsTeleporting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTeleporting;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAM415_ProjectCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_IsTeleporting_SetBit(void* Obj)
{
	((AGAM415_ProjectCharacter*)Obj)->IsTeleporting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_IsTeleporting = { "IsTeleporting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGAM415_ProjectCharacter), &Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_IsTeleporting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTeleporting_MetaData), NewProp_IsTeleporting_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAM415_ProjectCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh1P_MetaData), NewProp_Mesh1P_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAM415_ProjectCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAM415_ProjectCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAM415_ProjectCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAM415_ProjectCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGAM415_ProjectCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_IsTeleporting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_Mesh1P,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::NewProp_LookAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GAM415_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::ClassParams = {
	&AGAM415_ProjectCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGAM415_ProjectCharacter()
{
	if (!Z_Registration_Info_UClass_AGAM415_ProjectCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAM415_ProjectCharacter.OuterSingleton, Z_Construct_UClass_AGAM415_ProjectCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGAM415_ProjectCharacter.OuterSingleton;
}
template<> GAM415_PROJECT_API UClass* StaticClass<AGAM415_ProjectCharacter>()
{
	return AGAM415_ProjectCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGAM415_ProjectCharacter);
AGAM415_ProjectCharacter::~AGAM415_ProjectCharacter() {}
// End Class AGAM415_ProjectCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGAM415_ProjectCharacter, AGAM415_ProjectCharacter::StaticClass, TEXT("AGAM415_ProjectCharacter"), &Z_Registration_Info_UClass_AGAM415_ProjectCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAM415_ProjectCharacter), 2571585820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectCharacter_h_2014458609(TEXT("/Script/GAM415_Project"),
	Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
