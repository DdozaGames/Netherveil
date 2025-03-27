// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Enemy/EnemyBossAttack_EnergyWave.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBossAttack_EnergyWave() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyBossAttack_EnergyWave();
	NETHERVEIL_API UClass* Z_Construct_UClass_AEnemyBossAttack_EnergyWave_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	void AEnemyBossAttack_EnergyWave::StaticRegisterNativesAEnemyBossAttack_EnergyWave()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyBossAttack_EnergyWave);
	UClass* Z_Construct_UClass_AEnemyBossAttack_EnergyWave_NoRegister()
	{
		return AEnemyBossAttack_EnergyWave::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaveRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaveParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WaveParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanDetect_MetaData[];
#endif
		static void NewProp_bCanDetect_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDetect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy/EnemyBossAttack_EnergyWave.h" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBossAttack_EnergyWave.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/EnemyBossAttack_EnergyWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xd3\xb5\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBossAttack_EnergyWave, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_Speed_MetaData), Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_Speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/EnemyBossAttack_EnergyWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xc5\xb8\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBossAttack_EnergyWave, MaxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_MaxDistance_MetaData), Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_MaxDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_WaveRadius_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/EnemyBossAttack_EnergyWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_WaveRadius = { "WaveRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBossAttack_EnergyWave, WaveRadius), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_WaveRadius_MetaData), Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_WaveRadius_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Combat" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Enemy/EnemyBossAttack_EnergyWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBossAttack_EnergyWave, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_Damage_MetaData), Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_Damage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_WaveParticle_MetaData[] = {
		{ "Category", "Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xc5\xac \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xba\xef\xbf\xbd \xc8\xbf\xef\xbf\xbd\xef\xbf\xbd)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBossAttack_EnergyWave.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc6\xbc\xc5\xac \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xba\xef\xbf\xbd \xc8\xbf\xef\xbf\xbd\xef\xbf\xbd)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_WaveParticle = { "WaveParticle", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemyBossAttack_EnergyWave, WaveParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_WaveParticle_MetaData), Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_WaveParticle_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_bCanDetect_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBossAttack_EnergyWave.h" },
	};
#endif
	void Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_bCanDetect_SetBit(void* Obj)
	{
		((AEnemyBossAttack_EnergyWave*)Obj)->bCanDetect = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_bCanDetect = { "bCanDetect", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AEnemyBossAttack_EnergyWave), &Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_bCanDetect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_bCanDetect_MetaData), Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_bCanDetect_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_MaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_WaveRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_WaveParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::NewProp_bCanDetect,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBossAttack_EnergyWave>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::ClassParams = {
		&AEnemyBossAttack_EnergyWave::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AEnemyBossAttack_EnergyWave()
	{
		if (!Z_Registration_Info_UClass_AEnemyBossAttack_EnergyWave.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyBossAttack_EnergyWave.OuterSingleton, Z_Construct_UClass_AEnemyBossAttack_EnergyWave_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyBossAttack_EnergyWave.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<AEnemyBossAttack_EnergyWave>()
	{
		return AEnemyBossAttack_EnergyWave::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyBossAttack_EnergyWave);
	AEnemyBossAttack_EnergyWave::~AEnemyBossAttack_EnergyWave() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyBossAttack_EnergyWave_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyBossAttack_EnergyWave_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyBossAttack_EnergyWave, AEnemyBossAttack_EnergyWave::StaticClass, TEXT("AEnemyBossAttack_EnergyWave"), &Z_Registration_Info_UClass_AEnemyBossAttack_EnergyWave, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyBossAttack_EnergyWave), 3044294647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyBossAttack_EnergyWave_h_3153837464(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyBossAttack_EnergyWave_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyBossAttack_EnergyWave_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
