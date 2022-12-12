#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraSettingData.h"
#include "SequenceCameraSettingActor.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ASequenceCameraSettingActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraSettingData> CameraSettings;
    
public:
    ASequenceCameraSettingActor();
};

