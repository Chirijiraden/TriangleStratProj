#pragma once
#include "CoreMinimal.h"
#include "WorldMapWidgetBase.h"
#include "WorldMapWidgetCursor.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UWorldMapWidgetCursor : public UWorldMapWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* DummyCollision;
    
public:
    UWorldMapWidgetCursor();
};

