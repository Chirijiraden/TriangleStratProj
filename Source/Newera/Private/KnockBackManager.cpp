#include "KnockBackManager.h"

UKnockBackManager::UKnockBackManager() {
    this->SpeedSlideMove = 0.10f;
    this->DurationSecSimpleKnockBack = 0.00f;
    this->DurationSecFallPreHit = 0.00f;
    this->DurationSecFallPostHit = 0.00f;
    this->DurationSecFallFlyingPreFallKeep = 0.00f;
    this->DurationSecPreHit = 0.00f;
    this->DurationSecPostHit = 0.00f;
    this->isExploitFallingDamage = false;
    this->isExploitImpactDamage = false;
}

