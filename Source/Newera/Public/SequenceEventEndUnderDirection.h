#pragma once
#include "CoreMinimal.h"
#include "SequenceEventEndUnderDirection.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventEndUnderDirection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float blendTime;
    
    NEWERA_API FSequenceEventEndUnderDirection();
};

