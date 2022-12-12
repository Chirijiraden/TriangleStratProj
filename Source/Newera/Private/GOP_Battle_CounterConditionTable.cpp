#include "GOP_Battle_CounterConditionTable.h"

FGOP_Battle_CounterConditionTable::FGOP_Battle_CounterConditionTable() {
    this->EAttackBaseType = EAttackBaseType::PHYSICS;
    this->EAttackType = EAttackType::MELLE;
    this->ETargetCategory = EElementalType::NONE;
    this->bIgnoreAttackBaseType = false;
    this->bIgnoreAttackType = false;
    this->bIgnoreElementType = false;
    this->ECounterSpecialType = ECounterSpecialType::NONE;
    this->fIncidence = 0.00f;
}

