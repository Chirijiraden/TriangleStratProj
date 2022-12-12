#pragma once
#include "CoreMinimal.h"
#include "KnockBackDamageCalculateParamBP.generated.h"

USTRUCT(BlueprintType)
struct FKnockBackDamageCalculateParamBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnitMaxHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnitJumpCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeightGap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KnockbackDistance;
    
    NEWERA_API FKnockBackDamageCalculateParamBP();
};

