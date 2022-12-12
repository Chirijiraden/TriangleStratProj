#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HitObjectOnScreenInterface.h"
#include "TickableObjectInterface.h"
#include "WorldMapOrderedInitializationInterface.h"
#include "WorldMapFlowStateReceiverInterface.h"
#include "WorldMapEventMarkInterface.h"
#include "EWorldEventPlaceType.h"
#include "WorldMapEventPlaceActor.generated.h"

class UWorldMapWidgetPlaceName;
class UWorldMapWidgetEventIconList;
class UCanvasPanelSlot;

UCLASS(Blueprintable)
class AWorldMapEventPlaceActor : public AActor, public IHitObjectOnScreenInterface, public ITickableObjectInterface, public IWorldMapEventMarkInterface, public IWorldMapFlowStateReceiverInterface, public IWorldMapOrderedInitializationInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWorldEventPlaceType WorldEventPlaceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GopIdTextPlaceName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetEventIconList* IconListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* IconListWidgetSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetPlaceName* PlaceNameWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* PlaceNameWidgetSlot;
    
public:
    AWorldMapEventPlaceActor();
    UFUNCTION(BlueprintCallable)
    void Callback_OnReInitializedIconListWidget();
    
    UFUNCTION(BlueprintCallable)
    void Callback_OnInitializedIconListWidget();
    
    
    // Fix for true pure virtual functions not being implemented
};

