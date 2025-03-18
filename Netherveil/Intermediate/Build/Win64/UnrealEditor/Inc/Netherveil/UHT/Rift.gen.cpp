// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Quest/Rift.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRift() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_ARift();
	NETHERVEIL_API UClass* Z_Construct_UClass_ARift_NoRegister();
	NETHERVEIL_API UFunction* Z_Construct_UDelegateFunction_Netherveil_OnRiftDestroyed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Netherveil_OnRiftDestroyed__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Netherveil_OnRiftDestroyed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest/Rift.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Netherveil_OnRiftDestroyed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Netherveil, nullptr, "OnRiftDestroyed__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Netherveil_OnRiftDestroyed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Netherveil_OnRiftDestroyed__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_Netherveil_OnRiftDestroyed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Netherveil_OnRiftDestroyed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnRiftDestroyed_DelegateWrapper(const FMulticastScriptDelegate& OnRiftDestroyed)
{
	OnRiftDestroyed.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ARift::execDestroyRift)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyRift();
		P_NATIVE_END;
	}
	void ARift::StaticRegisterNativesARift()
	{
		UClass* Class = ARift::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyRift", &ARift::execDestroyRift },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARift_DestroyRift_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARift_DestroyRift_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Quest/Rift.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARift_DestroyRift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARift, nullptr, "DestroyRift", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARift_DestroyRift_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARift_DestroyRift_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ARift_DestroyRift()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARift_DestroyRift_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARift);
	UClass* Z_Construct_UClass_ARift_NoRegister()
	{
		return ARift::StaticClass();
	}
	struct Z_Construct_UClass_ARift_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collisionComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_collisionComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bodyMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bodyMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RiftID_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RiftID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRiftDestroyed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRiftDestroyed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_riftHP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_riftHP;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARift_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARift_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ARift_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARift_DestroyRift, "DestroyRift" }, // 645698069
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARift_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARift_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Quest/Rift.h" },
		{ "ModuleRelativePath", "Public/Quest/Rift.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARift_Statics::NewProp_collisionComp_MetaData[] = {
		{ "Category", "Collision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xe6\xb5\xb9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quest/Rift.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xe6\xb5\xb9 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARift_Statics::NewProp_collisionComp = { "collisionComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARift, collisionComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARift_Statics::NewProp_collisionComp_MetaData), Z_Construct_UClass_ARift_Statics::NewProp_collisionComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARift_Statics::NewProp_bodyMeshComp_MetaData[] = {
		{ "Category", "BodyMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xdc\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Quest/Rift.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xdc\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARift_Statics::NewProp_bodyMeshComp = { "bodyMeshComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARift, bodyMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARift_Statics::NewProp_bodyMeshComp_MetaData), Z_Construct_UClass_ARift_Statics::NewProp_bodyMeshComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARift_Statics::NewProp_RiftID_MetaData[] = {
		{ "Category", "Rift" },
		{ "ModuleRelativePath", "Public/Quest/Rift.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ARift_Statics::NewProp_RiftID = { "RiftID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARift, RiftID), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARift_Statics::NewProp_RiftID_MetaData), Z_Construct_UClass_ARift_Statics::NewProp_RiftID_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARift_Statics::NewProp_OnRiftDestroyed_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd5\xbf\xef\xbf\xbd ID\n" },
#endif
		{ "ModuleRelativePath", "Public/Quest/Rift.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd5\xbf\xef\xbf\xbd ID" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARift_Statics::NewProp_OnRiftDestroyed = { "OnRiftDestroyed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARift, OnRiftDestroyed), Z_Construct_UDelegateFunction_Netherveil_OnRiftDestroyed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARift_Statics::NewProp_OnRiftDestroyed_MetaData), Z_Construct_UClass_ARift_Statics::NewProp_OnRiftDestroyed_MetaData) }; // 2307186294
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARift_Statics::NewProp_riftHP_MetaData[] = {
		{ "Category", "Rift" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xc4\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Quest/Rift.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xc4\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARift_Statics::NewProp_riftHP = { "riftHP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARift, riftHP), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARift_Statics::NewProp_riftHP_MetaData), Z_Construct_UClass_ARift_Statics::NewProp_riftHP_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARift_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARift_Statics::NewProp_collisionComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARift_Statics::NewProp_bodyMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARift_Statics::NewProp_RiftID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARift_Statics::NewProp_OnRiftDestroyed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARift_Statics::NewProp_riftHP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARift_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARift>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARift_Statics::ClassParams = {
		&ARift::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARift_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARift_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARift_Statics::Class_MetaDataParams), Z_Construct_UClass_ARift_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARift_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARift()
	{
		if (!Z_Registration_Info_UClass_ARift.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARift.OuterSingleton, Z_Construct_UClass_ARift_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARift.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<ARift>()
	{
		return ARift::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARift);
	ARift::~ARift() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_Rift_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_Rift_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARift, ARift::StaticClass, TEXT("ARift"), &Z_Registration_Info_UClass_ARift, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARift), 942202199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_Rift_h_3866145639(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_Rift_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Quest_Rift_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
