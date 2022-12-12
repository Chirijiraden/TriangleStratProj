#pragma once
#include "CoreMinimal.h"
#include "SequenceCameraBaseActor.h"
#include "UObject/NoExportTypes.h"
#include "SequenceCameraCenterBaseActor.generated.h"

UCLASS(Blueprintable)
class SEQUENCECAMERA_API ASequenceCameraCenterBaseActor : public ASequenceCameraBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CenterRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bScaleWithDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AttackerLocationInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefenderLocationInEditor;
    
    ASequenceCameraCenterBaseActor();
    UFUNCTION(BlueprintCallable)
    void SetCenterRate(float Rate);
    
};

