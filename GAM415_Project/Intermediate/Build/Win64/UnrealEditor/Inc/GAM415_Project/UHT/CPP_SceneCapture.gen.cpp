// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAM415_Project/CPP_SceneCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_SceneCapture() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GAM415_PROJECT_API UClass* Z_Construct_UClass_ACPP_SceneCapture();
GAM415_PROJECT_API UClass* Z_Construct_UClass_ACPP_SceneCapture_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAM415_Project();
// End Cross Module References

// Begin Class ACPP_SceneCapture
void ACPP_SceneCapture::StaticRegisterNativesACPP_SceneCapture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_SceneCapture);
UClass* Z_Construct_UClass_ACPP_SceneCapture_NoRegister()
{
	return ACPP_SceneCapture::StaticClass();
}
struct Z_Construct_UClass_ACPP_SceneCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_SceneCapture.h" },
		{ "ModuleRelativePath", "CPP_SceneCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "CPP_SceneCapture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_SceneCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[] = {
		{ "Category", "CPP_SceneCapture" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_SceneCapture.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneMaterial_MetaData[] = {
		{ "Category", "CPP_SceneCapture" },
		{ "ModuleRelativePath", "CPP_SceneCapture.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_SceneCapture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SceneCapture_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SceneCapture, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SceneCapture_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SceneCapture, CaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponent_MetaData), NewProp_CaptureComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_SceneCapture_Statics::NewProp_SceneMaterial = { "SceneMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_SceneCapture, SceneMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneMaterial_MetaData), NewProp_SceneMaterial_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_SceneCapture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SceneCapture_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SceneCapture_Statics::NewProp_CaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_SceneCapture_Statics::NewProp_SceneMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SceneCapture_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_SceneCapture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GAM415_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SceneCapture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_SceneCapture_Statics::ClassParams = {
	&ACPP_SceneCapture::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACPP_SceneCapture_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SceneCapture_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_SceneCapture_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_SceneCapture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_SceneCapture()
{
	if (!Z_Registration_Info_UClass_ACPP_SceneCapture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_SceneCapture.OuterSingleton, Z_Construct_UClass_ACPP_SceneCapture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_SceneCapture.OuterSingleton;
}
template<> GAM415_PROJECT_API UClass* StaticClass<ACPP_SceneCapture>()
{
	return ACPP_SceneCapture::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_SceneCapture);
ACPP_SceneCapture::~ACPP_SceneCapture() {}
// End Class ACPP_SceneCapture

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_CPP_SceneCapture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_SceneCapture, ACPP_SceneCapture::StaticClass, TEXT("ACPP_SceneCapture"), &Z_Registration_Info_UClass_ACPP_SceneCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_SceneCapture), 3231710061U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_CPP_SceneCapture_h_2968823446(TEXT("/Script/GAM415_Project"),
	Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_CPP_SceneCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_CPP_SceneCapture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
