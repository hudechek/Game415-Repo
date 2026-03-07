// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAM415_Project/GAM415_ProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAM415_ProjectGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GAM415_PROJECT_API UClass* Z_Construct_UClass_AGAM415_ProjectGameMode();
GAM415_PROJECT_API UClass* Z_Construct_UClass_AGAM415_ProjectGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAM415_Project();
// End Cross Module References

// Begin Class AGAM415_ProjectGameMode
void AGAM415_ProjectGameMode::StaticRegisterNativesAGAM415_ProjectGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGAM415_ProjectGameMode);
UClass* Z_Construct_UClass_AGAM415_ProjectGameMode_NoRegister()
{
	return AGAM415_ProjectGameMode::StaticClass();
}
struct Z_Construct_UClass_AGAM415_ProjectGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GAM415_ProjectGameMode.h" },
		{ "ModuleRelativePath", "GAM415_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGAM415_ProjectGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGAM415_ProjectGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GAM415_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGAM415_ProjectGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGAM415_ProjectGameMode_Statics::ClassParams = {
	&AGAM415_ProjectGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGAM415_ProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGAM415_ProjectGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGAM415_ProjectGameMode()
{
	if (!Z_Registration_Info_UClass_AGAM415_ProjectGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGAM415_ProjectGameMode.OuterSingleton, Z_Construct_UClass_AGAM415_ProjectGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGAM415_ProjectGameMode.OuterSingleton;
}
template<> GAM415_PROJECT_API UClass* StaticClass<AGAM415_ProjectGameMode>()
{
	return AGAM415_ProjectGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGAM415_ProjectGameMode);
AGAM415_ProjectGameMode::~AGAM415_ProjectGameMode() {}
// End Class AGAM415_ProjectGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGAM415_ProjectGameMode, AGAM415_ProjectGameMode::StaticClass, TEXT("AGAM415_ProjectGameMode"), &Z_Registration_Info_UClass_AGAM415_ProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGAM415_ProjectGameMode), 765658698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectGameMode_h_3655102259(TEXT("/Script/GAM415_Project"),
	Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_GAM415_ProjectGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
