#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NotifyCameraCutInterface.h"
#include "ESequenceCameraLocation.h"
#include "ESequenceCameraForward.h"
#include "SequenceCameraTargetInfo.h"
#include "SequenceCameraBaseActor.generated.h"

class ASequenceCameraManager;

UCLASS(Blueprintable)
class SEQUENCECAMERA_API ASequenceCameraBaseActor : public AActor, public INotifyCameraCutInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESequenceCameraLocation CameraLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESequenceCameraForward CameraForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float ScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bTrackLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bTrackForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TrackingInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActorInEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bIgnoreFlip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool bCameraDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASequenceCameraManager* manager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceCameraTargetInfo targetInfo;
    
public:
    ASequenceCameraBaseActor();
    UFUNCTION(BlueprintCallable)
    void SetTargetActorInEditor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void EndTransform();
    
    UFUNCTION(BlueprintCallable)
    void BeginTransform(ASequenceCameraManager* man);
    
    
    // Fix for true pure virtual functions not being implemented
};

