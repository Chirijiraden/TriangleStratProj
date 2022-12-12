#pragma once
#include "CoreMinimal.h"
#include "FrozenSirialData.generated.h"

USTRUCT(BlueprintType)
struct FFrozenSirialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> Parameter;
    
    NEWERA_API FFrozenSirialData();
};

