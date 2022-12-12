#pragma once
#include "CoreMinimal.h"
#include "PaperFlipbookNotifyInfo.generated.h"

class UPaperFlipbookNotify;

USTRUCT(BlueprintType)
struct FPaperFlipbookNotifyInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UPaperFlipbookNotify* EVENT;
    
    UPROPERTY(EditAnywhere)
    FName EventName;
    
    UPROPERTY(EditAnywhere)
    float TriggerTimingFrame;
    
    PAPER2D_API FPaperFlipbookNotifyInfo();
};

