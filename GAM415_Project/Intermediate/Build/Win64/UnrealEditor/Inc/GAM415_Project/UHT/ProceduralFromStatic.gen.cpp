// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAM415_Project/ProceduralFromStatic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProceduralFromStatic() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
GAM415_PROJECT_API UClass* Z_Construct_UClass_AProceduralFromStatic();
GAM415_PROJECT_API UClass* Z_Construct_UClass_AProceduralFromStatic_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAM415_Project();
// End Cross Module References

// Begin Class AProceduralFromStatic
void AProceduralFromStatic::StaticRegisterNativesAProceduralFromStatic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProceduralFromStatic);
UClass* Z_Construct_UClass_AProceduralFromStatic_NoRegister()
{
	return AProceduralFromStatic::StaticClass();
}
struct Z_Construct_UClass_AProceduralFromStatic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ProceduralFromStatic.h" },
		{ "ModuleRelativePath", "ProceduralFromStatic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "Category", "ProceduralFromStatic" },
		{ "ModuleRelativePath", "ProceduralFromStatic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
		{ "Category", "ProceduralFromStatic" },
		{ "ModuleRelativePath", "ProceduralFromStatic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
		{ "Category", "ProceduralFromStatic" },
		{ "ModuleRelativePath", "ProceduralFromStatic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[] = {
		{ "Category", "ProceduralFromStatic" },
		{ "ModuleRelativePath", "ProceduralFromStatic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[] = {
		{ "Category", "ProceduralFromStatic" },
		{ "ModuleRelativePath", "ProceduralFromStatic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[] = {
		{ "Category", "ProceduralFromStatic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProceduralFromStatic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticProcMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProceduralFromStatic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Triangles;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticProcMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProceduralFromStatic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralFromStatic, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralFromStatic, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Triangles_MetaData), NewProp_Triangles_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralFromStatic, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normals_MetaData), NewProp_Normals_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_UV0_Inner = { "UV0", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralFromStatic, UV0), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0_MetaData), NewProp_UV0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralFromStatic, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColors_MetaData), NewProp_VertexColors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralFromStatic, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMesh_MetaData), NewProp_BaseMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_StaticProcMesh = { "StaticProcMesh", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProceduralFromStatic, StaticProcMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticProcMesh_MetaData), NewProp_StaticProcMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProceduralFromStatic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_Triangles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_Triangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_Normals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_Normals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_UV0_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_VertexColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_VertexColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_BaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProceduralFromStatic_Statics::NewProp_StaticProcMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFromStatic_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProceduralFromStatic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GAM415_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFromStatic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProceduralFromStatic_Statics::ClassParams = {
	&AProceduralFromStatic::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProceduralFromStatic_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFromStatic_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProceduralFromStatic_Statics::Class_MetaDataParams), Z_Construct_UClass_AProceduralFromStatic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProceduralFromStatic()
{
	if (!Z_Registration_Info_UClass_AProceduralFromStatic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProceduralFromStatic.OuterSingleton, Z_Construct_UClass_AProceduralFromStatic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProceduralFromStatic.OuterSingleton;
}
template<> GAM415_PROJECT_API UClass* StaticClass<AProceduralFromStatic>()
{
	return AProceduralFromStatic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProceduralFromStatic);
AProceduralFromStatic::~AProceduralFromStatic() {}
// End Class AProceduralFromStatic

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_ProceduralFromStatic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProceduralFromStatic, AProceduralFromStatic::StaticClass, TEXT("AProceduralFromStatic"), &Z_Registration_Info_UClass_AProceduralFromStatic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProceduralFromStatic), 3353232190U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_ProceduralFromStatic_h_1795156969(TEXT("/Script/GAM415_Project"),
	Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_ProceduralFromStatic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_ProceduralFromStatic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
