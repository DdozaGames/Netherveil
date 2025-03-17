// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Quest/QuestManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_AQuestManager();
	NETHERVEIL_API UClass* Z_Construct_UClass_AQuestManager_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	DEFINE_FUNCTION(AQuestManager::execCompleteQuest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompleteQuest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuestManager::execStartQuest)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_QuestID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartQuest(Z_Param_QuestID);
		P_NATIVE_END;
	}
	void AQuestManager::StaticRegisterNativesAQuestManager()
	{
		UClass* Class = AQuestManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompleteQuest", &AQuestManager::execCompleteQuest },
			{ "StartQuest", &AQuestManager::execStartQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AQuestManager_CompleteQuest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestManager_CompleteQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestManager_CompleteQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestManager, nullptr, "CompleteQuest", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_CompleteQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuestManager_CompleteQuest_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AQuestManager_CompleteQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuestManager_CompleteQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuestManager_StartQuest_Statics
	{
		struct QuestManager_eventStartQuest_Parms
		{
			FName QuestID;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_QuestID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AQuestManager_StartQuest_Statics::NewProp_QuestID = { "QuestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuestManager_eventStartQuest_Parms, QuestID), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuestManager_StartQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestManager_StartQuest_Statics::NewProp_QuestID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestManager_StartQuest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestManager_StartQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestManager, nullptr, "StartQuest", nullptr, nullptr, Z_Construct_UFunction_AQuestManager_StartQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_StartQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_AQuestManager_StartQuest_Statics::QuestManager_eventStartQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_StartQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AQuestManager_StartQuest_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestManager_StartQuest_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AQuestManager_StartQuest_Statics::QuestManager_eventStartQuest_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AQuestManager_StartQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AQuestManager_StartQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AQuestManager);
	UClass* Z_Construct_UClass_AQuestManager_NoRegister()
	{
		return AQuestManager::StaticClass();
	}
	struct Z_Construct_UClass_AQuestManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestDataTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuestManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AQuestManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AQuestManager_CompleteQuest, "CompleteQuest" }, // 1678252235
		{ &Z_Construct_UFunction_AQuestManager_StartQuest, "StartQuest" }, // 179458941
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Quest/QuestManager.h" },
		{ "ModuleRelativePath", "Public/Quest/QuestManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestDataTable_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/Quest/QuestManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestDataTable = { "QuestDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AQuestManager, QuestDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestDataTable_MetaData), Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestDataTable_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuestManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestManager_Statics::NewProp_QuestDataTable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuestManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AQuestManager_Statics::ClassParams = {
		&AQuestManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AQuestManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AQuestManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuestManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AQuestManager()
	{
		if (!Z_Registration_Info_UClass_AQuestManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQuestManager.OuterSingleton, Z_Construct_UClass_AQuestManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AQuestManager.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<AQuestManager>()
	{
		return AQuestManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestManager);
	AQuestManager::~AQuestManager() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_QuestManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_QuestManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AQuestManager, AQuestManager::StaticClass, TEXT("AQuestManager"), &Z_Registration_Info_UClass_AQuestManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQuestManager), 1219022563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_QuestManager_h_3297657869(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_QuestManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_QuestManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
