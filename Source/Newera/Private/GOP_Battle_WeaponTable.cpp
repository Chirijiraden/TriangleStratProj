#include "GOP_Battle_WeaponTable.h"

FGOP_Battle_WeaponTable::FGOP_Battle_WeaponTable() {
    this->EWeaponType = EWeaponType::NONE;
    this->WeaponIconType = EWeaponIconType::SWORD;
    this->MaxLv = 0;
    this->EweaponRank = EweaponRank::DEFAULT;
    this->iUpgradeMatrialNum1 = 0;
    this->iUpgradeMatrialNum2 = 0;
    this->iUpgradeMatrialNum3 = 0;
    this->iUpgradeMoney = 0;
    this->iRankUpMatrialNum1 = 0;
    this->iRankUpMatrialNum2 = 0;
    this->iRankUpMatrialNum3 = 0;
    this->iRankUpMoney = 0;
}

