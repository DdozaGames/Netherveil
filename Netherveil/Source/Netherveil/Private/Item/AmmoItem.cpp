// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/AmmoItem.h"

#include "Player/NetherveilPlayer.h"

void AAmmoItem::ApplyEffect(ANetherveilPlayer* player)
{
	Super::ApplyEffect(player);

	if (ammoType == EAmmoType::Grenade)
	{
		UE_LOG(LogTemp, Warning, TEXT("AAmmoItem::Grenade Ammo"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AAmmoItem::sniper Ammo"));

	}

	if (player)
	{
		player->AddAmmo(ammoType,10);
		
	}
}
