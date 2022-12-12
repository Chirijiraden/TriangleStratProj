#pragma once
#include "CoreMinimal.h"
#include "WorldMapWidgetBase.h"
#include "WorldMapWidgetPlaceName.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UWorldMapWidgetPlaceName : public UWorldMapWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemText;
    
public:
    UWorldMapWidgetPlaceName();
};

