#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EventSwapUnitPos.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventSwapUnitPos : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString TargetUnitName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 TargetActorType;
    
    AEventSwapUnitPos();
};

