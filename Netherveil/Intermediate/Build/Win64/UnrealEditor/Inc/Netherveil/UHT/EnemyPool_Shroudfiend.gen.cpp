// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Enemy/EnemyPool_Shroudfiend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyPool_Shroudfiend() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyPool_Shroudfiend();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyPool_Shroudfiend_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	void AEnemyPool_Shroudfiend::StaticRegisterNativesAEnemyPool_Shroudfiend()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyPool_Shroudfiend);
	UClass* Z_Construct_UClass_AEnemyPool_Shroudfiend_NoRegister()
	{
		return AEnemyPool_Shroudfiend::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DarkShroudfiendFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DarkShroudfiendFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteShroudfiendFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WhiteShroudfiendFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PoolSize;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pool_DarkShroudfiend_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pool_DarkShroudfiend_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pool_DarkShroudfiend;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pool_WhiteShroudfiend_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pool_WhiteShroudfiend_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pool_WhiteShroudfiend;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/EnemyPool_Shroudfiend.h" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyPool_Shroudfiend.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_DarkShroudfiendFactory_MetaData[] = {
		{ "Category", "EnemyPool_Shroudfiend" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyPool_Shroudfiend.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_DarkShroudfiendFactory = { "DarkShroudfiendFactory", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPool_Shroudfiend, DarkShroudfiendFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_DarkShroudfiendFactory_MetaData), Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_DarkShroudfiendFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_WhiteShroudfiendFactory_MetaData[] = {
		{ "Category", "EnemyPool_Shroudfiend" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyPool_Shroudfiend.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_WhiteShroudfiendFactory = { "WhiteShroudfiendFactory", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPool_Shroudfiend, WhiteShroudfiendFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_WhiteShroudfiendFactory_MetaData), Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_WhiteShroudfiendFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_PoolSize_MetaData[] = {
		{ "Category", "EnemyPool_Shroudfiend" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyPool_Shroudfiend.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPool_Shroudfiend, PoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_PoolSize_MetaData), Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_PoolSize_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_Pool_DarkShroudfiend_Inner = { "Pool_DarkShroudfiend", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_Pool_DarkShroudfiend_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/EnemyPool_Shroudfiend.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_Pool_DarkShroudfiend = { "Pool_DarkShroudfiend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPool_Shroudfiend, Pool_DarkShroudfiend), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_Pool_DarkShroudfiend_MetaData), Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_Pool_DarkShroudfiend_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_Pool_WhiteShroudfiend_Inner = { "Pool_WhiteShroudfiend", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_Pool_WhiteShroudfiend_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/EnemyPool_Shroudfiend.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_Pool_WhiteShroudfiend = { "Pool_WhiteShroudfiend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyPool_Shroudfiend, Pool_WhiteShroudfiend), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_Pool_WhiteShroudfiend_MetaData), Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_Pool_WhiteShroudfiend_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_DarkShroudfiendFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_WhiteShroudfiendFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_PoolSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_Pool_DarkShroudfiend_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_Pool_DarkShroudfiend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_Pool_WhiteShroudfiend_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::NewProp_Pool_WhiteShroudfiend,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyPool_Shroudfiend>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::ClassParams = {
		&AEnemyPool_Shroudfiend::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemyPool_Shroudfiend()
	{
		if (!Z_Registration_Info_UClass_AEnemyPool_Shroudfiend.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyPool_Shroudfiend.OuterSingleton, Z_Construct_UClass_AEnemyPool_Shroudfiend_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyPool_Shroudfiend.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<AEnemyPool_Shroudfiend>()
	{
		return AEnemyPool_Shroudfiend::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyPool_Shroudfiend);
	AEnemyPool_Shroudfiend::~AEnemyPool_Shroudfiend() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyPool_Shroudfiend_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyPool_Shroudfiend_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyPool_Shroudfiend, AEnemyPool_Shroudfiend::StaticClass, TEXT("AEnemyPool_Shroudfiend"), &Z_Registration_Info_UClass_AEnemyPool_Shroudfiend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyPool_Shroudfiend), 3059792069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyPool_Shroudfiend_h_3955761181(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyPool_Shroudfiend_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyPool_Shroudfiend_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
