// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAM415_Project/ProceduralTerrain.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralTerrain() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
GAM415_PROJECT_API UClass* Z_Construct_UClass_AProceduralTerrain();
GAM415_PROJECT_API UClass* Z_Construct_UClass_AProceduralTerrain_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAM415_Project();
// End Cross Module References

// Begin Class AProceduralTerrain Function AlterMesh
struct Z_Construct_UFunction_AProceduralTerrain_AlterMesh_Statics
{
	struct ProceduralTerrain_eventAlterMesh_Parms
	{
		FVector impactPoint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProceduralTerrain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_impactPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AProceduralTerrain_AlterMesh_Statics::NewProp_impactPoint = { "impactPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProceduralTerrain_eventAlterMesh_Parms, impactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AProceduralTerrain_AlterMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AProceduralTerrain_AlterMesh_Statics::NewProp_impactPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralTerrain_AlterMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AProceduralTerrain_AlterMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AProceduralTerrain, nullptr, "AlterMesh", nullptr, nullptr, Z_Construct_UFunction_AProceduralTerrain_AlterMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralTerrain_AlterMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_AProceduralTerrain_AlterMesh_Statics::ProceduralTerrain_eventAlterMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AProceduralTerrain_AlterMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_AProceduralTerrain_AlterMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AProceduralTerrain_AlterMesh_Statics::ProceduralTerrain_eventAlterMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AProceduralTerrain_AlterMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AProceduralTerrain_AlterMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AProceduralTerrain::execAlterMesh)
{
	P_GET_STRUCT(FVector,Z_Param_impactPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AlterMesh(Z_Param_impactPoint);
	P_NATIVE_END;
}
// End Class AProceduralTerrain Function AlterMesh

// Begin Class AProceduralTerrain
void AProceduralTerrain::StaticRegisterNativesAProceduralTerrain()
{
	UClass* Class = AProceduralTerrain::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AlterMesh", &AProceduralTerrain::execAlterMesh },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProceduralTerrain);
UClass* Z_Construct_UClass_AProceduralTerrain_NoRegister()
{
	return AProceduralTerrain::StaticClass();
}
struct Z_Construct_UClass_AProceduralTerrain_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralTerrain.h" },
		{ "ModuleRelativePath", "ProceduralTerrain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XSize_MetaData[] = {
		{ "Category", "ProceduralTerrain" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//size of mesh in X direction clamped to not go below 0\n" },
#endif
		{ "ModuleRelativePath", "ProceduralTerrain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "size of mesh in X direction clamped to not go below 0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YSize_MetaData[] = {
		{ "Category", "ProceduralTerrain" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//size of mesh in Y direction clamped to not go below 0\n" },
#endif
		{ "ModuleRelativePath", "ProceduralTerrain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "size of mesh in Y direction clamped to not go below 0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZMultiplier_MetaData[] = {
		{ "Category", "ProceduralTerrain" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//use to multiple Height of vertices clamped to not go below 0\n" },
#endif
		{ "ModuleRelativePath", "ProceduralTerrain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "use to multiple Height of vertices clamped to not go below 0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[] = {
		{ "Category", "ProceduralTerrain" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "ProceduralTerrain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "ProceduralTerrain" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "ProceduralTerrain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[] = {
		{ "Category", "ProceduralTerrain" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "ProceduralTerrain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "ProceduralTerrain" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//how big of a hole to make\n" },
#endif
		{ "ModuleRelativePath", "ProceduralTerrain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "how big of a hole to make" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Depth_MetaData[] = {
		{ "Category", "ProceduralTerrain" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//how deep of a hole to make\n" },
#endif
		{ "ModuleRelativePath", "ProceduralTerrain.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "how deep of a hole to make" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "ProceduralTerrain" },
		{ "ModuleRelativePath", "ProceduralTerrain.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralTerrainMesh_MetaData[] = {
		{ "Category", "ProceduralTerrain" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProceduralTerrain.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_XSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_YSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UVScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Depth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralTerrainMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AProceduralTerrain_AlterMesh, "AlterMesh" }, // 726060683
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralTerrain>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_XSize = { "XSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralTerrain, XSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XSize_MetaData), NewProp_XSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_YSize = { "YSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralTerrain, YSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YSize_MetaData), NewProp_YSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_ZMultiplier = { "ZMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralTerrain, ZMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZMultiplier_MetaData), NewProp_ZMultiplier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralTerrain, NoiseScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseScale_MetaData), NewProp_NoiseScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralTerrain, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralTerrain, UVScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVScale_MetaData), NewProp_UVScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralTerrain, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_Depth = { "Depth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralTerrain, Depth), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Depth_MetaData), NewProp_Depth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralTerrain, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_ProceduralTerrainMesh = { "ProceduralTerrainMesh", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralTerrain, ProceduralTerrainMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralTerrainMesh_MetaData), NewProp_ProceduralTerrainMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralTerrain_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_XSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_YSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_ZMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_NoiseScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_UVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_Depth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralTerrain_Statics::NewProp_ProceduralTerrainMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTerrain_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProceduralTerrain_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GAM415_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTerrain_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProceduralTerrain_Statics::ClassParams = {
	&AProceduralTerrain::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AProceduralTerrain_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTerrain_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralTerrain_Statics::Class_MetaDataParams), Z_Construct_UClass_AProceduralTerrain_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProceduralTerrain()
{
	if (!Z_Registration_Info_UClass_AProceduralTerrain.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralTerrain.OuterSingleton, Z_Construct_UClass_AProceduralTerrain_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProceduralTerrain.OuterSingleton;
}
template<> GAM415_PROJECT_API UClass* StaticClass<AProceduralTerrain>()
{
	return AProceduralTerrain::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralTerrain);
AProceduralTerrain::~AProceduralTerrain() {}
// End Class AProceduralTerrain

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_ProceduralTerrain_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralTerrain, AProceduralTerrain::StaticClass, TEXT("AProceduralTerrain"), &Z_Registration_Info_UClass_AProceduralTerrain, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralTerrain), 611817833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_ProceduralTerrain_h_537626276(TEXT("/Script/GAM415_Project"),
	Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_ProceduralTerrain_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_ProceduralTerrain_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
