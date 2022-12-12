#pragma once
#include "CoreMinimal.h"
#include "NeweraCameraActor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ViewParamTransitionCurves.h"
#include "CameraActorViewParam.h"
#include "NeweraCameraActorControllable.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class NEWERA_API ANeweraCameraActorControllable : public ANeweraCameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraActorViewParam> CameraActorViewParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewParamTransitionCurves cameraTransitionCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* gridCameraRotaionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* cameraZoomInOutCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float cameraZoomInOutCurveScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float gridCameraRotationTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialMinFStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialMaxFStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialAperture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDepthBlurAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialDepthBlurRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialDiaphragmBladeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Switch_InitialFocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Switch_InitialMinFStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Switch_InitialMaxFStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Switch_InitialAperture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Switch_InitialDepthBlurAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Switch_InitialDepthBlurRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Switch_InitialDiaphragmBladeCount;
    
    ANeweraCameraActorControllable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartChangingCameraTargetZoom(FName Identifier, float targetDistance, const UCurveFloat* distanceCurve, float Time);
    
    UFUNCTION(BlueprintCallable)
    void StartChangingCameraTargetPointAndZoom(FName Identifier, const FVector& TargetPoint, const UCurveFloat* pointCurve, float targetDistance, const UCurveFloat* distanceCurve, const FRotator& targetRot, const UCurveFloat* RotationCurve, float Time);
    
    UFUNCTION(BlueprintCallable)
    void StartChangingCameraTargetGridAndZoom(FName Identifier, const FIntVector& TargetGrid, const UCurveFloat* gridCurve, float targetDistance, const UCurveFloat* distanceCurve, float Time);
    
    UFUNCTION(BlueprintCallable)
    void OverwriteCameraRestrictDistance(float MinDistance, float MaxDistance, float distancePerSecond);
    
    UFUNCTION(BlueprintCallable)
    void EndChangingCamera(FName Identifier, float Time);
    
    UFUNCTION(BlueprintCallable)
    void DisableOverwriteCameraRestrictDistance();
    
};

