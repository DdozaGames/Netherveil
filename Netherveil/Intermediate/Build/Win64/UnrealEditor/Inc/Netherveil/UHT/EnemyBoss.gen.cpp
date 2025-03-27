// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Enemy/EnemyBoss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBoss() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemy();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyBoss();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyBoss_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyBossAttack_EnergyWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	DEFINE_FUNCTION(AEnemyBoss::execFireEnergyWave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireEnergyWave();
		P_NATIVE_END;
	}
	void AEnemyBoss::StaticRegisterNativesAEnemyBoss()
	{
		UClass* Class = AEnemyBoss::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FireEnergyWave", &AEnemyBoss::execFireEnergyWave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemyBoss_FireEnergyWave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemyBoss_FireEnergyWave_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBoss.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemyBoss_FireEnergyWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemyBoss, nullptr, "FireEnergyWave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemyBoss_FireEnergyWave_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemyBoss_FireEnergyWave_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemyBoss_FireEnergyWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemyBoss_FireEnergyWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyBoss);
	UClass* Z_Construct_UClass_AEnemyBoss_NoRegister()
	{
		return AEnemyBoss::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnergyWaveFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_EnergyWaveFactory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBoss_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemyBoss_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemyBoss_FireEnergyWave, "FireEnergyWave" }, // 608116188
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBoss_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBoss_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/EnemyBoss.h" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBoss.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBoss_Statics::NewProp_EnergyWaveFactory_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBoss.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyBoss_Statics::NewProp_EnergyWaveFactory = { "EnergyWaveFactory", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBoss, EnergyWaveFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemyBossAttack_EnergyWave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBoss_Statics::NewProp_EnergyWaveFactory_MetaData), Z_Construct_UClass_AEnemyBoss_Statics::NewProp_EnergyWaveFactory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyBoss_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBoss_Statics::NewProp_EnergyWaveFactory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBoss>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBoss_Statics::ClassParams = {
		&AEnemyBoss::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemyBoss_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBoss_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBoss_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyBoss_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBoss_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemyBoss()
	{
		if (!Z_Registration_Info_UClass_AEnemyBoss.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyBoss.OuterSingleton, Z_Construct_UClass_AEnemyBoss_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyBoss.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<AEnemyBoss>()
	{
		return AEnemyBoss::StaticClass();
	}
	AEnemyBoss::AEnemyBoss() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyBoss);
	AEnemyBoss::~AEnemyBoss() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyBoss_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyBoss_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyBoss, AEnemyBoss::StaticClass, TEXT("AEnemyBoss"), &Z_Registration_Info_UClass_AEnemyBoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyBoss), 4003422114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyBoss_h_2926940003(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyBoss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyBoss_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
