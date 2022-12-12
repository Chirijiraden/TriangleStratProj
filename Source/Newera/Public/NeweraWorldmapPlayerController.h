#pragma once
#include "CoreMinimal.h"
#include "NeweraPlayerController.h"
#include "WorldMapFlowStateReceiverInterface.h"
#include "NeweraWorldmapPlayerController.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ANeweraWorldmapPlayerController : public ANeweraPlayerController, public IWorldMapFlowStateReceiverInterface {
    GENERATED_BODY()
public:
    ANeweraWorldmapPlayerController();
    
    // Fix for true pure virtual functions not being implemented
};

