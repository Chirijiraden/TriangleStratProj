#pragma once
#include "CoreMinimal.h"
#include "EventParamActor.h"
#include "EventCameraShake.generated.h"

UCLASS(Blueprintable)
class NEWERA_API AEventCameraShake : public AEventParamActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString cameraShakeNameStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Scale;
    
    AEventCameraShake();
};

