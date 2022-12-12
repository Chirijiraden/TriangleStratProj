#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "ESoundCategory.h"
#include "ADSoundPlaybackId.h"
#include "NeweraSoundFL.generated.h"

class UObject;
class UDebugMenuBGM;

UCLASS(Blueprintable)
class UNeweraSoundFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraSoundFL();
    UFUNCTION(BlueprintCallable)
    static void TransitionVolumeRateBGM(float TargetRate, float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    static void TransitionVolumeRate(FADSoundPlaybackId PlaybackId, float TargetRate, float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    static void TransitionCategoryVolumeRate(const ESoundCategory SoundCategory, float TargetRate, float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    static void StopByCategory(const ESoundCategory SoundCategory);
    
    UFUNCTION(BlueprintCallable)
    static void StopAll();
    
    UFUNCTION(BlueprintCallable)
    static void STOP(FADSoundPlaybackId PlaybackId);
    
    UFUNCTION(BlueprintCallable)
    static void SetVolumeRate(FADSoundPlaybackId PlaybackId, float TargetRate);
    
    UFUNCTION(BlueprintCallable)
    static void SetDebugDrawFlag_AttenuationShapeAll(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetCategoryVolumeRate(const ESoundCategory SoundCategory, float TargetRate);
    
    UFUNCTION(BlueprintCallable)
    static void SetBGMCursorID(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void SetAisacParamById(const FADSoundPlaybackId& PlaybackId, int32 AisacId, float AisacValue);
    
    UFUNCTION(BlueprintCallable)
    static FADSoundPlaybackId PlayVoiceUI(const FName& GopId);
    
    UFUNCTION(BlueprintCallable)
    static FADSoundPlaybackId PlayVoice2D(const FName& GopId, const UObject* Owner);
    
    UFUNCTION(BlueprintCallable)
    static FADSoundPlaybackId PlayVoice(const FName& GopId, const FVector& Location, const UObject* Owner);
    
    UFUNCTION(BlueprintCallable)
    static FADSoundPlaybackId PlaySEUI(const FName& GopId);
    
    UFUNCTION(BlueprintCallable)
    static FADSoundPlaybackId PlaySE2D(const FName& GopId, const UObject* Owner);
    
    UFUNCTION(BlueprintCallable)
    static FADSoundPlaybackId PlaySe(const FName& GopId, const FVector& Location, const UObject* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void PlayDebugBGM(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void PauseBGM(bool bInPause);
    
    UFUNCTION(BlueprintCallable)
    static void Pause(FADSoundPlaybackId PlaybackId, bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPlayingBGM();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlaying(FADSoundPlaybackId PlaybackId);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPaused(FADSoundPlaybackId PlaybackId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsLoopBGM();
    
    UFUNCTION(BlueprintCallable)
    static bool IsLoop(FADSoundPlaybackId PlaybackId);
    
    UFUNCTION(BlueprintCallable)
    static float GetRemainingSec();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UDebugMenuBGM*> GetDebugBGMList();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetBGMCursorID();
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutCategoryVolumeRate(const ESoundCategory SoundCategory, float DurationSec, bool bAutoStop);
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutBGM(float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    static void FadeOut(FADSoundPlaybackId PlaybackId, float DurationSec, bool bAutoStop);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInCategoryVolumeRate(const ESoundCategory SoundCategory, float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInBGM(float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    static void FadeIn(FADSoundPlaybackId PlaybackId, float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeBGM(const FName& GopId, float FadeInSec, float OldBgmFadeOutSec, float DelaySec);
    
};

