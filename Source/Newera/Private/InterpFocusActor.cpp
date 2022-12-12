#include "InterpFocusActor.h"

void AInterpFocusActor::SetTargetType(EBattleSequenceTargetType _targetType) {
}

void AInterpFocusActor::SetSituation(EBattleSequenceSituationId _situation) {
}

void AInterpFocusActor::SetEventAction(EBattleSequenceEventAction _eventAction) {
}

void AInterpFocusActor::EndInterp() {
}

void AInterpFocusActor::BeginInterp() {
}

AInterpFocusActor::AInterpFocusActor() {
    this->situation = EBattleSequenceSituationId::NONE;
    this->eventAction = EBattleSequenceEventAction::Alwasy;
    this->targetType = EBattleSequenceTargetType::ATTACKER;
}

