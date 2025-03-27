// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemyBoss.h"

#include "Enemy/EnemyBossAttack_EnergyWave.h"

void AEnemyBoss::FireEnergyWave()
{
	if (EnergyWaveFactory)
	{
		FVector SpawnLocation = GetActorLocation() + GetActorForwardVector() * 100.0f;
		FRotator SpawnRotation = GetActorRotation();

		GetWorld()->SpawnActor<AEnemyBossAttack_EnergyWave>(EnergyWaveFactory, SpawnLocation, SpawnRotation);
	}
}
