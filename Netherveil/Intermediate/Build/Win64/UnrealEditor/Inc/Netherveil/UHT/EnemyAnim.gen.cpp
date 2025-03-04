// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Enemy/EnemyAnim.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAnim() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	NETHERVEIL_API UClass* Z_Construct_UClass_UEnemyAnim();
	NETHERVEIL_API UClass* Z_Construct_UClass_UEnemyAnim_NoRegister();
	NETHERVEIL_API UEnum* Z_Construct_UEnum_Netherveil_EEnemyState();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	DEFINE_FUNCTION(UEnemyAnim::execOnEndAttackAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndAttackAnimation();
		P_NATIVE_END;
	}
	struct EnemyAnim_eventPlayDamageAnim_Parms
	{
		FName sectionName;
	};
	static FName NAME_UEnemyAnim_PlayDamageAnim = FName(TEXT("PlayDamageAnim"));
	void UEnemyAnim::PlayDamageAnim(FName sectionName)
	{
		EnemyAnim_eventPlayDamageAnim_Parms Parms;
		Parms.sectionName=sectionName;
		ProcessEvent(FindFunctionChecked(NAME_UEnemyAnim_PlayDamageAnim),&Parms);
	}
	void UEnemyAnim::StaticRegisterNativesUEnemyAnim()
	{
		UClass* Class = UEnemyAnim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnEndAttackAnimation", &UEnemyAnim::execOnEndAttackAnimation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "FSMEvent" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyAnim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnim, nullptr, "OnEndAttackAnimation", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyAnim_PlayDamageAnim_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_sectionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnemyAnim_PlayDamageAnim_Statics::NewProp_sectionName = { "sectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyAnim_eventPlayDamageAnim_Parms, sectionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyAnim_PlayDamageAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyAnim_PlayDamageAnim_Statics::NewProp_sectionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyAnim_PlayDamageAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "FSMEvent" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyAnim.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnim_PlayDamageAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnim, nullptr, "PlayDamageAnim", nullptr, nullptr, Z_Construct_UFunction_UEnemyAnim_PlayDamageAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnim_PlayDamageAnim_Statics::PropPointers), sizeof(EnemyAnim_eventPlayDamageAnim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnim_PlayDamageAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyAnim_PlayDamageAnim_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnim_PlayDamageAnim_Statics::PropPointers) < 2048);
	static_assert(sizeof(EnemyAnim_eventPlayDamageAnim_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyAnim_PlayDamageAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyAnim_PlayDamageAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyAnim);
	UClass* Z_Construct_UClass_UEnemyAnim_NoRegister()
	{
		return UEnemyAnim::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_animState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_animState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttackPlay_MetaData[];
#endif
		static void NewProp_bAttackPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttackPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDieDone_MetaData[];
#endif
		static void NewProp_bDieDone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDieDone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyAnim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyAnim_OnEndAttackAnimation, "OnEndAttackAnimation" }, // 3826172824
		{ &Z_Construct_UFunction_UEnemyAnim_PlayDamageAnim, "PlayDamageAnim" }, // 3916158958
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnim_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Enemy/EnemyAnim.h" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyAnim.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemyAnim_Statics::NewProp_animState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnim_Statics::NewProp_animState_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyAnim.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemyAnim_Statics::NewProp_animState = { "animState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEnemyAnim, animState), Z_Construct_UEnum_Netherveil_EEnemyState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::NewProp_animState_MetaData), Z_Construct_UClass_UEnemyAnim_Statics::NewProp_animState_MetaData) }; // 2800084703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bAttackPlay_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyAnim.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bAttackPlay_SetBit(void* Obj)
	{
		((UEnemyAnim*)Obj)->bAttackPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bAttackPlay = { "bAttackPlay", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnemyAnim), &Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bAttackPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bAttackPlay_MetaData), Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bAttackPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bDieDone_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyAnim.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bDieDone_SetBit(void* Obj)
	{
		((UEnemyAnim*)Obj)->bDieDone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bDieDone = { "bDieDone", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnemyAnim), &Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bDieDone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bDieDone_MetaData), Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bDieDone_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnim_Statics::NewProp_animState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnim_Statics::NewProp_animState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bAttackPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnim_Statics::NewProp_bDieDone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAnim>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAnim_Statics::ClassParams = {
		&UEnemyAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyAnim_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnim_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UEnemyAnim()
	{
		if (!Z_Registration_Info_UClass_UEnemyAnim.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyAnim.OuterSingleton, Z_Construct_UClass_UEnemyAnim_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyAnim.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<UEnemyAnim>()
	{
		return UEnemyAnim::StaticClass();
	}
	UEnemyAnim::UEnemyAnim(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAnim);
	UEnemyAnim::~UEnemyAnim() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyAnim_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyAnim_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyAnim, UEnemyAnim::StaticClass, TEXT("UEnemyAnim"), &Z_Registration_Info_UClass_UEnemyAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyAnim), 2746782649U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyAnim_h_3150124061(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyAnim_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
