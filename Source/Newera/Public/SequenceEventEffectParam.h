#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBattleSequenceTargetType.h"
#include "EBattleSequenceGetId.h"
#include "SequenceEventEffectParam.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventEffectParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EBattleSequenceTargetType targetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    EBattleSequenceGetId getId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName effectAttachName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName effectName;
    
    NEWERA_API FSequenceEventEffectParam();
};

