#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "SequenceCameraTargetInfo.h"
#include "SequenceCameraInfo.h"
#include "Camera/PlayerCameraManager.h"
#include "SequenceCameraManager.generated.h"

class UCameraModifier_BlendAroundActor;
class UCameraComponent;
class ULevelSequencePlayer;
class ALevelSequenceActor;

UCLASS(Blueprintable)
class SEQUENCECAMERA_API ASequenceCameraManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* curSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* curSequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* curCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSequenceCameraInfo Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float scaleBaseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams InBlendDefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams OutBlendDefaultParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldForward;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams OutBlendParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraModifier_BlendAroundActor* CameraModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* lastCameraActor;
    
public:
    ASequenceCameraManager();
    UFUNCTION(BlueprintCallable)
    void StopSequence(float OutBlendTime);
    
    UFUNCTION(BlueprintCallable)
    void StartSequence(const FSequenceCameraInfo& info_);
    
    UFUNCTION(BlueprintCallable)
    void ResumeSequence();
    
    UFUNCTION(BlueprintCallable)
    void PauseSequence();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    void OnCameraCut(UCameraComponent* CameraComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSequenceCameraTargetInfo MakeSequenceCameraTargetInfoByTransform(const FVector& targetLocation_, const FVector& targetForward_, float targetRadius_);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSequenceCameraTargetInfo MakeSequenceCameraTargetInfoByActor(AActor* targetActor_);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetEventReceivers();
    
    UFUNCTION(BlueprintCallable)
    void EndSequence();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckInfo(const FSequenceCameraInfo& info_) const;
    
    UFUNCTION(BlueprintCallable)
    void BlendWithParam(const FViewTargetTransitionParams& InBlendParam_, const FViewTargetTransitionParams& OutBlendParam_);
    
    UFUNCTION(BlueprintCallable)
    void BlendOutWithParam(const FViewTargetTransitionParams& OutBlendParam_);
    
    UFUNCTION(BlueprintCallable)
    void BlendOut();
    
    UFUNCTION(BlueprintCallable)
    void BlendInWithParam(const FViewTargetTransitionParams& InBlendParam_);
    
    UFUNCTION(BlueprintCallable)
    void BlendIn();
    
    UFUNCTION(BlueprintCallable)
    void Blend();
    
};

