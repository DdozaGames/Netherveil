// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/Bullet.h"
#include "Components/SphereComponent.h"
#include "Enemy/Enemy.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include <Enemy/EnemyFSM.h>
#include "Kismet/GameplayStatics.h"

ABullet::ABullet()
{
	PrimaryActorTick.bCanEverTick = true;

	//�浹ü 
	collisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
	collisionComp->SetCollisionProfileName(TEXT("BlockAll"));
	collisionComp->SetSphereRadius(13);
	RootComponent = collisionComp;

	//�ܰ�
	bodyMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMeshComp"));
	bodyMeshComp->SetupAttachment(collisionComp);
	bodyMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	bodyMeshComp->SetRelativeScale3D(FVector(0.25f));

	//�߻�ü
	movementComp = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("MovementComp"));
	movementComp->SetUpdatedComponent(collisionComp);
	movementComp->InitialSpeed = 5000;
	movementComp->MaxSpeed = 5000;
	movementComp->bShouldBounce = true; //�ݵ�����
	movementComp->Bounciness = 0.3f; //�ݵ� ��

	//���� �ð� �ֱ�
	InitialLifeSpan = 2.0f;
}

void ABullet::BeginPlay()
{
	Super::BeginPlay();

	collisionComp->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnBeginOverlap);
}

void ABullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABullet::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	auto enemy = OtherActor->GetDefaultSubobjectByName(TEXT("FSM"));
	if (OtherActor->IsA<AEnemy>())
	{
		auto enemyFSM = Cast<UEnemyFSM>(enemy);
		enemyFSM->OnDamageProcess();
		//UE_LOG(LogTemp, Warning, TEXT("Overlap"));

		//��ƼŬ ���� 
		FTransform bulletTrans;
		bulletTrans.SetLocation(SweepResult.ImpactPoint);
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), bulletEffectFactory, bulletTrans);

		this->Destroy();

	}

	
	
}

