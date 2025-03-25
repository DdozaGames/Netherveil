// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Enemy/EnemyAnimBoss.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAnimBoss() {}
// Cross Module References
	NETHERVEIL_API UClass* Z_Construct_UClass_UEnemyAnim();
	NETHERVEIL_API UClass* Z_Construct_UClass_UEnemyAnimBoss();
	NETHERVEIL_API UClass* Z_Construct_UClass_UEnemyAnimBoss_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	void UEnemyAnimBoss::StaticRegisterNativesUEnemyAnimBoss()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyAnimBoss);
	UClass* Z_Construct_UClass_UEnemyAnimBoss_NoRegister()
	{
		return UEnemyAnimBoss::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyAnimBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyAnimBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnemyAnim,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimBoss_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimBoss_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Enemy/EnemyAnimBoss.h" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyAnimBoss.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyAnimBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAnimBoss>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAnimBoss_Statics::ClassParams = {
		&UEnemyAnimBoss::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimBoss_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyAnimBoss_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UEnemyAnimBoss()
	{
		if (!Z_Registration_Info_UClass_UEnemyAnimBoss.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyAnimBoss.OuterSingleton, Z_Construct_UClass_UEnemyAnimBoss_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyAnimBoss.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<UEnemyAnimBoss>()
	{
		return UEnemyAnimBoss::StaticClass();
	}
	UEnemyAnimBoss::UEnemyAnimBoss(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAnimBoss);
	UEnemyAnimBoss::~UEnemyAnimBoss() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyAnimBoss_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyAnimBoss_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyAnimBoss, UEnemyAnimBoss::StaticClass, TEXT("UEnemyAnimBoss"), &Z_Registration_Info_UClass_UEnemyAnimBoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyAnimBoss), 3594026779U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyAnimBoss_h_3142500136(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyAnimBoss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyAnimBoss_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
