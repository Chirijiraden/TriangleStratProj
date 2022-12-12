#include "GOP_Sound_VoiceTable.h"

FGOP_Sound_VoiceTable::FGOP_Sound_VoiceTable() {
    this->VoiceCueSheetType = EVoiceCueSheetType::INVALID;
    this->SubVoiceCueSheetType = EVoiceCueSheetType::INVALID;
    this->VolumeRate = 0.00f;
    this->iPriorityOffset = 0;
    this->bAutoStopOnOwnerDestroyed = false;
    this->bPrioritizeFirst = false;
    this->CullingSec = 0.00f;
}

