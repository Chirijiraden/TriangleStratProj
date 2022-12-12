#include "InterpSpriteRotation.h"

void AInterpSpriteRotation::SetTargetType(EBattleSequenceTargetType _targetType) {
}

void AInterpSpriteRotation::SetSituation(EBattleSequenceSituationId _situation) {
}

void AInterpSpriteRotation::SetEventAction(EBattleSequenceEventAction _eventAction) {
}

void AInterpSpriteRotation::EndInterp() {
}

void AInterpSpriteRotation::BeginInterp() {
}

AInterpSpriteRotation::AInterpSpriteRotation() {
    this->CurveTable = NULL;
    this->situation = EBattleSequenceSituationId::NONE;
    this->eventAction = EBattleSequenceEventAction::Alwasy;
    this->targetType = EBattleSequenceTargetType::ATTACKER;
    this->rotationTime = 0.00f;
}

