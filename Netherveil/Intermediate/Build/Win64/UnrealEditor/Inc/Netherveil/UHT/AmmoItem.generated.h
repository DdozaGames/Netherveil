// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Item/AmmoItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NETHERVEIL_AmmoItem_generated_h
#error "AmmoItem.generated.h already included, missing '#pragma once' in AmmoItem.h"
#endif
#define NETHERVEIL_AmmoItem_generated_h

#define FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_SPARSE_DATA
#define FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_ACCESSORS
#define FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmmoItem(); \
	friend struct Z_Construct_UClass_AAmmoItem_Statics; \
public: \
	DECLARE_CLASS(AAmmoItem, AItem, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Netherveil"), NO_API) \
	DECLARE_SERIALIZER(AAmmoItem)


#define FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmmoItem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmoItem(AAmmoItem&&); \
	NO_API AAmmoItem(const AAmmoItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAmmoItem) \
	NO_API virtual ~AAmmoItem();


#define FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_17_PROLOG
#define FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_SPARSE_DATA \
	FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_ACCESSORS \
	FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_INCLASS_NO_PURE_DECLS \
	FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NETHERVEIL_API UClass* StaticClass<class AAmmoItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_PC_1M_Desktop_UnrealProject_Netherveil_Netherveil_Source_Netherveil_Public_Item_AmmoItem_h


#define FOREACH_ENUM_EAMMOTYPE(op) \
	op(EAmmoType::Grenade) \
	op(EAmmoType::Sniper) 

enum class EAmmoType : uint8;
template<> struct TIsUEnumClass<EAmmoType> { enum { Value = true }; };
template<> NETHERVEIL_API UEnum* StaticEnum<EAmmoType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
