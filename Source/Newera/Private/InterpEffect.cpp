#include "InterpEffect.h"

void AInterpEffect::SetTargetType(EBattleSequenceTargetType _targetType) {
}

void AInterpEffect::SetSocketDirection(EEffectSocketDirection _socketDirection) {
}

void AInterpEffect::SetSlideMoveType(ESlideMoveType _slideMoveType) {
}

void AInterpEffect::SetSituation(EBattleSequenceSituationId _situation) {
}

void AInterpEffect::SetEventAction(EBattleSequenceEventAction _eventAction) {
}

void AInterpEffect::EndInterp() {
}

void AInterpEffect::BeginInterp() {
}

AInterpEffect::AInterpEffect() {
    this->situation = EBattleSequenceSituationId::NONE;
    this->eventAction = EBattleSequenceEventAction::Alwasy;
    this->targetType = EBattleSequenceTargetType::ATTACKER;
    this->Scale = 1.00f;
    this->opacityTime = 0.00f;
    this->slideMoveType = ESlideMoveType::STANDARD;
    this->forwardScale = 0.00f;
    this->upScale = 0.00f;
    this->rightScale = 0.00f;
    this->forwardTime = 0.00f;
    this->upTime = 0.00f;
    this->rightTime = 0.00f;
    this->socketDirection = EEffectSocketDirection::SOCKET;
    this->forwardCurve = NULL;
    this->upCurve = NULL;
    this->rightCurve = NULL;
}

