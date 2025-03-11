// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Enemy/EnemyShroudfiendMelee.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyShroudfiendMelee() {}
// Cross Module References
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemy();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyShroudfiendMelee();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyShroudfiendMelee_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	void AEnemyShroudfiendMelee::StaticRegisterNativesAEnemyShroudfiendMelee()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyShroudfiendMelee);
	UClass* Z_Construct_UClass_AEnemyShroudfiendMelee_NoRegister()
	{
		return AEnemyShroudfiendMelee::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyShroudfiendMelee_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyShroudfiendMelee_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShroudfiendMelee_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShroudfiendMelee_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/EnemyShroudfiendMelee.h" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyShroudfiendMelee.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyShroudfiendMelee_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyShroudfiendMelee>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyShroudfiendMelee_Statics::ClassParams = {
		&AEnemyShroudfiendMelee::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShroudfiendMelee_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyShroudfiendMelee_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEnemyShroudfiendMelee()
	{
		if (!Z_Registration_Info_UClass_AEnemyShroudfiendMelee.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyShroudfiendMelee.OuterSingleton, Z_Construct_UClass_AEnemyShroudfiendMelee_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyShroudfiendMelee.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<AEnemyShroudfiendMelee>()
	{
		return AEnemyShroudfiendMelee::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyShroudfiendMelee);
	AEnemyShroudfiendMelee::~AEnemyShroudfiendMelee() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyShroudfiendMelee_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyShroudfiendMelee_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyShroudfiendMelee, AEnemyShroudfiendMelee::StaticClass, TEXT("AEnemyShroudfiendMelee"), &Z_Registration_Info_UClass_AEnemyShroudfiendMelee, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyShroudfiendMelee), 3136154079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyShroudfiendMelee_h_1698163216(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyShroudfiendMelee_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyShroudfiendMelee_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
