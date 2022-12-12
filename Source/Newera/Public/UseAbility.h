#pragma once
#include "CoreMinimal.h"
#include "UseAbility.generated.h"

USTRUCT(BlueprintType)
struct FUseAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityGopId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    NEWERA_API FUseAbility();
};

