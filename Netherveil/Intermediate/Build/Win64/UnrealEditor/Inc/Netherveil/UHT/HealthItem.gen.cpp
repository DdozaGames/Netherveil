// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Item/HealthItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthItem() {}
// Cross Module References
	NETHERVEIL_API UClass* Z_Construct_UClass_AHealthItem();
	NETHERVEIL_API UClass* Z_Construct_UClass_AHealthItem_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_AItem();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	void AHealthItem::StaticRegisterNativesAHealthItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHealthItem);
	UClass* Z_Construct_UClass_AHealthItem_NoRegister()
	{
		return AHealthItem::StaticClass();
	}
	struct Z_Construct_UClass_AHealthItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHealthItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthItem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHealthItem_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Item/HealthItem.h" },
		{ "ModuleRelativePath", "Public/Item/HealthItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHealthItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHealthItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHealthItem_Statics::ClassParams = {
		&AHealthItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHealthItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AHealthItem_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AHealthItem()
	{
		if (!Z_Registration_Info_UClass_AHealthItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHealthItem.OuterSingleton, Z_Construct_UClass_AHealthItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHealthItem.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<AHealthItem>()
	{
		return AHealthItem::StaticClass();
	}
	AHealthItem::AHealthItem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHealthItem);
	AHealthItem::~AHealthItem() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_HealthItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_HealthItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHealthItem, AHealthItem::StaticClass, TEXT("AHealthItem"), &Z_Registration_Info_UClass_AHealthItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHealthItem), 2854026244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_HealthItem_h_1937041281(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_HealthItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_HealthItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
