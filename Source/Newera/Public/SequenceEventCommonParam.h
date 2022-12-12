#pragma once
#include "CoreMinimal.h"
#include "EBattleSequenceSituationId.h"
#include "EBattleSequenceEventAction.h"
#include "SequenceEventCommonParam.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventCommonParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceSituationId situation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceEventAction eventAction;
    
    NEWERA_API FSequenceEventCommonParam();
};

