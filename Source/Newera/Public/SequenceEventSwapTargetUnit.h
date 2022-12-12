#pragma once
#include "CoreMinimal.h"
#include "SequenceEventSwapTargetUnit.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventSwapTargetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetUnitName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetActorType;
    
    NEWERA_API FSequenceEventSwapTargetUnit();
};

