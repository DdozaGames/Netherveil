#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NetherveilPlayer.generated.h"
enum class EAmmoType : uint8;
class AAmmoItem;

UCLASS()
class NETHERVEIL_API ANetherveilPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	ANetherveilPlayer();

protected:
	
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	class USpringArmComponent* springArmComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
	class UCameraComponent* CamComp;

	//플레이어 마우스 조작 
	void Turn(float value);
	void LookUp(float value);

	UPROPERTY(EditAnywhere, Category = PlayerSetting)
	float walkSpeed = 600;

	UPROPERTY(VisibleAnywhere, Category = PlayerSetting)
	float SprintSpeedMultiplier = 2.0f;

	FVector direction;

	//플레이어 이동 맵핑
	void InputHorizontal(float value);
	void InputVertical(float value);
	void InputJump();
	void Sprint();
	void StopSprinting();

	UPROPERTY(EditAnywhere, Category = PlayerAnim)
	class UPlayerAnim* anim;

	//------------------------Move------------------------------
	void Move();

	//-----------------------Attack-----------------------------
	UPROPERTY(VisibleAnywhere, Category = GunMesh)
	class USkeletalMeshComponent* granadeGunComp;

	UPROPERTY(VisibleAnywhere, Category = GunMesh)
	class UStaticMeshComponent* sniperGunComp;

	UPROPERTY(EditDefaultsOnly, Category = BulletFactory)
	TSubclassOf<class ABullet> bulletFactory;

	void InputFire();

	//유탄총 사용 여부
	bool bUsingGrenadeGun = true;
	//유탄총으로 변경
	void ChangeToGrenadeGun();
	//스나이퍼건으로 변경
	void ChangeToSniperGun();
	//스나이퍼 조준
	void SniperAim();

	bool bSniperAim = false;

	UPROPERTY(EditDefaultsOnly, Category = SniperUI)
	TSubclassOf<class UUserWidget> sniperUIFactory;

	UPROPERTY()
	class UUserWidget* _sniperUI;

	UPROPERTY(EditAnywhere, Category = BulletEffect)
	class UParticleSystem* bulletEffectFactory;

	UPROPERTY(EditDefaultsOnly, Category = SniperUI)
	TSubclassOf<class UUserWidget> crosshairUIFactory;

	UPROPERTY()
	class UUserWidget* _crosshairUI;

	//카메라 셰이크
	UPROPERTY(EditDefaultsOnly, Category = CameraMotion)
	TSubclassOf<class UCameraShakeBase> cameraShake;

	//총알 발사 사운드
	UPROPERTY(EditDefaultsOnly, Category = Sound)
	class USoundBase* bulletSound;

	//총 변경 시 호출되는 이벤트 함수
	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,Category=Gun)
	void OnUsingGrenade(bool isGrenade);

	//탄약 관리
	//최대 탄약 수
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Ammo)
	int32 grenadeMaxAmmo = 120;

	//남아 있는 탄약 수
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Ammo)
	int32 grenadeRemaingAmmo = 30;

	//장전된 탄약 수
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Ammo)
	int32 grenadeCurrentAmmo = grenadeMaxAmmo;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Ammo)
	int32 sniperMaxAmmo = 120;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Ammo)
	int32 sniperRemaingAmmo = 30;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Ammo)
	int32 sniperCurrentAmmo = sniperMaxAmmo;

	//재장전 
	void Reload();

	//총알 발사 시 애니메이션, 사운드, 파티클을 생성
	void PlayFireEffects();

	//------------------------Damage------------------------------

	//현재 체력
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,Category=Health)
	int32 hp;

	//초기 hp 값
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category=Health)
	int32 initialHp = 10;

	UFUNCTION(BlueprintCallable, Category=Health)
	void OnHitEvent();

	// Crosshair Aim 맞추기 
	FVector GetHitTarget();

	//게임 오버
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category=Health)
	void OnGameOver();

	//-----------------------Item----------------------------------

	//체력 회복
	void Heal(int32 healAmount);

	//체력 UI 업데이트
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Health)
	void UpdateHpUI();

	//탄창 추가
	void AddAmmo(EAmmoType ammoType, int32 amount);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Health)
	void UpdateAmmoUI();

};
