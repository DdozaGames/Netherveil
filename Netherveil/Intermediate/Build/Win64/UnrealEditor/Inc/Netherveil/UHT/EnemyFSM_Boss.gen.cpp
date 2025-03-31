// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Enemy/EnemyFSM_Boss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyFSM_Boss() {}
// Cross Module References
	NETHERVEIL_API UClass* Z_Construct_UClass_UEnemyAnimBoss_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_UEnemyFSM();
	NETHERVEIL_API UClass* Z_Construct_UClass_UEnemyFSM_Boss();
	NETHERVEIL_API UClass* Z_Construct_UClass_UEnemyFSM_Boss_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	void UEnemyFSM_Boss::StaticRegisterNativesUEnemyFSM_Boss()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyFSM_Boss);
	UClass* Z_Construct_UClass_UEnemyFSM_Boss_NoRegister()
	{
		return UEnemyFSM_Boss::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyFSM_Boss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bossAnim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bossAnim;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyFSM_Boss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnemyFSM,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Boss_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Boss_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Enemy/EnemyFSM_Boss.h" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyFSM_Boss.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyFSM_Boss_Statics::NewProp_bossAnim_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/EnemyFSM_Boss.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyFSM_Boss_Statics::NewProp_bossAnim = { "bossAnim", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyFSM_Boss, bossAnim), Z_Construct_UClass_UEnemyAnimBoss_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Boss_Statics::NewProp_bossAnim_MetaData), Z_Construct_UClass_UEnemyFSM_Boss_Statics::NewProp_bossAnim_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyFSM_Boss_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyFSM_Boss_Statics::NewProp_bossAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyFSM_Boss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyFSM_Boss>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyFSM_Boss_Statics::ClassParams = {
		&UEnemyFSM_Boss::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyFSM_Boss_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Boss_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Boss_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyFSM_Boss_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyFSM_Boss_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEnemyFSM_Boss()
	{
		if (!Z_Registration_Info_UClass_UEnemyFSM_Boss.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyFSM_Boss.OuterSingleton, Z_Construct_UClass_UEnemyFSM_Boss_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyFSM_Boss.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<UEnemyFSM_Boss>()
	{
		return UEnemyFSM_Boss::StaticClass();
	}
	UEnemyFSM_Boss::UEnemyFSM_Boss() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyFSM_Boss);
	UEnemyFSM_Boss::~UEnemyFSM_Boss() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyFSM_Boss_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyFSM_Boss_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyFSM_Boss, UEnemyFSM_Boss::StaticClass, TEXT("UEnemyFSM_Boss"), &Z_Registration_Info_UClass_UEnemyFSM_Boss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyFSM_Boss), 4128886001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyFSM_Boss_h_1240997393(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyFSM_Boss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyFSM_Boss_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
