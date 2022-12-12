#pragma once
#include "CoreMinimal.h"
#include "EBattleSequencePlaySETarget.h"
#include "EBattleSequenceGetGopId.h"
#include "SequenceEventPlaySEParam.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventPlaySEParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequenceGetGopId getGopId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName seGopId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSequencePlaySETarget playSETarget;
    
    NEWERA_API FSequenceEventPlaySEParam();
};

