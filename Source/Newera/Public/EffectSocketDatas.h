#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EEffectSocketType.h"
#include "EffectSocketDatas.generated.h"

USTRUCT(BlueprintType)
struct FEffectSocketDatas {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<EEffectSocketType, FVector> SocketOffsets;
    
    NEWERA_API FEffectSocketDatas();
};

