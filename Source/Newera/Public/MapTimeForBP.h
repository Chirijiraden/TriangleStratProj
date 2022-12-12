#pragma once
#include "CoreMinimal.h"
#include "MapTimeForBP.generated.h"

USTRUCT(BlueprintType)
struct FMapTimeForBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 hour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 minute;
    
    NEWERA_API FMapTimeForBP();
};

