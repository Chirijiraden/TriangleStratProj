#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EventSpawnRebornUnit.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventSpawnRebornUnit : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool invisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool forExchange;
    
    AEventSpawnRebornUnit();
};

