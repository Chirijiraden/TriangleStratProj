#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LateArrivalEntryTrapInfo.h"
#include "TrapManager.generated.h"

class UTrapDataBase;
class UWorld;

UCLASS(Blueprintable)
class NEWERA_API UTrapManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* WorldContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTrapDataBase*> damageTrapArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTrapDataBase*> springTrapArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTrapDataBase*> removeOldestTrapArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLateArrivalEntryTrapInfo oldestDestructTrapInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLateArrivalEntryTrapInfo arrivalEntryTrapInfo;
    
public:
    UTrapManager();
};

