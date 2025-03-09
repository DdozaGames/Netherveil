// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item/Item.h"
#include "HealthItem.generated.h"
class ANetherveilPlayer;
/**
 * 
 */
UCLASS()
class NETHERVEIL_API AHealthItem : public AItem
{
	GENERATED_BODY()
public:
	int healAmount=2;
public:
	//AHealthItem(int amt) : healAmount(amt) {}

	virtual void ApplyEffect(ANetherveilPlayer* player) override;
};
