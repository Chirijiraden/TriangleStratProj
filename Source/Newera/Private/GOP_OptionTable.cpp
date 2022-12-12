#include "GOP_OptionTable.h"

FGOP_OptionTable::FGOP_OptionTable() {
    this->EOptionCategory = EOptionCategory::GAME;
    this->EOptionSelect = EOptionSelect::ALTERNATIVE;
    this->EButtonForKeyConfig_1 = EButtonForKeyConfig::UP;
    this->EButtonForKeyConfig_2 = EButtonForKeyConfig::UP;
    this->Switch = false;
    this->Steam = false;
}

