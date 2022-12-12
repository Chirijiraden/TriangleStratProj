#pragma once
#include "CoreMinimal.h"
#include "NeweraWorldIconGopIds.generated.h"

USTRUCT(BlueprintType)
struct FNeweraWorldIconGopIds {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> Data;
    
    NEWERA_API FNeweraWorldIconGopIds();
};

