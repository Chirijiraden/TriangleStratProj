#pragma once
#include "CoreMinimal.h"
#include "SequenceEventSpawnProjectileParam.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventSpawnProjectileParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float projectileLifeSpanAfterFlyingEnd;
    
    NEWERA_API FSequenceEventSpawnProjectileParam();
};

