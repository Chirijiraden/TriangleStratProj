#pragma once
#include "CoreMinimal.h"
#include "SnowCoverSirialData.generated.h"

USTRUCT(BlueprintType)
struct FSnowCoverSirialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> Parameter;
    
    NEWERA_API FSnowCoverSirialData();
};

