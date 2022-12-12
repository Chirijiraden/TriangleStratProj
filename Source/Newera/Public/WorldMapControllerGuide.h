#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "NeweraCameraModeReceiverInterface.h"
#include "WorldMapOrderedInitializationInterface.h"
#include "WorldMapFlowStateReceiverInterface.h"
#include "WorldMapControllerGuide.generated.h"

UCLASS(Blueprintable)
class UWorldMapControllerGuide : public UObject, public INeweraCameraModeReceiverInterface, public IWorldMapFlowStateReceiverInterface, public IWorldMapOrderedInitializationInterface {
    GENERATED_BODY()
public:
    UWorldMapControllerGuide();
    
    // Fix for true pure virtual functions not being implemented
};

