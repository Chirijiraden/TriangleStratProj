#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TickableObjectInterface.h"
#include "WorldMapFlowStateReceiverInterface.h"
#include "NestWorldMapHitCheckCurrentOverlapOther.h"
#include "WorldMapHitCheckManager.generated.h"

class UHitObjectOnScreenInterface;
class IHitObjectOnScreenInterface;

UCLASS(Blueprintable)
class UWorldMapHitCheckManager : public UObject, public ITickableObjectInterface, public IWorldMapFlowStateReceiverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IHitObjectOnScreenInterface>> HitCheckObjectsSelf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IHitObjectOnScreenInterface>> HitCheckObjectsOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FNestWorldMapHitCheckCurrentOverlapOther> CurrentOverlapOthers;
    
public:
    UWorldMapHitCheckManager();
    
    // Fix for true pure virtual functions not being implemented
};

