#pragma once
#include "CoreMinimal.h"
#include "ComonBaseAnimInfo.generated.h"

class UWidgetAnimation;

USTRUCT(BlueprintType)
struct FComonBaseAnimInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Animation;
    
    NEWERA_API FComonBaseAnimInfo();
};

