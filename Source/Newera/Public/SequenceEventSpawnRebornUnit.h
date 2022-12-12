#pragma once
#include "CoreMinimal.h"
#include "SequenceEventSpawnRebornUnit.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventSpawnRebornUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool invisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool forExchange;
    
    NEWERA_API FSequenceEventSpawnRebornUnit();
};

