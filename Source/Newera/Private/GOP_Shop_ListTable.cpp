#include "GOP_Shop_ListTable.h"

FGOP_Shop_ListTable::FGOP_Shop_ListTable() {
    this->ClearGameCntMin = 0;
    this->ClearGameCntMax = 0;
    this->eOpenFaithType = EFaithType::NONE;
    this->FaithParam = 0;
    this->Stock = false;
    this->StockAddNum1 = 0;
    this->StockOverWriteFlag1 = false;
    this->StockAddNum2 = 0;
    this->StockOverWriteFlag2 = false;
    this->StockAddNum3 = 0;
    this->StockOverWriteFlag3 = false;
    this->StockAddNum4 = 0;
    this->StockOverWriteFlag4 = false;
    this->StockAddNum5 = 0;
    this->StockOverWriteFlag5 = false;
    this->StockAddNum6 = 0;
    this->StockOverWriteFlag6 = false;
    this->StockAddNum7 = 0;
    this->StockOverWriteFlag7 = false;
    this->EShopCategory = EShopCategory::NONE;
}

