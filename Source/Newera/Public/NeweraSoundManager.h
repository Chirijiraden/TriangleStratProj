#pragma once
#include "CoreMinimal.h"
#include "FastForwardStateReceiverInterface.h"
#include "ADSoundManagerCRIWare.h"
#include "UObject/NoExportTypes.h"
#include "EVoiceCueSheetType.h"
#include "ESoundCategory.h"
#include "ADSoundPlaybackId.h"
#include "NeweraSoundManager.generated.h"

class UObject;
class USoundAtomCueSheet;
class UInterpFloat;
class UNeweraAmbientActorManager;
class UNeweraSoundManager;
class UNeweraSoundDeviceWatcher;
class UNeweraUniqueSoundManager;

UCLASS(Blueprintable)
class UNeweraSoundManager : public UADSoundManagerCRIWare, public IFastForwardStateReceiverInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EVoiceCueSheetType, USoundAtomCueSheet*> VoiceCueSheets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraSoundDeviceWatcher* SoundDeviceWatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraUniqueSoundManager* UniqueSoundManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterpFloat* TimerChangeBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraAmbientActorManager* AmbientActorManager;
    
public:
    UNeweraSoundManager();
    UFUNCTION(BlueprintCallable)
    void StopByCategory(const ESoundCategory SoundCategory);
    
    UFUNCTION(BlueprintCallable)
    void SetMuteByCategory(const ESoundCategory SoundCategory, bool bMute);
    
    UFUNCTION(BlueprintCallable)
    FADSoundPlaybackId PlayVoiceUI(const FName& GopId, const TArray<ESoundCategory>& AdditionalSoundCategory);
    
    UFUNCTION(BlueprintCallable)
    FADSoundPlaybackId PlayVoice2D(const FName& GopId, const UObject* Owner, const TArray<ESoundCategory>& AdditionalSoundCategory);
    
    UFUNCTION(BlueprintCallable)
    FADSoundPlaybackId PlayVoice(const FName& GopId, const FVector& Location, const UObject* Owner, const TArray<ESoundCategory>& AdditionalSoundCategory);
    
    UFUNCTION(BlueprintCallable)
    FADSoundPlaybackId PlaySEUI(const FName& GopId, const TArray<ESoundCategory>& AdditionalSoundCategory);
    
    UFUNCTION(BlueprintCallable)
    FADSoundPlaybackId PlaySE2D(const FName& GopId, const UObject* Owner, const TArray<ESoundCategory>& AdditionalSoundCategory);
    
    UFUNCTION(BlueprintCallable)
    FADSoundPlaybackId PlaySe(const FName& GopId, const FVector& Location, const UObject* Owner, const TArray<ESoundCategory>& AdditionalSoundCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UNeweraSoundManager* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutCategoryVolumeRate(const ESoundCategory SoundCategory, float DurationSec, bool bAutoStop);
    
    UFUNCTION(BlueprintCallable)
    void FadeInCategoryVolumeRate(const ESoundCategory SoundCategory, float DurationSec);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBGM(const FName& GopId, float FadeInSec, float OldBgmFadeOutSec, float DelaySec);
    
    
    // Fix for true pure virtual functions not being implemented
};

