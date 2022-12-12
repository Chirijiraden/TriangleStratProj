#include "GOP_Battle_AbilityTable.h"

FGOP_Battle_AbilityTable::FGOP_Battle_AbilityTable() {
    this->iSortNumber = 0;
    this->EAbilityCategory = EAbilityCategory::COMMAND;
    this->EAbilityType = EAbilityType::WEAPON_TECH;
    this->EAbilityEffect = EAbilityEffect::ATTACK;
    this->EOptionalEffect = EOptionalEffect::NONE;
    this->EFunctionIconType = EFunctionIconType::NOATTRIBUTE;
    this->EFunctionIconTypeAbilityTree = EFunctionIconTypeAbilityTree::SWORD;
    this->bWeaponAbilityIconPlus = false;
    this->iWeaponAbilityIconUp = 0;
    this->eTargetMapAttributeGroup = EMapAttributeGroup::NONE;
    this->iChangeLocationRange = 0;
    this->bSwapFrend = false;
    this->fHPCost = 0.00f;
    this->EAbilityClassType = EAbilityClassType::NONE;
    this->iParam1 = 0;
    this->iParam2 = 0;
    this->iParam3 = 0;
    this->iParam4 = 0;
    this->fParam1 = 0.00f;
    this->fParam2 = 0.00f;
    this->fParam3 = 0.00f;
    this->fParam4 = 0.00f;
    this->PassiveWaitTime = 0.00f;
    this->ExcludeAbilityTest = false;
    this->bEnableCopy = false;
    this->bEnableCopyAtEnemySide = false;
    this->bIsWeaponPassiveAbility = false;
    this->bIsWeaponAbility = false;
    this->bIsNotEndAction = false;
}

