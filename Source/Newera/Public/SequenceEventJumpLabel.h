#pragma once
#include "CoreMinimal.h"
#include "SequenceEventJumpLabel.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventJumpLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JumpLabelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString jumpLabelName2;
    
    NEWERA_API FSequenceEventJumpLabel();
};

