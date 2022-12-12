#include "PathDamageConfig.h"

FPathDamageConfig::FPathDamageConfig() {
    this->BaseType = EAttackBaseType::PHYSICS;
    this->ElementType = EElementalType::NONE;
    this->DamageValueFixed = 0.00f;
    this->DamageRateOfMaxHP = 0.00f;
    this->MaxDamage = 0;
}

