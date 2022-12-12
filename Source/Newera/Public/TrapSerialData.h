#pragma once
#include "CoreMinimal.h"
#include "TrapSerialData.generated.h"

USTRUCT(BlueprintType)
struct FTrapSerialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> Parameter;
    
    NEWERA_API FTrapSerialData();
};

