#pragma once
#include "CoreMinimal.h"
#include "BurnableSirialData.generated.h"

USTRUCT(BlueprintType)
struct FBurnableSirialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> Parameter;
    
    NEWERA_API FBurnableSirialData();
};

