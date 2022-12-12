#pragma once
#include "CoreMinimal.h"
#include "SequenceEventCameraShakeParam.generated.h"

USTRUCT(BlueprintType)
struct FSequenceEventCameraShakeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName cameraShakeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    NEWERA_API FSequenceEventCameraShakeParam();
};

