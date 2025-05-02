// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Enemy/EnemyPool_Spider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyPool_Spider() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyPool_Spider();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyPool_Spider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	void AEnemyPool_Spider::StaticRegisterNativesAEnemyPool_Spider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyPool_Spider);
	UClass* Z_Construct_UClass_AEnemyPool_Spider_NoRegister()
	{
		return AEnemyPool_Spider::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyPool_Spider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpiderFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpiderFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PoolSize;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pool_Spider_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pool_Spider_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pool_Spider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyPool_Spider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Spider_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPool_Spider_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/EnemyPool_Spider.h" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyPool_Spider.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_SpiderFactory_MetaData[] = {
		{ "Category", "EnemyPool_Spider" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyPool_Spider.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_SpiderFactory = { "SpiderFactory", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPool_Spider, SpiderFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_SpiderFactory_MetaData), Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_SpiderFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_PoolSize_MetaData[] = {
		{ "Category", "EnemyPool_Spider" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyPool_Spider.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPool_Spider, PoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_PoolSize_MetaData), Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_PoolSize_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_Pool_Spider_Inner = { "Pool_Spider", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_Pool_Spider_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/EnemyPool_Spider.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_Pool_Spider = { "Pool_Spider", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPool_Spider, Pool_Spider), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_Pool_Spider_MetaData), Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_Pool_Spider_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyPool_Spider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_SpiderFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_PoolSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_Pool_Spider_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPool_Spider_Statics::NewProp_Pool_Spider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyPool_Spider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyPool_Spider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyPool_Spider_Statics::ClassParams = {
		&AEnemyPool_Spider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyPool_Spider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Spider_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Spider_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyPool_Spider_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Spider_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemyPool_Spider()
	{
		if (!Z_Registration_Info_UClass_AEnemyPool_Spider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyPool_Spider.OuterSingleton, Z_Construct_UClass_AEnemyPool_Spider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyPool_Spider.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<AEnemyPool_Spider>()
	{
		return AEnemyPool_Spider::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyPool_Spider);
	AEnemyPool_Spider::~AEnemyPool_Spider() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyPool_Spider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyPool_Spider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyPool_Spider, AEnemyPool_Spider::StaticClass, TEXT("AEnemyPool_Spider"), &Z_Registration_Info_UClass_AEnemyPool_Spider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyPool_Spider), 3856191181U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyPool_Spider_h_1466631023(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyPool_Spider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyPool_Spider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
