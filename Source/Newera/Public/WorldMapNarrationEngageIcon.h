#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldMapNarrationEngageIcon.generated.h"

class UWorldMapWidgetNarrationEngageIcon;
class UCanvasPanelSlot;

UCLASS(Blueprintable)
class AWorldMapNarrationEngageIcon : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetNarrationEngageIcon* IconWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* IconWidgetSlot;
    
public:
    AWorldMapNarrationEngageIcon();
};

