// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/Public/Item/AmmoItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoItem() {}
// Cross Module References
	NETHERVEIL_API UClass* Z_Construct_UClass_AAmmoItem();
	NETHERVEIL_API UClass* Z_Construct_UClass_AAmmoItem_NoRegister();
	NETHERVEIL_API UClass* Z_Construct_UClass_AItem();
	NETHERVEIL_API UEnum* Z_Construct_UEnum_Netherveil_EAmmoType();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAmmoType;
	static UEnum* EAmmoType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAmmoType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAmmoType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Netherveil_EAmmoType, (UObject*)Z_Construct_UPackage__Script_Netherveil(), TEXT("EAmmoType"));
		}
		return Z_Registration_Info_UEnum_EAmmoType.OuterSingleton;
	}
	template<> NETHERVEIL_API UEnum* StaticEnum<EAmmoType>()
	{
		return EAmmoType_StaticEnum();
	}
	struct Z_Construct_UEnum_Netherveil_EAmmoType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Netherveil_EAmmoType_Statics::Enumerators[] = {
		{ "EAmmoType::Grenade", (int64)EAmmoType::Grenade },
		{ "EAmmoType::Sniper", (int64)EAmmoType::Sniper },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Netherveil_EAmmoType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Grenade.Name", "EAmmoType::Grenade" },
		{ "ModuleRelativePath", "Public/Item/AmmoItem.h" },
		{ "Sniper.Name", "EAmmoType::Sniper" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Netherveil_EAmmoType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Netherveil,
		nullptr,
		"EAmmoType",
		"EAmmoType",
		Z_Construct_UEnum_Netherveil_EAmmoType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Netherveil_EAmmoType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Netherveil_EAmmoType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Netherveil_EAmmoType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Netherveil_EAmmoType()
	{
		if (!Z_Registration_Info_UEnum_EAmmoType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAmmoType.InnerSingleton, Z_Construct_UEnum_Netherveil_EAmmoType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAmmoType.InnerSingleton;
	}
	void AAmmoItem::StaticRegisterNativesAAmmoItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAmmoItem);
	UClass* Z_Construct_UClass_AAmmoItem_NoRegister()
	{
		return AAmmoItem::StaticClass();
	}
	struct Z_Construct_UClass_AAmmoItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ammoType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ammoType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ammoType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmmoItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoItem_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Item/AmmoItem.h" },
		{ "ModuleRelativePath", "Public/Item/AmmoItem.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAmmoItem_Statics::NewProp_ammoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoItem_Statics::NewProp_ammoType_MetaData[] = {
		{ "Category", "AmmoType" },
		{ "ModuleRelativePath", "Public/Item/AmmoItem.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAmmoItem_Statics::NewProp_ammoType = { "ammoType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAmmoItem, ammoType), Z_Construct_UEnum_Netherveil_EAmmoType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoItem_Statics::NewProp_ammoType_MetaData), Z_Construct_UClass_AAmmoItem_Statics::NewProp_ammoType_MetaData) }; // 1966886472
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmoItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoItem_Statics::NewProp_ammoType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoItem_Statics::NewProp_ammoType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmmoItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAmmoItem_Statics::ClassParams = {
		&AAmmoItem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAmmoItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoItem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AAmmoItem_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoItem_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAmmoItem()
	{
		if (!Z_Registration_Info_UClass_AAmmoItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAmmoItem.OuterSingleton, Z_Construct_UClass_AAmmoItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAmmoItem.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<AAmmoItem>()
	{
		return AAmmoItem::StaticClass();
	}
	AAmmoItem::AAmmoItem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoItem);
	AAmmoItem::~AAmmoItem() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_Statics::EnumInfo[] = {
		{ EAmmoType_StaticEnum, TEXT("EAmmoType"), &Z_Registration_Info_UEnum_EAmmoType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1966886472U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAmmoItem, AAmmoItem::StaticClass, TEXT("AAmmoItem"), &Z_Registration_Info_UClass_AAmmoItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAmmoItem), 3163770928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_755360208(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
