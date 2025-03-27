// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetherveil_init() {}
	NETHERVEIL_API UFunction* Z_Construct_UDelegateFunction_Netherveil_OnRiftDestroyed__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Netherveil;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Netherveil()
	{
		if (!Z_Registration_Info_UPackage__Script_Netherveil.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Netherveil_OnRiftDestroyed__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Netherveil",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF799C399,
				0x1EB71596,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Netherveil.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Netherveil.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Netherveil(Z_Construct_UPackage__Script_Netherveil, TEXT("/Script/Netherveil"), Z_Registration_Info_UPackage__Script_Netherveil, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF799C399, 0x1EB71596));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
