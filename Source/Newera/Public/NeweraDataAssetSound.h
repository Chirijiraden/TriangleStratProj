#pragma once
#include "CoreMinimal.h"
#include "NeweraDataAssetBase.h"
#include "EActionVoiceType.h"
#include "EVoiceCueSheetType.h"
#include "EMapAttribute.h"
#include "EMainStoryProgress.h"
#include "EActionVoiceCategory.h"
#include "EADSoundAudioDeviceType.h"
#include "NeweraDataAssetSoundActionVoiceCueSheetNest.h"
#include "NeweraDataAssetSoundActionVoiceData2.h"
#include "NeweraDataAssetSoundVoiceCueSheetTypes.h"
#include "NeweraDataAssetSound.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UNeweraDataAssetSound : public UNeweraDataAssetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActionVoiceCriticalVoiceDelaySecOnTargetHasNoVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EActionVoiceCategory, int32> ActionVoicePriorities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMapAttribute, FName> FootstepGopIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FootstepGopIdDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVoiceCueSheetType> LoadTargetCommonVoiceCueSheetTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EVoiceCueSheetType> LoadTargetBattleVoiceCueSheetTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMainStoryProgress, FNeweraDataAssetSoundVoiceCueSheetTypes> LoadTargetVoiceCueSheetTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMainStoryProgress, FNeweraDataAssetSoundVoiceCueSheetTypes> LoadTargetScenarioVoiceCueSheetTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EADSoundAudioDeviceType, float> SoundDeviceVolumeRates;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVoiceCueSheetType, FNeweraDataAssetSoundActionVoiceCueSheetNest> VoiceCueSheets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EActionVoiceType, FNeweraDataAssetSoundActionVoiceData2> ActionVoiceDatas;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EActionVoiceType, FString> ActionVoiceSuffixes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GopSoundFootstepDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GopSoundActionVoiceDataTable;
    
public:
    UNeweraDataAssetSound();
};

