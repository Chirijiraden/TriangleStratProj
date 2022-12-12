#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Paper2D -ObjectName=PaperFlipbookNotify -FallbackName=PaperFlipbookNotify
#include "NeweraFlipbookNotifyBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UNeweraFlipbookNotifyBase : public UPaperFlipbookNotify {
    GENERATED_BODY()
public:
    UNeweraFlipbookNotifyBase();
};

