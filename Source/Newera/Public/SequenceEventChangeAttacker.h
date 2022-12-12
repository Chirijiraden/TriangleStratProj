#pragma once
#include "CoreMinimal.h"
#include "EAttackSequence.h"
#include "SequenceEventChangeAttacker.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventChangeAttacker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAttackSequence attackSequence;
    
    NEWERA_API FSequenceEventChangeAttacker();
};

