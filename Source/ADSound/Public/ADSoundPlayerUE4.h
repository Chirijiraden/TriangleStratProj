#pragma once
#include "CoreMinimal.h"
#include "ADSoundPlayerBase.h"
#include "ADSoundPlayerUE4.generated.h"

class UAudioComponent;

UCLASS(Blueprintable)
class UADSoundPlayerUE4 : public UADSoundPlayerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* CurrentSound;
    
public:
    UADSoundPlayerUE4();
};

