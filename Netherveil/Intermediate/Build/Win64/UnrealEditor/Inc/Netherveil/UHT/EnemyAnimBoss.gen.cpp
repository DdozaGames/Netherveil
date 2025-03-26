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
	struct EnemyAnimBoss_eventPlayAttackWaitAnim_Parms
	{
		FName sectionName;
	};
	static FName NAME_UEnemyAnimBoss_PlayAttackWaitAnim = FName(TEXT("PlayAttackWaitAnim"));
	void UEnemyAnimBoss::PlayAttackWaitAnim(FName sectionName)
	{
		EnemyAnimBoss_eventPlayAttackWaitAnim_Parms Parms;
		Parms.sectionName=sectionName;
		ProcessEvent(FindFunctionChecked(NAME_UEnemyAnimBoss_PlayAttackWaitAnim),&Parms);
	}
	void UEnemyAnimBoss::StaticRegisterNativesUEnemyAnimBoss()
	{
	}
	struct Z_Construct_UFunction_UEnemyAnimBoss_PlayAttackWaitAnim_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_sectionName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEnemyAnimBoss_PlayAttackWaitAnim_Statics::NewProp_sectionName = { "sectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnemyAnimBoss_eventPlayAttackWaitAnim_Parms, sectionName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnemyAnimBoss_PlayAttackWaitAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnemyAnimBoss_PlayAttackWaitAnim_Statics::NewProp_sectionName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyAnimBoss_PlayAttackWaitAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "FSMEvent" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyAnimBoss.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnimBoss_PlayAttackWaitAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnimBoss, nullptr, "PlayAttackWaitAnim", nullptr, nullptr, Z_Construct_UFunction_UEnemyAnimBoss_PlayAttackWaitAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimBoss_PlayAttackWaitAnim_Statics::PropPointers), sizeof(EnemyAnimBoss_eventPlayAttackWaitAnim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimBoss_PlayAttackWaitAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnemyAnimBoss_PlayAttackWaitAnim_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimBoss_PlayAttackWaitAnim_Statics::PropPointers) < 2048);
	static_assert(sizeof(EnemyAnimBoss_eventPlayAttackWaitAnim_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UEnemyAnimBoss_PlayAttackWaitAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnemyAnimBoss_PlayAttackWaitAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyAnimBoss);
	UClass* Z_Construct_UClass_UEnemyAnimBoss_NoRegister()
	{
		return UEnemyAnimBoss::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyAnimBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAttackWaitEnd_MetaData[];
#endif
		static void NewProp_bAttackWaitEnd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttackWaitEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyAnimBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnemyAnim,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimBoss_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyAnimBoss_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyAnimBoss_PlayAttackWaitAnim, "PlayAttackWaitAnim" }, // 447736702
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimBoss_Statics::FuncInfo) < 2048);
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimBoss_Statics::NewProp_bAttackWaitEnd_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyAnimBoss.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyAnimBoss_Statics::NewProp_bAttackWaitEnd_SetBit(void* Obj)
	{
		((UEnemyAnimBoss*)Obj)->bAttackWaitEnd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyAnimBoss_Statics::NewProp_bAttackWaitEnd = { "bAttackWaitEnd", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEnemyAnimBoss), &Z_Construct_UClass_UEnemyAnimBoss_Statics::NewProp_bAttackWaitEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimBoss_Statics::NewProp_bAttackWaitEnd_MetaData), Z_Construct_UClass_UEnemyAnimBoss_Statics::NewProp_bAttackWaitEnd_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyAnimBoss_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimBoss_Statics::NewProp_bAttackWaitEnd,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyAnimBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAnimBoss>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAnimBoss_Statics::ClassParams = {
		&UEnemyAnimBoss::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyAnimBoss_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimBoss_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimBoss_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnemyAnimBoss_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimBoss_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_UEnemyAnimBoss, UEnemyAnimBoss::StaticClass, TEXT("UEnemyAnimBoss"), &Z_Registration_Info_UClass_UEnemyAnimBoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyAnimBoss), 2890373352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyAnimBoss_h_3582451089(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyAnimBoss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Enemy_EnemyAnimBoss_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
