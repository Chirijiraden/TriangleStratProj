#pragma once
#include "CoreMinimal.h"
#include "EBattleSequenceTargetType.h"
#include "SequenceEventChangeBattleCursorParam.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventChangeBattleCursorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
    NEWERA_API FSequenceEventChangeBattleCursorParam();
};

