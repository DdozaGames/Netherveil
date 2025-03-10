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

	//�÷��̾� ���콺 ���� 
	void Turn(float value);
	void LookUp(float value);

	UPROPERTY(EditAnywhere, Category = PlayerSetting)
	float walkSpeed = 600;

	UPROPERTY(VisibleAnywhere, Category = PlayerSetting)
	float SprintSpeedMultiplier = 2.0f;

	FVector direction;

	//�÷��̾� �̵� ����
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

	//��ź�� ��� ����
	bool bUsingGrenadeGun = true;
	//��ź������ ����
	void ChangeToGrenadeGun();
	//�������۰����� ����
	void ChangeToSniperGun();
	//�������� ����
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

	//ī�޶� ����ũ
	UPROPERTY(EditDefaultsOnly, Category = CameraMotion)
	TSubclassOf<class UCameraShakeBase> cameraShake;

	//�Ѿ� �߻� ����
	UPROPERTY(EditDefaultsOnly, Category = Sound)
	class USoundBase* bulletSound;

	//�� ���� �� ȣ��Ǵ� �̺�Ʈ �Լ�
	UFUNCTION(BlueprintImplementableEvent,BlueprintCallable,Category=Gun)
	void OnUsingGrenade(bool isGrenade);

	//ź�� ����
	//�ִ� ź�� ��
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Ammo)
	int32 grenadeMaxAmmo = 120;

	//���� �ִ� ź�� ��
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Ammo)
	int32 grenadeRemaingAmmo = 30;

	//������ ź�� ��
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Ammo)
	int32 grenadeCurrentAmmo = grenadeMaxAmmo;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Ammo)
	int32 sniperMaxAmmo = 120;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Ammo)
	int32 sniperRemaingAmmo = 30;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = Ammo)
	int32 sniperCurrentAmmo = sniperMaxAmmo;

	//������ 
	void Reload();

	//�Ѿ� �߻� �� �ִϸ��̼�, ����, ��ƼŬ�� ����
	void PlayFireEffects();

	//------------------------Damage------------------------------

	//���� ü��
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,Category=Health)
	int32 hp;

	//�ʱ� hp ��
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category=Health)
	int32 initialHp = 10;

	UFUNCTION(BlueprintCallable, Category=Health)
	void OnHitEvent();

	// Crosshair Aim ���߱� 
	FVector GetHitTarget();

	//���� ����
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable,Category=Health)
	void OnGameOver();

	//-----------------------Item----------------------------------

	//ü�� ȸ��
	void Heal(int32 healAmount);

	//ü�� UI ������Ʈ
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Health)
	void UpdateHpUI();

	//źâ �߰�
	void AddAmmo(EAmmoType ammoType, int32 amount);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = Health)
	void UpdateAmmoUI();

};
