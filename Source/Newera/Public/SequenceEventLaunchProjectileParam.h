#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SequenceEventLaunchProjectileParam.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventLaunchProjectileParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PauseSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JumpLabelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector offsetTargetPoint;
    
    NEWERA_API FSequenceEventLaunchProjectileParam();
};

