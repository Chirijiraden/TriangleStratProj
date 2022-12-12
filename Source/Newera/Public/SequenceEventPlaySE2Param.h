#pragma once
#include "CoreMinimal.h"
#include "EBattleSequenceTargetType.h"
#include "EBattleSequenceGetGopId.h"
#include "SequenceEventPlaySE2Param.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventPlaySE2Param {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceGetGopId getGopId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName seGopId;
    
    NEWERA_API FSequenceEventPlaySE2Param();
};

