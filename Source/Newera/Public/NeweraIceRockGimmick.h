#pragma once
#include "CoreMinimal.h"
#include "CollideWithTrolleyActorInterface.h"
#include "NeweraMapGimmickObject.h"
#include "NeweraIceRockGimmick.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ANeweraIceRockGimmick : public ANeweraMapGimmickObject, public ICollideWithTrolleyActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IceMeltGlobalTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float startIceGlobalTurn;
    
    ANeweraIceRockGimmick();
    UFUNCTION(BlueprintCallable)
    void SetupStartTurn();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMeltIceRock();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitTrolleyGimmickBP();
    
    UFUNCTION(BlueprintCallable)
    void DestroyGimmick();
    
    
    // Fix for true pure virtual functions not being implemented
};

