#include "GOP_World_IconTable.h"

FGOP_World_IconTable::FGOP_World_IconTable() {
    this->EWorldIconType = EWorldIconType::MAIN_STORY;
    this->RecLevel = 0;
    this->RecLevel2 = 0;
    this->RecLevel3 = 0;
    this->EquivalenceMainStoryProgress = EMainStoryProgress::NONE;
    this->EWorldEventPlaceType = EWorldEventPlaceType::WP_A_CAPITAL;
    this->bAutoEndFlagOn = false;
    this->bAvailableOnEndFlagExOn = false;
    this->DispPriority = 0;
    this->MainStoryRequirement = EMainStoryProgress::NONE;
    this->FaithTypeRequirement = EFaithType::NONE;
    this->FaithParamRequirement = 0;
    this->FaithTypeRequirement_02 = EFaithType::NONE;
    this->FaithParamRequirement_02 = 0;
    this->FaithTypeRequirement_03 = EFaithType::NONE;
    this->FaithParamRequirement_03 = 0;
    this->BattleAttendanceRequirement = 0;
}

