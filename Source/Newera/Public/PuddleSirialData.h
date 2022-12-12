#pragma once
#include "CoreMinimal.h"
#include "PuddleSirialData.generated.h"

USTRUCT(BlueprintType)
struct FPuddleSirialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> Parameter;
    
    NEWERA_API FPuddleSirialData();
};

