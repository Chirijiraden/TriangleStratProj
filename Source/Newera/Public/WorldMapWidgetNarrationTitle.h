#pragma once
#include "CoreMinimal.h"
#include "WorldMapWidgetBase.h"
#include "WorldMapWidgetNarrationTitle.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UWorldMapWidgetNarrationTitle : public UWorldMapWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemText_TitleNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemText_Title;
    
public:
    UWorldMapWidgetNarrationTitle();
};

