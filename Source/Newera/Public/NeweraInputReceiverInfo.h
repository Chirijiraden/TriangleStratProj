#pragma once
#include "CoreMinimal.h"
#include "NeweraInputReceiverInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FNeweraInputReceiverInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    NEWERA_API FNeweraInputReceiverInfo();
};

