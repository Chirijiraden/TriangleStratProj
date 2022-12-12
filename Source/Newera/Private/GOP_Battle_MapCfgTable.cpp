#include "GOP_Battle_MapCfgTable.h"

FGOP_Battle_MapCfgTable::FGOP_Battle_MapCfgTable() {
    this->iInitialTimeHour = 0;
    this->iInitialTimeMin = 0;
    this->iInitialTimeSec = 0;
    this->eInitialWeatherType = EWeatherType::SUNNY;
    this->eInitialWindType = EWindType::GENTLEWIND;
    this->EWinConditionType = EWinConditionType::EXTERMINATION;
}

