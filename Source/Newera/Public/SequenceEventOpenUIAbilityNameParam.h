#pragma once
#include "CoreMinimal.h"
#include "SequenceEventOpenUIAbilityNameParam.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventOpenUIAbilityNameParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float openTime;
    
    NEWERA_API FSequenceEventOpenUIAbilityNameParam();
};

