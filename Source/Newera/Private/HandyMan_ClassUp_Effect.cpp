#include "HandyMan_ClassUp_Effect.h"

void UHandyMan_ClassUp_Effect::SetNotifyPlayVoice(bool Value) {
}



UHandyMan_ClassUp_Effect::UHandyMan_ClassUp_Effect() {
    this->WaitTimerForClose = 0.00f;
    this->bIsWaitingClose = false;
    this->volumeRateBGMInEffect = 0.00f;
    this->durationSecForVolumeRateBGMInEffect = 0.00f;
}

