// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/Item.h"
#include "AmmoItem.generated.h"
class ANetherveilPlayer;

UENUM(BlueprintType)
enum class EAmmoType : uint8
{
	Grenade,
	Sniper,
};

UCLASS()
class NETHERVEIL_API AAmmoItem : public AItem
{
	GENERATED_BODY()
	
public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AmmoType)
	EAmmoType ammoType;

	int32 amount;

	virtual void ApplyEffect(ANetherveilPlayer* player) override;
};
