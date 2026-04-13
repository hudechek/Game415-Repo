// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGAM415_Project_init() {}
	GAM415_PROJECT_API UFunction* Z_Construct_UDelegateFunction_GAM415_Project_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GAM415_Project;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GAM415_Project()
	{
		if (!Z_Registration_Info_UPackage__Script_GAM415_Project.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GAM415_Project_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GAM415_Project",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9E4D23E4,
				0x6C159C13,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GAM415_Project.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GAM415_Project.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GAM415_Project(Z_Construct_UPackage__Script_GAM415_Project, TEXT("/Script/GAM415_Project"), Z_Registration_Info_UPackage__Script_GAM415_Project, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9E4D23E4, 0x6C159C13));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
