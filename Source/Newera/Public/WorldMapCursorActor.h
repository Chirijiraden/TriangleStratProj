#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HitObjectOnScreenInterface.h"
#include "NeweraControllInterface.h"
#include "TickableObjectInterface.h"
#include "WorldMapOrderedInitializationInterface.h"
#include "WorldMapFlowStateReceiverInterface.h"
#include "WorldMapCursorActor.generated.h"

class AWorldMapEventPlaceActor;
class UWorldMapWidgetCursor;
class UCanvasPanelSlot;

UCLASS(Blueprintable)
class AWorldMapCursorActor : public AActor, public INeweraControllInterface, public IHitObjectOnScreenInterface, public ITickableObjectInterface, public IWorldMapFlowStateReceiverInterface, public IWorldMapOrderedInitializationInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetCursor* CursorWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* CursorWidgetSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldMapEventPlaceActor* CurrentPointEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AWorldMapEventPlaceActor*> CurrentOverlapEvents;
    
public:
    AWorldMapCursorActor();
    
    // Fix for true pure virtual functions not being implemented
};

