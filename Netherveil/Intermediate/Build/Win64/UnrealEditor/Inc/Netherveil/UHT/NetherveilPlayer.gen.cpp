// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Player/NetherveilPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetherveilPlayer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_ANetherveilPlayer();
	NETHERVEIL_API UClass* Z_Construct_UClass_ANetherveilPlayer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	void ANetherveilPlayer::StaticRegisterNativesANetherveilPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetherveilPlayer);
	UClass* Z_Construct_UClass_ANetherveilPlayer_NoRegister()
	{
		return ANetherveilPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ANetherveilPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_springArmComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_springArmComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CamComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CamComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_walkSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_walkSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeedMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetherveilPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/NetherveilPlayer.h" },
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_springArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_springArmComp = { "springArmComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilPlayer, springArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_springArmComp_MetaData), Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_springArmComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_CamComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_CamComp = { "CamComp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilPlayer, CamComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_CamComp_MetaData), Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_CamComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_walkSpeed_MetaData[] = {
		{ "Category", "PlayerSetting" },
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_walkSpeed = { "walkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilPlayer, walkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_walkSpeed_MetaData), Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_walkSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_SprintSpeedMultiplier_MetaData[] = {
		{ "Category", "PlayerSetting" },
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_SprintSpeedMultiplier = { "SprintSpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilPlayer, SprintSpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_SprintSpeedMultiplier_MetaData), Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_SprintSpeedMultiplier_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetherveilPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_springArmComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_CamComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_walkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_SprintSpeedMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetherveilPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetherveilPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetherveilPlayer_Statics::ClassParams = {
		&ANetherveilPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANetherveilPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetherveilPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ANetherveilPlayer()
	{
		if (!Z_Registration_Info_UClass_ANetherveilPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetherveilPlayer.OuterSingleton, Z_Construct_UClass_ANetherveilPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANetherveilPlayer.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<ANetherveilPlayer>()
	{
		return ANetherveilPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetherveilPlayer);
	ANetherveilPlayer::~ANetherveilPlayer() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_NetherveilPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_NetherveilPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANetherveilPlayer, ANetherveilPlayer::StaticClass, TEXT("ANetherveilPlayer"), &Z_Registration_Info_UClass_ANetherveilPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetherveilPlayer), 2431416287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_NetherveilPlayer_h_527511161(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_NetherveilPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_NetherveilPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
