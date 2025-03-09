// Fill out your copyright notice in the Description page of Project Settings.


#include "Item/HealthItem.h"

#include "Player/NetherveilPlayer.h"


void AHealthItem::ApplyEffect(ANetherveilPlayer* player)
{
	Super::ApplyEffect(player);

	if (player)
	{
		player->Heal(healAmount);
	}
}
