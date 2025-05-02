// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/NetherveilGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetherveilGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyPool_Shroudfiend_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyPool_Spider_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemySpawner_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_ANetherveilGameMode();
	NETHERVEIL_API UClass* Z_Construct_UClass_ANetherveilGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	DEFINE_FUNCTION(ANetherveilGameMode::execStopSpawning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSpawning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetherveilGameMode::execOnStageClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStageClear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANetherveilGameMode::execStartStage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_StageIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartStage(Z_Param_StageIndex);
		P_NATIVE_END;
	}
	void ANetherveilGameMode::StaticRegisterNativesANetherveilGameMode()
	{
		UClass* Class = ANetherveilGameMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnStageClear", &ANetherveilGameMode::execOnStageClear },
			{ "StartStage", &ANetherveilGameMode::execStartStage },
			{ "StopSpawning", &ANetherveilGameMode::execStopSpawning },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANetherveilGameMode_OnStageClear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetherveilGameMode_OnStageClear_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NetherveilGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetherveilGameMode_OnStageClear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetherveilGameMode, nullptr, "OnStageClear", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetherveilGameMode_OnStageClear_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetherveilGameMode_OnStageClear_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ANetherveilGameMode_OnStageClear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetherveilGameMode_OnStageClear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetherveilGameMode_StartStage_Statics
	{
		struct NetherveilGameMode_eventStartStage_Parms
		{
			int32 StageIndex;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_StageIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ANetherveilGameMode_StartStage_Statics::NewProp_StageIndex = { "StageIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NetherveilGameMode_eventStartStage_Parms, StageIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANetherveilGameMode_StartStage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANetherveilGameMode_StartStage_Statics::NewProp_StageIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetherveilGameMode_StartStage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NetherveilGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetherveilGameMode_StartStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetherveilGameMode, nullptr, "StartStage", nullptr, nullptr, Z_Construct_UFunction_ANetherveilGameMode_StartStage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANetherveilGameMode_StartStage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANetherveilGameMode_StartStage_Statics::NetherveilGameMode_eventStartStage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetherveilGameMode_StartStage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetherveilGameMode_StartStage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetherveilGameMode_StartStage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ANetherveilGameMode_StartStage_Statics::NetherveilGameMode_eventStartStage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ANetherveilGameMode_StartStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetherveilGameMode_StartStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANetherveilGameMode_StopSpawning_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANetherveilGameMode_StopSpawning_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NetherveilGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANetherveilGameMode_StopSpawning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANetherveilGameMode, nullptr, "StopSpawning", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANetherveilGameMode_StopSpawning_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANetherveilGameMode_StopSpawning_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ANetherveilGameMode_StopSpawning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANetherveilGameMode_StopSpawning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetherveilGameMode);
	UClass* Z_Construct_UClass_ANetherveilGameMode_NoRegister()
	{
		return ANetherveilGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANetherveilGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StageSpawners_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageSpawners_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StageSpawners;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentStage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentStage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedEnemyPool_Shroudfiend_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SharedEnemyPool_Shroudfiend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SharedEnemyPool_Spider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SharedEnemyPool_Spider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetherveilGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilGameMode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ANetherveilGameMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANetherveilGameMode_OnStageClear, "OnStageClear" }, // 1408645802
		{ &Z_Construct_UFunction_ANetherveilGameMode_StartStage, "StartStage" }, // 2711274185
		{ &Z_Construct_UFunction_ANetherveilGameMode_StopSpawning, "StopSpawning" }, // 3347540295
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilGameMode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NetherveilGameMode.h" },
		{ "ModuleRelativePath", "NetherveilGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_StageSpawners_Inner = { "StageSpawners", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemySpawner_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_StageSpawners_MetaData[] = {
		{ "Category", "NetherveilGameMode" },
		{ "ModuleRelativePath", "NetherveilGameMode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_StageSpawners = { "StageSpawners", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilGameMode, StageSpawners), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_StageSpawners_MetaData), Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_StageSpawners_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_CurrentStage_MetaData[] = {
		{ "Category", "NetherveilGameMode" },
		{ "ModuleRelativePath", "NetherveilGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_CurrentStage = { "CurrentStage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilGameMode, CurrentStage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_CurrentStage_MetaData), Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_CurrentStage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_SharedEnemyPool_Shroudfiend_MetaData[] = {
		{ "ModuleRelativePath", "NetherveilGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_SharedEnemyPool_Shroudfiend = { "SharedEnemyPool_Shroudfiend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilGameMode, SharedEnemyPool_Shroudfiend), Z_Construct_UClass_AEnemyPool_Shroudfiend_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_SharedEnemyPool_Shroudfiend_MetaData), Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_SharedEnemyPool_Shroudfiend_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_SharedEnemyPool_Spider_MetaData[] = {
		{ "ModuleRelativePath", "NetherveilGameMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_SharedEnemyPool_Spider = { "SharedEnemyPool_Spider", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilGameMode, SharedEnemyPool_Spider), Z_Construct_UClass_AEnemyPool_Spider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_SharedEnemyPool_Spider_MetaData), Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_SharedEnemyPool_Spider_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetherveilGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_StageSpawners_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_StageSpawners,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_CurrentStage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_SharedEnemyPool_Shroudfiend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilGameMode_Statics::NewProp_SharedEnemyPool_Spider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetherveilGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetherveilGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetherveilGameMode_Statics::ClassParams = {
		&ANetherveilGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANetherveilGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilGameMode_Statics::PropPointers),
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetherveilGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANetherveilGameMode()
	{
		if (!Z_Registration_Info_UClass_ANetherveilGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetherveilGameMode.OuterSingleton, Z_Construct_UClass_ANetherveilGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANetherveilGameMode.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<ANetherveilGameMode>()
	{
		return ANetherveilGameMode::StaticClass();
	}
	ANetherveilGameMode::ANetherveilGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetherveilGameMode);
	ANetherveilGameMode::~ANetherveilGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_NetherveilGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_NetherveilGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANetherveilGameMode, ANetherveilGameMode::StaticClass, TEXT("ANetherveilGameMode"), &Z_Registration_Info_UClass_ANetherveilGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetherveilGameMode), 2356422779U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_NetherveilGameMode_h_901200404(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_NetherveilGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_NetherveilGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
