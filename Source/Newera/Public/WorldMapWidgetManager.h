#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WorldMapFlowStateReceiverInterface.h"
#include "WorldMapWidgetManager.generated.h"

class UWorldMapWidgetBase;
class UDebugWidgetAreaDrawer;
class UWorldMapControllerGuide;
class UWorldMapWidgetNarrationTitle;
class UWorldMapWidgetNarrationCinemaScope;
class UWorldMapWidgetEventOverview;
class UWorldMapWidgetEncampment;
class UWorldMapWidgetDummyRoot;

UCLASS(Blueprintable)
class NEWERA_API UWorldMapWidgetManager : public UObject, public IWorldMapFlowStateReceiverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetDummyRoot* ViewportDummyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapControllerGuide* ControllerGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetNarrationCinemaScope* CinemaScopeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetEncampment* EncampmentWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetEventOverview* EventOvewviewWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetNarrationTitle* NarrationTitleWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDebugWidgetAreaDrawer* AreaDrawerEventMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDebugWidgetAreaDrawer* AreaDrawerCameraMoveStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDebugWidgetAreaDrawer* AreaDrawerCameraMoveContinue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWorldMapWidgetBase*> WorldMapWidgets;
    
public:
    UWorldMapWidgetManager();
    
    // Fix for true pure virtual functions not being implemented
};

