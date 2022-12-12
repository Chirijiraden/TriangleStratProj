#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SequenceEventEffectAttackPosParam.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventEffectAttackPosParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName effectRangeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName effectName;
    
    NEWERA_API FSequenceEventEffectAttackPosParam();
};

