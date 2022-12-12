#pragma once
#include "CoreMinimal.h"
#include "EBattleSequenceTargetType.h"
#include "SequenceEventChangeVisibilityParam.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventChangeVisibilityParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float changeTime;
    
    NEWERA_API FSequenceEventChangeVisibilityParam();
};

