// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Quest/StageTriggerVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStageTriggerVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	NETHERVEIL_API UClass* Z_Construct_UClass_AStageTriggerVolume();
	NETHERVEIL_API UClass* Z_Construct_UClass_AStageTriggerVolume_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	DEFINE_FUNCTION(AStageTriggerVolume::execOnPlayerEnter)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerEnter(Z_Param_OverlappedActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void AStageTriggerVolume::StaticRegisterNativesAStageTriggerVolume()
	{
		UClass* Class = AStageTriggerVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerEnter", &AStageTriggerVolume::execOnPlayerEnter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics
	{
		struct StageTriggerVolume_eventOnPlayerEnter_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StageTriggerVolume_eventOnPlayerEnter_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StageTriggerVolume_eventOnPlayerEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::NewProp_OverlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest/StageTriggerVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStageTriggerVolume, nullptr, "OnPlayerEnter", nullptr, nullptr, Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::PropPointers), sizeof(Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::StageTriggerVolume_eventOnPlayerEnter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::Function_MetaDataParams), Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::StageTriggerVolume_eventOnPlayerEnter_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStageTriggerVolume);
	UClass* Z_Construct_UClass_AStageTriggerVolume_NoRegister()
	{
		return AStageTriggerVolume::StaticClass();
	}
	struct Z_Construct_UClass_AStageTriggerVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StageIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStageTriggerVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStageTriggerVolume_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AStageTriggerVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStageTriggerVolume_OnPlayerEnter, "OnPlayerEnter" }, // 2895991921
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStageTriggerVolume_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStageTriggerVolume_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Quest/StageTriggerVolume.h" },
		{ "ModuleRelativePath", "Public/Quest/StageTriggerVolume.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStageTriggerVolume_Statics::NewProp_StageIndex_MetaData[] = {
		{ "Category", "StageTriggerVolume" },
		{ "ModuleRelativePath", "Public/Quest/StageTriggerVolume.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AStageTriggerVolume_Statics::NewProp_StageIndex = { "StageIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStageTriggerVolume, StageIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStageTriggerVolume_Statics::NewProp_StageIndex_MetaData), Z_Construct_UClass_AStageTriggerVolume_Statics::NewProp_StageIndex_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStageTriggerVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStageTriggerVolume_Statics::NewProp_StageIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStageTriggerVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStageTriggerVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStageTriggerVolume_Statics::ClassParams = {
		&AStageTriggerVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStageTriggerVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStageTriggerVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStageTriggerVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AStageTriggerVolume_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStageTriggerVolume_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AStageTriggerVolume()
	{
		if (!Z_Registration_Info_UClass_AStageTriggerVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStageTriggerVolume.OuterSingleton, Z_Construct_UClass_AStageTriggerVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStageTriggerVolume.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<AStageTriggerVolume>()
	{
		return AStageTriggerVolume::StaticClass();
	}
	AStageTriggerVolume::AStageTriggerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStageTriggerVolume);
	AStageTriggerVolume::~AStageTriggerVolume() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_StageTriggerVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_StageTriggerVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStageTriggerVolume, AStageTriggerVolume::StaticClass, TEXT("AStageTriggerVolume"), &Z_Registration_Info_UClass_AStageTriggerVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStageTriggerVolume), 4259096685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_StageTriggerVolume_h_3995932571(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_StageTriggerVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_StageTriggerVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
