// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Enemy/EnemySpider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemySpider() {}
// Cross Module References
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemy();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemySpider();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemySpider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	void AEnemySpider::StaticRegisterNativesAEnemySpider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemySpider);
	UClass* Z_Construct_UClass_AEnemySpider_NoRegister()
	{
		return AEnemySpider::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpider_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpider_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/EnemySpider.h" },
		{ "ModuleRelativePath", "Public/Enemy/EnemySpider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpider_Statics::ClassParams = {
		&AEnemySpider::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpider_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemySpider_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEnemySpider()
	{
		if (!Z_Registration_Info_UClass_AEnemySpider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemySpider.OuterSingleton, Z_Construct_UClass_AEnemySpider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemySpider.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<AEnemySpider>()
	{
		return AEnemySpider::StaticClass();
	}
	AEnemySpider::AEnemySpider() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemySpider);
	AEnemySpider::~AEnemySpider() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemySpider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemySpider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemySpider, AEnemySpider::StaticClass, TEXT("AEnemySpider"), &Z_Registration_Info_UClass_AEnemySpider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySpider), 2555454215U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemySpider_h_1769601817(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemySpider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemySpider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
