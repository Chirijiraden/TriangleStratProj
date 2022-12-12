#include "GOP_Unit_MasterTable.h"

FGOP_Unit_MasterTable::FGOP_Unit_MasterTable() {
    this->ECharacterId = ECharacterId::CHAR_ID_NONE;
    this->SpriteType = ENeweraFlipbookOverrideType::DEFAULT;
    this->FootstepType = EFootstepType::INVALID;
    this->ActionVoiceType = EActionVoiceType::INVALID;
    this->bDummyUnit = false;
    this->EUnitCategory = EUnitCategory::HUMAN;
    this->bGrowthUnit = false;
    this->bNewGameMember = false;
    this->EFaithType = EFaithType::NONE;
    this->bBeliefMember = false;
}

