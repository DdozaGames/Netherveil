

#include "Player/BulletPool.h"

#include "Player/Bullet.h"

ABulletPool::ABulletPool()
{
	PrimaryActorTick.bCanEverTick = true;

}


void ABulletPool::BeginPlay()
{
	Super::BeginPlay();

    for (int32 i = 0; i < PoolSize; ++i)
    {
        ABullet* Bullet = GetWorld()->SpawnActor<ABullet>(BulletClass);
        Bullet->Deactivate();
        BulletPool.Add(Bullet);
    }
}

class ABullet* ABulletPool::GetBullet()
{
    for (ABullet* Bullet : BulletPool)
    {
        if (!Bullet->bIsActive)
        {
            return Bullet;
        }
    }

    return nullptr; // 풀 부족 시 nullptr 반환
}
