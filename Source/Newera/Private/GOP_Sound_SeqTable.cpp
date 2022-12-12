#include "GOP_Sound_SeqTable.h"

FGOP_Sound_SeqTable::FGOP_Sound_SeqTable() {
    this->State = EBattleSequence::LS_ATTACK_NORMAL;
    this->frameBegin = 0;
    this->frameEnd = 0;
}

