#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BattleFlowStateReceiverInterface.h"
#include "NeweraListenerPositioningActor.generated.h"

UCLASS(Blueprintable)
class ANeweraListenerPositioningActor : public AActor, public IBattleFlowStateReceiverInterface {
    GENERATED_BODY()
public:
    ANeweraListenerPositioningActor();
    
    // Fix for true pure virtual functions not being implemented
};

