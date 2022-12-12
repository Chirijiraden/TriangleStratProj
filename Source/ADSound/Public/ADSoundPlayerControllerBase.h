#pragma once
#include "CoreMinimal.h"
#include "ADSoundPlayerPoolAccessor.h"
#include "ADSoundPlaybackId.h"
#include "ADSoundPlayerControllerBase.generated.h"

class UADSoundPlayerBase;

UCLASS(Blueprintable)
class UADSoundPlayerControllerBase : public UADSoundPlayerPoolAccessor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UADSoundPlayerBase*> arraySoundPlayerPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UADSoundPlayerBase*> arrayReadySoundPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FADSoundPlaybackId, UADSoundPlayerBase*> mapUsingSoundPlayer;
    
public:
    UADSoundPlayerControllerBase();
};

