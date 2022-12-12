#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "ELookatTrackingRotateBase.h"
#include "SequenceCameraActor.generated.h"

UCLASS(Blueprintable)
class SEQUENCECAMERA_API ASequenceCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ELookatTrackingRotateBase LookatTrackingRotateBase;
    
    ASequenceCameraActor(const FObjectInitializer& ObjectInitializer);
};

