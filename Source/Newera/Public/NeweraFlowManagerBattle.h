#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BattleCursorStateReceiverInterface.h"
#include "NeweraControllInterface.h"
#include "BattleFlowStateReceiverId.h"
#include "NeweraFlowManagerBattle.generated.h"

class UBattleFlowStateReceiverInterface;
class IBattleFlowStateReceiverInterface;
class UDynamicBattleDataHolder;
class ANeweraListenerPositioningActor;

UCLASS(Blueprintable)
class UNeweraFlowManagerBattle : public UObject, public IBattleCursorStateReceiverInterface, public INeweraControllInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDynamicBattleDataHolder* DynamicDataHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FBattleFlowStateReceiverId, TScriptInterface<IBattleFlowStateReceiverInterface>> StateReceivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FBattleFlowStateReceiverId, TScriptInterface<IBattleFlowStateReceiverInterface>> ReservedStateReceivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANeweraListenerPositioningActor* SoundListenerPositioningActorForBattle;
    
public:
    UNeweraFlowManagerBattle();
    
    // Fix for true pure virtual functions not being implemented
};

