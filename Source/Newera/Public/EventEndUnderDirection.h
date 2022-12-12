#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EventEndUnderDirection.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventEndUnderDirection : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float blendTime;
    
    AEventEndUnderDirection();
};

