#include "ADSoundSourceBase.h"

UADSoundSourceBase::UADSoundSourceBase() {
    this->SoundAttenuation = NULL;
    this->Listener = NULL;
    this->OcclusionVolumeRate = NULL;
    this->OcclusionCutOffFilterFrequencyHigh = NULL;
}

