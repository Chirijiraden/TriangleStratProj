#pragma once
#include "CoreMinimal.h"
#include "BattleFlowStateReceiverInterface.h"
#include "NeweraPlayerController.h"
#include "NeweraBattlePlayerController.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ANeweraBattlePlayerController : public ANeweraPlayerController, public IBattleFlowStateReceiverInterface {
    GENERATED_BODY()
public:
    ANeweraBattlePlayerController();
    
    // Fix for true pure virtual functions not being implemented
};

