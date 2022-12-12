#include "GOP_Item_BattleTable.h"

FGOP_Item_BattleTable::FGOP_Item_BattleTable() {
    this->iSortNumber = 0;
    this->EFunctionIconType = EFunctionIconType::NOATTRIBUTE;
    this->EItemType = EItemType::RECOVERY;
    this->BuyPrice = 0;
    this->SellPrice = 0;
    this->bUnownable = false;
    this->bHealStatusAilments = false;
}

