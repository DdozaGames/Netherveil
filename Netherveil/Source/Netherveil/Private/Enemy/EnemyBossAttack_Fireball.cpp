
#include "Enemy/EnemyBossAttack_Fireball.h"

#include "Components/SphereComponent.h"
#include "Player/NetherveilPlayer.h"

AEnemyBossAttack_Fireball::AEnemyBossAttack_Fireball()
{
	PrimaryActorTick.bCanEverTick = true;

	//충돌체 
	collisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
	collisionComp->SetSphereRadius(13);
	RootComponent = collisionComp;

	//외관
	bodyMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMeshComp"));
	bodyMeshComp->SetupAttachment(collisionComp);
	bodyMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	bodyMeshComp->SetRelativeScale3D(FVector(0.25f));

}

void AEnemyBossAttack_Fireball::BeginPlay()
{
	Super::BeginPlay();

	// 불덩이를 6초 후에 자동 삭제
	SetLifeSpan(6.0f);

	collisionComp->OnComponentBeginOverlap.AddDynamic(this, &AEnemyBossAttack_Fireball::OnBeginOverlap);

	UPrimitiveComponent* RootComp = Cast<UPrimitiveComponent>(GetRootComponent());
	if (RootComp)
	{
		RootComp->SetSimulatePhysics(true);
		RootComp->SetEnableGravity(true); // 중력 활성화
	}
}

void AEnemyBossAttack_Fireball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnemyBossAttack_Fireball::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	auto player = Cast<ANetherveilPlayer>(OtherActor);
	if (player)
	{
		player->OnHitEvent();
		this->Destroy();
	}
}

