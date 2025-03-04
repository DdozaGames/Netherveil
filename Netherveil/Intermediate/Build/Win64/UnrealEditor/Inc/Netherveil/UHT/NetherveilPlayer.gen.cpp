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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_ANetherveilPlayer();
	NETHERVEIL_API UClass* Z_Construct_UClass_ANetherveilPlayer_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_granadeGunComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_granadeGunComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sniperGunComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sniperGunComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_bulletFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sniperUIFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_sniperUIFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__sniperUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__sniperUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletEffectFactory_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bulletEffectFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_crosshairUIFactory_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_crosshairUIFactory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__crosshairUI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp__crosshairUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_cameraShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bulletSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bulletSound;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_granadeGunComp_MetaData[] = {
		{ "Category", "GunMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-----------------------Attack-----------------------------\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-----------------------Attack-----------------------------" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_granadeGunComp = { "granadeGunComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilPlayer, granadeGunComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_granadeGunComp_MetaData), Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_granadeGunComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_sniperGunComp_MetaData[] = {
		{ "Category", "GunMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_sniperGunComp = { "sniperGunComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilPlayer, sniperGunComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_sniperGunComp_MetaData), Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_sniperGunComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletFactory_MetaData[] = {
		{ "Category", "BulletFactory" },
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletFactory = { "bulletFactory", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilPlayer, bulletFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletFactory_MetaData), Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_sniperUIFactory_MetaData[] = {
		{ "Category", "SniperUI" },
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_sniperUIFactory = { "sniperUIFactory", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilPlayer, sniperUIFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_sniperUIFactory_MetaData), Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_sniperUIFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp__sniperUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp__sniperUI = { "_sniperUI", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilPlayer, _sniperUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp__sniperUI_MetaData), Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp__sniperUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletEffectFactory_MetaData[] = {
		{ "Category", "BulletEffect" },
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletEffectFactory = { "bulletEffectFactory", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilPlayer, bulletEffectFactory), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletEffectFactory_MetaData), Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletEffectFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_crosshairUIFactory_MetaData[] = {
		{ "Category", "SniperUI" },
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_crosshairUIFactory = { "crosshairUIFactory", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilPlayer, crosshairUIFactory), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_crosshairUIFactory_MetaData), Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_crosshairUIFactory_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp__crosshairUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp__crosshairUI = { "_crosshairUI", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilPlayer, _crosshairUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp__crosshairUI_MetaData), Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp__crosshairUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_cameraShake_MetaData[] = {
		{ "Category", "CameraMotion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xa9" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_cameraShake = { "cameraShake", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilPlayer, cameraShake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_cameraShake_MetaData), Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_cameraShake_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletSound_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xd1\xbe\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Player/NetherveilPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd1\xbe\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletSound = { "bulletSound", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANetherveilPlayer, bulletSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletSound_MetaData), Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletSound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANetherveilPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_springArmComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_CamComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_walkSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_SprintSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_granadeGunComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_sniperGunComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_sniperUIFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp__sniperUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletEffectFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_crosshairUIFactory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp__crosshairUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_cameraShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANetherveilPlayer_Statics::NewProp_bulletSound,
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
		{ Z_Construct_UClass_ANetherveilPlayer, ANetherveilPlayer::StaticClass, TEXT("ANetherveilPlayer"), &Z_Registration_Info_UClass_ANetherveilPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetherveilPlayer), 941827946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_NetherveilPlayer_h_3336619498(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_NetherveilPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_NetherveilPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
