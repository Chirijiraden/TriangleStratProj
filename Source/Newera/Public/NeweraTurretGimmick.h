#pragma once
#include "CoreMinimal.h"
#include "CollideWithTrolleyActorInterface.h"
#include "NeweraMapGimmickObject.h"
#include "NeweraTurretGimmick.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ANeweraTurretGimmick : public ANeweraMapGimmickObject, public ICollideWithTrolleyActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nowAttackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 sequenceAttackCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurretDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float oldDirection;
    
    ANeweraTurretGimmick();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReload();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitTrolleyGimmickBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDestroyTurret();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttack();
    
    UFUNCTION(BlueprintCallable)
    void DestroyGimmick();
    
    
    // Fix for true pure virtual functions not being implemented
};

