#pragma once
#include "CoreMinimal.h"
#include "WorldMapWidgetBase.h"
#include "WorldMapWidgetDummyRoot.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class UWorldMapWidgetDummyRoot : public UWorldMapWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* canvasPanelRoot;
    
public:
    UWorldMapWidgetDummyRoot();
};

