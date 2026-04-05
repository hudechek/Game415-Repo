// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GAM415_Project/Portals.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortals() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAM415_PROJECT_API UClass* Z_Construct_UClass_AGAM415_ProjectCharacter_NoRegister();
GAM415_PROJECT_API UClass* Z_Construct_UClass_APortals();
GAM415_PROJECT_API UClass* Z_Construct_UClass_APortals_NoRegister();
UPackage* Z_Construct_UPackage__Script_GAM415_Project();
// End Cross Module References

// Begin Class APortals Function OnOverlapBegin
struct Z_Construct_UFunction_APortals_OnOverlapBegin_Statics
{
	struct Portals_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedActor;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedActor_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portals_eventOnOverlapBegin_Parms, OverlappedActor), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedActor_MetaData), NewProp_OverlappedActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portals_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portals_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portals_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Portals_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Portals_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portals_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::NewProp_OverlappedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortals, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::Portals_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::Portals_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortals_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortals_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortals::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedActor,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class APortals Function OnOverlapBegin

// Begin Class APortals Function SetBool
struct Z_Construct_UFunction_APortals_SetBool_Statics
{
	struct Portals_eventSetBool_Parms
	{
		AGAM415_ProjectCharacter* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portals.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APortals_SetBool_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Portals_eventSetBool_Parms, Player), Z_Construct_UClass_AGAM415_ProjectCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APortals_SetBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APortals_SetBool_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APortals_SetBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortals_SetBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortals, nullptr, "SetBool", nullptr, nullptr, Z_Construct_UFunction_APortals_SetBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APortals_SetBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_APortals_SetBool_Statics::Portals_eventSetBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortals_SetBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortals_SetBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APortals_SetBool_Statics::Portals_eventSetBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APortals_SetBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortals_SetBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortals::execSetBool)
{
	P_GET_OBJECT(AGAM415_ProjectCharacter,Z_Param_Player);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBool(Z_Param_Player);
	P_NATIVE_END;
}
// End Class APortals Function SetBool

// Begin Class APortals Function UpdatePortals
struct Z_Construct_UFunction_APortals_UpdatePortals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Portals.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APortals_UpdatePortals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortals, nullptr, "UpdatePortals", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APortals_UpdatePortals_Statics::Function_MetaDataParams), Z_Construct_UFunction_APortals_UpdatePortals_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APortals_UpdatePortals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APortals_UpdatePortals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APortals::execUpdatePortals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePortals();
	P_NATIVE_END;
}
// End Class APortals Function UpdatePortals

// Begin Class APortals
void APortals::StaticRegisterNativesAPortals()
{
	UClass* Class = APortals::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnOverlapBegin", &APortals::execOnOverlapBegin },
		{ "SetBool", &APortals::execSetBool },
		{ "UpdatePortals", &APortals::execUpdatePortals },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APortals);
UClass* Z_Construct_UClass_APortals_NoRegister()
{
	return APortals::StaticClass();
}
struct Z_Construct_UClass_APortals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Portals.h" },
		{ "ModuleRelativePath", "Portals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Portals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Static Mesh object\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Portals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static Mesh object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[] = {
		{ "Category", "Portals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Scene Capture Comp object\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Portals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scene Capture Comp object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
		{ "Category", "Portals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//RenderTarget Object\n" },
#endif
		{ "ModuleRelativePath", "Portals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RenderTarget Object" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Portals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//box componant\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Portals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "box componant" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherPortal_MetaData[] = {
		{ "Category", "Portals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//object to hold ref to another object in scene for RenderTarget\n" },
#endif
		{ "ModuleRelativePath", "Portals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "object to hold ref to another object in scene for RenderTarget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Portals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Material interface for Dynamic material \n" },
#endif
		{ "ModuleRelativePath", "Portals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material interface for Dynamic material" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootArrow_MetaData[] = {
		{ "Category", "Portals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//arrowComponent for spawning\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Portals.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "arrowComponent for spawning" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherPortal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootArrow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APortals_OnOverlapBegin, "OnOverlapBegin" }, // 1821797223
		{ &Z_Construct_UFunction_APortals_SetBool, "SetBool" }, // 2185393301
		{ &Z_Construct_UFunction_APortals_UpdatePortals, "UpdatePortals" }, // 2434620526
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortals>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortals_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortals, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortals_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortals, CaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponent_MetaData), NewProp_CaptureComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortals_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortals, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortals_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortals, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortals_Statics::NewProp_OtherPortal = { "OtherPortal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortals, OtherPortal), Z_Construct_UClass_APortals_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherPortal_MetaData), NewProp_OtherPortal_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortals_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortals, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APortals_Statics::NewProp_RootArrow = { "RootArrow", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APortals, RootArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootArrow_MetaData), NewProp_RootArrow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APortals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortals_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortals_Statics::NewProp_CaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortals_Statics::NewProp_RenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortals_Statics::NewProp_BoxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortals_Statics::NewProp_OtherPortal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortals_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APortals_Statics::NewProp_RootArrow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortals_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APortals_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_GAM415_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APortals_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APortals_Statics::ClassParams = {
	&APortals::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APortals_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APortals_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APortals_Statics::Class_MetaDataParams), Z_Construct_UClass_APortals_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APortals()
{
	if (!Z_Registration_Info_UClass_APortals.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APortals.OuterSingleton, Z_Construct_UClass_APortals_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APortals.OuterSingleton;
}
template<> GAM415_PROJECT_API UClass* StaticClass<APortals>()
{
	return APortals::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APortals);
APortals::~APortals() {}
// End Class APortals

// Begin Registration
struct Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_Portals_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APortals, APortals::StaticClass, TEXT("APortals"), &Z_Registration_Info_UClass_APortals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APortals), 3474268187U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_Portals_h_992440717(TEXT("/Script/GAM415_Project"),
	Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_Portals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GAM415_Project_Source_GAM415_Project_Portals_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
