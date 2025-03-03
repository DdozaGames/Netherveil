// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Netherveil/NetherveilGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetherveilGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	NETHERVEIL_API UClass* Z_Construct_UClass_ANetherveilGameMode();
	NETHERVEIL_API UClass* Z_Construct_UClass_ANetherveilGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Netherveil();
// End Cross Module References
	void ANetherveilGameMode::StaticRegisterNativesANetherveilGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANetherveilGameMode);
	UClass* Z_Construct_UClass_ANetherveilGameMode_NoRegister()
	{
		return ANetherveilGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ANetherveilGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANetherveilGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Netherveil,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANetherveilGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "NetherveilGameMode.h" },
		{ "ModuleRelativePath", "NetherveilGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANetherveilGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANetherveilGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANetherveilGameMode_Statics::ClassParams = {
		&ANetherveilGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANetherveilGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ANetherveilGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ANetherveilGameMode()
	{
		if (!Z_Registration_Info_UClass_ANetherveilGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANetherveilGameMode.OuterSingleton, Z_Construct_UClass_ANetherveilGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANetherveilGameMode.OuterSingleton;
	}
	template<> NETHERVEIL_API UClass* StaticClass<ANetherveilGameMode>()
	{
		return ANetherveilGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANetherveilGameMode);
	ANetherveilGameMode::~ANetherveilGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_NetherveilGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_NetherveilGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANetherveilGameMode, ANetherveilGameMode::StaticClass, TEXT("ANetherveilGameMode"), &Z_Registration_Info_UClass_ANetherveilGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANetherveilGameMode), 549039505U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_NetherveilGameMode_h_1954128258(TEXT("/Script/Netherveil"),
		Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_NetherveilGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_NetherveilGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
