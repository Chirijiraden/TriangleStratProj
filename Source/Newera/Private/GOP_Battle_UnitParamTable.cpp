#include "GOP_Battle_UnitParamTable.h"

FGOP_Battle_UnitParamTable::FGOP_Battle_UnitParamTable() {
    this->EUnitCamp = EUnitCamp::FRIEND;
    this->EDamagableUnitType = EDamagableUnitType::NONE;
    this->EUnitAIType = EUnitAIType::NONE;
    this->bIsGuest = false;
    this->bNoHuman = false;
    this->bIsIgnoreExperience = false;
    this->ESpecificEffectType = ESpecificEffectType::NONE;
    this->ESpecificEffectType2 = ESpecificEffectType2::NONE;
    this->iUnitHeight = 0;
    this->bIgnoreDirection = false;
    this->bResistDirectionChangeEffect = false;
    this->bMustBeHit = false;
    this->bResKnockBack = false;
    this->bPlayDeathAct = false;
    this->fEvaluationHP = 0.00f;
    this->fUnitResistStatus = 0.00f;
    this->fUnitResistBuffDebuff = 0.00f;
    this->iUnitLevel = 0;
    this->fMoveForce = 0.00f;
    this->fJumpForceUp = 0.00f;
    this->fJumpForceDown = 0.00f;
    this->fMaxTacticalPoint = 0.00f;
    this->fGainTacticalPoint = 0.00f;
    this->fUnitSpeed = 0.00f;
    this->fMaxHitPoint = 0.00f;
    this->fStrength = 0.00f;
    this->fIntelligence = 0.00f;
    this->fDefence = 0.00f;
    this->fMagicDefence = 0.00f;
    this->fDexterity = 0.00f;
    this->fAgility = 0.00f;
    this->fLuck = 0.00f;
}

