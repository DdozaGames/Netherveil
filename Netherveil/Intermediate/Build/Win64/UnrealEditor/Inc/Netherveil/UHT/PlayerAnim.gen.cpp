// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Player/PlayerAnim.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerAnim() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_UPlayerAnim();
	NETHERVEIL_API UClass* Z_Construct_UClass_UPlayerAnim_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	void UPlayerAnim::StaticRegisterNativesUPlayerAnim()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerAnim);
	UClass* Z_Construct_UClass_UPlayerAnim_NoRegister()
	{
		return UPlayerAnim::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_direction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isInAir_MetaData[];
#endif
		static void NewProp_isInAir_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isInAir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attackAnimMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attackAnimMontage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHandTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeftHandTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHandRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RightHandRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/PlayerAnim.h" },
		{ "ModuleRelativePath", "Public/Player/PlayerAnim.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Public/Player/PlayerAnim.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnim, speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_speed_MetaData), Z_Construct_UClass_UPlayerAnim_Statics::NewProp_speed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_direction_MetaData[] = {
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Public/Player/PlayerAnim.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnim, direction), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_direction_MetaData), Z_Construct_UClass_UPlayerAnim_Statics::NewProp_direction_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_isInAir_MetaData[] = {
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Public/Player/PlayerAnim.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerAnim_Statics::NewProp_isInAir_SetBit(void* Obj)
	{
		((UPlayerAnim*)Obj)->isInAir = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_isInAir = { "isInAir", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPlayerAnim), &Z_Construct_UClass_UPlayerAnim_Statics::NewProp_isInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_isInAir_MetaData), Z_Construct_UClass_UPlayerAnim_Statics::NewProp_isInAir_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_attackAnimMontage_MetaData[] = {
		{ "Category", "PlayerAnim" },
		{ "ModuleRelativePath", "Public/Player/PlayerAnim.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_attackAnimMontage = { "attackAnimMontage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnim, attackAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_attackAnimMontage_MetaData), Z_Construct_UClass_UPlayerAnim_Statics::NewProp_attackAnimMontage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_LeftHandTransform_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Player/PlayerAnim.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_LeftHandTransform = { "LeftHandTransform", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnim, LeftHandTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_LeftHandTransform_MetaData), Z_Construct_UClass_UPlayerAnim_Statics::NewProp_LeftHandTransform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerAnim_Statics::NewProp_RightHandRotation_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Player/PlayerAnim.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerAnim_Statics::NewProp_RightHandRotation = { "RightHandRotation", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlayerAnim, RightHandRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::NewProp_RightHandRotation_MetaData), Z_Construct_UClass_UPlayerAnim_Statics::NewProp_RightHandRotation_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_direction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_isInAir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_attackAnimMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_LeftHandTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerAnim_Statics::NewProp_RightHandRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerAnim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerAnim_Statics::ClassParams = {
		&UPlayerAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerAnim_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerAnim_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPlayerAnim()
	{
		if (!Z_Registration_Info_UClass_UPlayerAnim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerAnim.OuterSingleton, Z_Construct_UClass_UPlayerAnim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerAnim.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<UPlayerAnim>()
	{
		return UPlayerAnim::StaticClass();
	}
	UPlayerAnim::UPlayerAnim(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerAnim);
	UPlayerAnim::~UPlayerAnim() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_PlayerAnim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_PlayerAnim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerAnim, UPlayerAnim::StaticClass, TEXT("UPlayerAnim"), &Z_Registration_Info_UClass_UPlayerAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerAnim), 2401307909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_PlayerAnim_h_2417773038(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_PlayerAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Player_PlayerAnim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
