#pragma once
#include "CoreMinimal.h"
#include "Paper2DCustom/PaperFlipbookNotify.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Paper2D -ObjectName=PaperFlipbookNotify -FallbackName=PaperFlipbookNotify
#include "NeweraFlipbookNotifyBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UNeweraFlipbookNotifyBase : public UPaperFlipbookNotify {
    GENERATED_BODY()
public:
    UNeweraFlipbookNotifyBase();
};

