#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CollideWithTrolleyActorInterface.h"
#include "TrapInterface.h"
#include "TrapBase.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ATrapBase : public AActor, public ITrapInterface, public ICollideWithTrolleyActorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActibated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDestructed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 spawnTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLoadedSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bpBridgeBoolParam1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bpBridgeIntParam1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float bpBridgeFloatParam1;
    
    ATrapBase();
    UFUNCTION(BlueprintCallable)
    void SetDestructed(bool isDestructed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitTrolleyGimmickBP();
    
    UFUNCTION(BlueprintCallable)
    void CallDelegateOnActivationEnd();
    
    
    // Fix for true pure virtual functions not being implemented
};

