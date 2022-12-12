#include "GOP_Sound_SeTable.h"

FGOP_Sound_SeTable::FGOP_Sound_SeTable() {
    this->CueId = 0;
    this->VolumeRate = 0.00f;
    this->iPriorityOffset = 0;
    this->bAutoStopOnOwnerDestroyed = false;
    this->bPrioritizeFirst = false;
    this->CullingSec = 0.00f;
}

