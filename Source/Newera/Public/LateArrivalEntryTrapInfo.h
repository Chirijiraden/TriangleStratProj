#pragma once
#include "CoreMinimal.h"
#include "LateArrivalEntryTrapInfo.generated.h"

class UTrapDataBase;

USTRUCT(BlueprintType)
struct FLateArrivalEntryTrapInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTrapDataBase* destructTrapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTrapDataBase* lateArrivalEntryTrapData;
    
    NEWERA_API FLateArrivalEntryTrapInfo();
};

