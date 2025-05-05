// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Enemy/FireballPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireballPool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyBossAttack_Fireball_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_AFireballPool();
	NETHERVEIL_API UClass* Z_Construct_UClass_AFireballPool_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	void AFireballPool::StaticRegisterNativesAFireballPool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFireballPool);
	UClass* Z_Construct_UClass_AFireballPool_NoRegister()
	{
		return AFireballPool::StaticClass();
	}
	struct Z_Construct_UClass_AFireballPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireballFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FireballFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PoolSize;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireballPool_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireballPool_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FireballPool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFireballPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireballPool_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireballPool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/FireballPool.h" },
		{ "ModuleRelativePath", "Public/Enemy/FireballPool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireballPool_Statics::NewProp_FireballFactory_MetaData[] = {
		{ "Category", "FireballPool" },
		{ "ModuleRelativePath", "Public/Enemy/FireballPool.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFireballPool_Statics::NewProp_FireballFactory = { "FireballFactory", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireballPool, FireballFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemyBossAttack_Fireball_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireballPool_Statics::NewProp_FireballFactory_MetaData), Z_Construct_UClass_AFireballPool_Statics::NewProp_FireballFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireballPool_Statics::NewProp_PoolSize_MetaData[] = {
		{ "Category", "FireballPool" },
		{ "ModuleRelativePath", "Public/Enemy/FireballPool.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFireballPool_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireballPool, PoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireballPool_Statics::NewProp_PoolSize_MetaData), Z_Construct_UClass_AFireballPool_Statics::NewProp_PoolSize_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireballPool_Statics::NewProp_FireballPool_Inner = { "FireballPool", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AEnemyBossAttack_Fireball_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireballPool_Statics::NewProp_FireballPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/FireballPool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFireballPool_Statics::NewProp_FireballPool = { "FireballPool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFireballPool, FireballPool), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireballPool_Statics::NewProp_FireballPool_MetaData), Z_Construct_UClass_AFireballPool_Statics::NewProp_FireballPool_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFireballPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireballPool_Statics::NewProp_FireballFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireballPool_Statics::NewProp_PoolSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireballPool_Statics::NewProp_FireballPool_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireballPool_Statics::NewProp_FireballPool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFireballPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireballPool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFireballPool_Statics::ClassParams = {
		&AFireballPool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFireballPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFireballPool_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFireballPool_Statics::Class_MetaDataParams), Z_Construct_UClass_AFireballPool_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFireballPool_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFireballPool()
	{
		if (!Z_Registration_Info_UClass_AFireballPool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFireballPool.OuterSingleton, Z_Construct_UClass_AFireballPool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFireballPool.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<AFireballPool>()
	{
		return AFireballPool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireballPool);
	AFireballPool::~AFireballPool() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_FireballPool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_FireballPool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFireballPool, AFireballPool::StaticClass, TEXT("AFireballPool"), &Z_Registration_Info_UClass_AFireballPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFireballPool), 1456668872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_FireballPool_h_140608909(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_FireballPool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_FireballPool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
