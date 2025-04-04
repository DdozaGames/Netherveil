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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemy();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyAttackBullet_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemySpider();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemySpider_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	DEFINE_FUNCTION(AEnemySpider::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	void AEnemySpider::StaticRegisterNativesAEnemySpider()
	{
		UClass* Class = AEnemySpider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &AEnemySpider::execFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemySpider_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemySpider_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Enemy/EnemySpider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemySpider_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemySpider, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AEnemySpider_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_AEnemySpider_Fire_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AEnemySpider_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AEnemySpider_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemySpider);
	UClass* Z_Construct_UClass_AEnemySpider_NoRegister()
	{
		return AEnemySpider::StaticClass();
	}
	struct Z_Construct_UClass_AEnemySpider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_bulletFactory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemySpider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpider_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemySpider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemySpider_Fire, "Fire" }, // 652627890
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpider_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemySpider_Statics::NewProp_bulletFactory_MetaData[] = {
		{ "Category", "BulletFactory" },
		{ "ModuleRelativePath", "Public/Enemy/EnemySpider.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemySpider_Statics::NewProp_bulletFactory = { "bulletFactory", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemySpider, bulletFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemyAttackBullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpider_Statics::NewProp_bulletFactory_MetaData), Z_Construct_UClass_AEnemySpider_Statics::NewProp_bulletFactory_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemySpider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemySpider_Statics::NewProp_bulletFactory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemySpider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemySpider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemySpider_Statics::ClassParams = {
		&AEnemySpider::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemySpider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpider_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpider_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemySpider_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemySpider_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_AEnemySpider, AEnemySpider::StaticClass, TEXT("AEnemySpider"), &Z_Registration_Info_UClass_AEnemySpider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemySpider), 2620062709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemySpider_h_3123543907(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemySpider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemySpider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
