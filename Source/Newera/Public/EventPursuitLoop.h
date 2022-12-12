#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EventPursuitLoop.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventPursuitLoop : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString loopLabelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString endLabelName;
    
    AEventPursuitLoop();
};

