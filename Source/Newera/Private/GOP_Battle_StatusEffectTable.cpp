#include "GOP_Battle_StatusEffectTable.h"

FGOP_Battle_StatusEffectTable::FGOP_Battle_StatusEffectTable() {
    this->EStatusEffect = EStatusEffect::STUNNING;
    this->EStatusEffectType = EStatusEffectType::DISABLE_ALL;
    this->EStatusEffectIcon = EStatusEffectIcon::POISON;
    this->bIsIconDisplay = false;
    this->iUISort = 0;
    this->iDurationTurn = 0;
    this->iDurationTime = 0;
    this->bDuplicate = false;
    this->iDuplicateMax = 0;
    this->bAcceptRemoveAll = false;
    this->bBadStatus = false;
    this->gCancelChargeTime = false;
    this->bClearCancelChargeTime = false;
    this->bIgnoreAdjust = false;
    this->bRewindReApp = false;
    this->iPriority = 0;
    this->fStartDelayTime = 0.00f;
    this->fStartWaitTime = 0.00f;
    this->iIdleAnimIndex = 0;
    this->TurnStartAnimIndex = 0;
    this->fTurnStartWaitTime = 0.00f;
    this->iChangeEffectTurn = 0;
    this->VoiceStatusType = EVoiceStatusType::NONE;
    this->fStatusEffectType = EStatusEffectUIColor::DEFAULT;
    this->bUnrecoverable = false;
    this->bDeadClear = false;
    this->fApplyRate = 0.00f;
}

