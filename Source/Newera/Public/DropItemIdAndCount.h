#pragma once
#include "CoreMinimal.h"
#include "DropItemIdAndCount.generated.h"

USTRUCT(BlueprintType)
struct FDropItemIdAndCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    NEWERA_API FDropItemIdAndCount();
};

