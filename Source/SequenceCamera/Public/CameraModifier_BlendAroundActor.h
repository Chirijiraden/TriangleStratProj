#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraModifier.h"
#include "EBlendCoordinate.h"
#include "Camera/PlayerCameraManager.h"
#include "CameraModifier_BlendAroundActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class SEQUENCECAMERA_API UCameraModifier_BlendAroundActor : public UCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* baseActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* otherCameraActor;
    
public:
    UCameraModifier_BlendAroundActor();
    UFUNCTION(BlueprintCallable)
    void BlendOut(AActor* InBaseActor, AActor* InOtherCameraActor, const FViewTargetTransitionParams& TransitionParams, EBlendCoordinate EBlendCoordinate);
    
    UFUNCTION(BlueprintCallable)
    void BlendIn(AActor* InBaseActor, const FViewTargetTransitionParams& TransitionParams, EBlendCoordinate EBlendCoordinate);
    
};

