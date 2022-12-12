#pragma once
#include "CoreMinimal.h"
#include "WorldMapWidgetBase.h"
#include "WorldMapWidgetEventOverview.generated.h"

class ULoadableImage;
class UTextBlock;
class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UWorldMapWidgetEventOverview : public UWorldMapWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* ItemText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_StoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULoadableImage* CharaPictM;
    
public:
    UWorldMapWidgetEventOverview();
};

