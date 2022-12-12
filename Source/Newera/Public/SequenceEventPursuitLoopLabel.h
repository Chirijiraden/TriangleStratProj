#pragma once
#include "CoreMinimal.h"
#include "SequenceEventPursuitLoopLabel.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventPursuitLoopLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString loopLabelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString endLabelName;
    
    NEWERA_API FSequenceEventPursuitLoopLabel();
};

