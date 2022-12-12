#pragma once
#include "CoreMinimal.h"
#include "FlipbookAccessKey.h"
#include "DataAssetFlipbookAnimationDataNestExCache.generated.h"

class UNeweraAnimationData;

USTRUCT(BlueprintType)
struct FDataAssetFlipbookAnimationDataNestExCache {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FFlipbookAccessKey, UNeweraAnimationData*> Objects;
    
    NEWERA_API FDataAssetFlipbookAnimationDataNestExCache();
};

