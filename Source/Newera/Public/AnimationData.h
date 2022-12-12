#pragma once
#include "CoreMinimal.h"
#include "AnimationConfigDataSet.h"
#include "AnimationData.generated.h"

class UPaperFlipbook;

USTRUCT(BlueprintType)
struct FAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperFlipbook* Flipbook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationConfigDataSet ConfigDataSet;
    
    NEWERA_API FAnimationData();
};

