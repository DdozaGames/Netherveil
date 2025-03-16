// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy/EnemySpider.h"

#include "Enemy/EnemyAttackBullet.h"


void AEnemySpider::Fire()
{
	// ÃÑ¾Ë ½ºÆù
	FTransform firePosition = GetMesh()->GetSocketTransform(TEXT("FirePosition"));
	GetWorld()->SpawnActor<AEnemyAttackBullet>(bulletFactory, firePosition);
}
