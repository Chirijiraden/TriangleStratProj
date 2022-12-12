#pragma once
#include "CoreMinimal.h"
#include "WorldMapEventIconListElement.generated.h"

class UWorldMapWidgetEventIcon;

USTRUCT(BlueprintType)
struct FWorldMapEventIconListElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWorldMapWidgetEventIcon* EventIconWidget;
    
    NEWERA_API FWorldMapEventIconListElement();
};

