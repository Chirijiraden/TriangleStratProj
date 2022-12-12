#pragma once
#include "CoreMinimal.h"
#include "NeweraMapGimmickObject.h"
#include "NeweraSuperBombGimmick.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ANeweraSuperBombGimmick : public ANeweraMapGimmickObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CountDownCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 countDownWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lastTriggerCheckTurn;
    
public:
    ANeweraSuperBombGimmick();
    UFUNCTION(BlueprintCallable)
    void SwitchOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostSpawnedBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExplodeBomb();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCountDown(int32 CountDown);
    
    UFUNCTION(BlueprintCallable)
    void EndExplosionEffect();
    
};

