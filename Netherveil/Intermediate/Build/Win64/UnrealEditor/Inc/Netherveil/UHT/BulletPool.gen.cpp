// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Player/BulletPool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBulletPool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NETHERVEIL_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_ABulletPool();
	NETHERVEIL_API UClass* Z_Construct_UClass_ABulletPool_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	void ABulletPool::StaticRegisterNativesABulletPool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABulletPool);
	UClass* Z_Construct_UClass_ABulletPool_NoRegister()
	{
		return ABulletPool::StaticClass();
	}
	struct Z_Construct_UClass_ABulletPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PoolSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABulletPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletPool_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletPool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/BulletPool.h" },
		{ "ModuleRelativePath", "Public/Player/BulletPool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletPool_Statics::NewProp_BulletClass_MetaData[] = {
		{ "Category", "BulletPool" },
		{ "ModuleRelativePath", "Public/Player/BulletPool.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABulletPool_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletPool, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletPool_Statics::NewProp_BulletClass_MetaData), Z_Construct_UClass_ABulletPool_Statics::NewProp_BulletClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABulletPool_Statics::NewProp_PoolSize_MetaData[] = {
		{ "Category", "BulletPool" },
		{ "ModuleRelativePath", "Public/Player/BulletPool.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABulletPool_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABulletPool, PoolSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletPool_Statics::NewProp_PoolSize_MetaData), Z_Construct_UClass_ABulletPool_Statics::NewProp_PoolSize_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABulletPool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletPool_Statics::NewProp_BulletClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABulletPool_Statics::NewProp_PoolSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABulletPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABulletPool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABulletPool_Statics::ClassParams = {
		&ABulletPool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABulletPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABulletPool_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletPool_Statics::Class_MetaDataParams), Z_Construct_UClass_ABulletPool_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABulletPool_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABulletPool()
	{
		if (!Z_Registration_Info_UClass_ABulletPool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABulletPool.OuterSingleton, Z_Construct_UClass_ABulletPool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABulletPool.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<ABulletPool>()
	{
		return ABulletPool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABulletPool);
	ABulletPool::~ABulletPool() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_BulletPool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_BulletPool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABulletPool, ABulletPool::StaticClass, TEXT("ABulletPool"), &Z_Registration_Info_UClass_ABulletPool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABulletPool), 4209895069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_BulletPool_h_4190546068(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_BulletPool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_BulletPool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
