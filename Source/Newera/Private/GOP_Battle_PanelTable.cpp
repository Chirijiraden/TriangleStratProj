#include "GOP_Battle_PanelTable.h"

FGOP_Battle_PanelTable::FGOP_Battle_PanelTable() {
    this->EMapAttribute = EMapAttribute::NONE;
    this->bStandable = false;
    this->bCanEnter = false;
    this->bCanEnterFlying = false;
    this->bCanEnterForResearch = false;
    this->bCanJumpStart = false;
    this->bCanJumpOverNotDented = false;
    this->bCallableTrolley = false;
    this->bForceKnockbackHit = false;
    this->MoveCost = 0;
    this->fCorrectHit = 0.00f;
    this->fCorrectDodge = 0.00f;
    this->bWet = false;
    this->bFreezable = false;
    this->bPuddlable = false;
    this->bSnowable = false;
    this->bConductive = false;
    this->fDamageRate = 0.00f;
    this->fDamageRatePath = 0.00f;
}

