#include "GOP_Battle_BuffEffectTable.h"

FGOP_Battle_BuffEffectTable::FGOP_Battle_BuffEffectTable() {
    this->EBuffEffectParam = EBuffEffectParam::MOVE;
    this->bIsBuff = false;
    this->iPriority = 0;
    this->iUISort = 0;
    this->iIconLv = 0;
    this->iDurationTurn = 0;
    this->fStartDelayTime = 0.00f;
    this->fStartWaitTime = 0.00f;
    this->bDeadClear = false;
}

