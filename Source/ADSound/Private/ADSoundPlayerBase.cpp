#include "ADSoundPlayerBase.h"

UADSoundPlayerBase::UADSoundPlayerBase() {
    this->SoundSource = NULL;
    this->CategoryParamAccessor = NULL;
    this->DynamicVolumeRate = NULL;
    this->VolumeFadeParam = NULL;
}

