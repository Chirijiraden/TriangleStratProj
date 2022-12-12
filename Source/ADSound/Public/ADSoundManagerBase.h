#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ADSoundPlaybackId.h"
#include "ADSoundManagerBase.generated.h"

class UADSoundPlayerControllerBase;
class UADSoundOwnedController;
class UADSoundListenerHandle;
class UADSoundListenerBase;
class UADSoundCategoryController;
class USoundConcurrency;
class USoundAttenuation;

UCLASS(Blueprintable)
class ADSOUND_API UADSoundManagerBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundListenerHandle* ListenerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundPlayerControllerBase* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundListenerBase* DefaultListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundCategoryController* CategoryController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UADSoundOwnedController* OwnedController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USoundAttenuation*> SoundAttenuations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, USoundConcurrency*> SoundConcurrencys;
    
public:
    UADSoundManagerBase();
    UFUNCTION(BlueprintCallable)
    void TransitionVolumeRateById(const FADSoundPlaybackId& ID, float TargetRate, float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    bool StopById(const FADSoundPlaybackId& ID);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumeRateById(const FADSoundPlaybackId& ID, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumeFadeOutById(const FADSoundPlaybackId& ID, float DurationSec, bool bAutoStop);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumeFadeInById(const FADSoundPlaybackId& ID, float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    void SetPitchRateMaxById(const FADSoundPlaybackId& ID, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetPitchRateById(const FADSoundPlaybackId& ID, float Rate);
    
    UFUNCTION(BlueprintCallable)
    void SetMuteById(const FADSoundPlaybackId& ID, bool bMute);
    
    UFUNCTION(BlueprintCallable)
    void SetLocationById(const FADSoundPlaybackId& ID, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetBusSendLevelById(const FADSoundPlaybackId& ID, const FString& BusName, float Level);
    
    UFUNCTION(BlueprintCallable)
    void SetBooleanParamById(const FADSoundPlaybackId& ID, const FName& ParamName, const bool Value);
    
    UFUNCTION(BlueprintCallable)
    void PauseById(const FADSoundPlaybackId& ID, bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void NotifyAll_Stop();
    
    UFUNCTION(BlueprintCallable)
    void NotifyAll_ChangePlayable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingById(const FADSoundPlaybackId& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPausedById(const FADSoundPlaybackId& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoopById(const FADSoundPlaybackId& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingMilliSecById(const FADSoundPlaybackId& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UADSoundListenerHandle* GetListenerHandle() const;
    
};

