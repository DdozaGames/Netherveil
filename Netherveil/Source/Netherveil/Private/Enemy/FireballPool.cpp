

#include "Enemy/FireballPool.h"

#include "Enemy/EnemyBossAttack_Fireball.h"

AFireballPool::AFireballPool()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AFireballPool::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < PoolSize; ++i)
	{
		AEnemyBossAttack_Fireball* Fireball = GetWorld()->SpawnActor<AEnemyBossAttack_Fireball>(FireballFactory);
		
		Fireball->Deactivate();
		FireballPool.Add(Fireball);
	}
}

class AEnemyBossAttack_Fireball* AFireballPool::GetFireball()
{
	for (AEnemyBossAttack_Fireball* Fireball : FireballPool)
	{
		if (!Fireball->bIsActive)
		{
			return Fireball;
		}
	}

	return nullptr;
}





