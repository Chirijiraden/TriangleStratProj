#include "InterpUnitEffectInvisible.h"

void AInterpUnitEffectInvisible::SetTargetType(EBattleSequenceTargetType _targetType) {
}

void AInterpUnitEffectInvisible::SetSituation(EBattleSequenceSituationId _situation) {
}

void AInterpUnitEffectInvisible::SetEventAction(EBattleSequenceEventAction _eventAction) {
}

void AInterpUnitEffectInvisible::EndInterp() {
}

void AInterpUnitEffectInvisible::BeginInterp() {
}

AInterpUnitEffectInvisible::AInterpUnitEffectInvisible() {
    this->situation = EBattleSequenceSituationId::NONE;
    this->eventAction = EBattleSequenceEventAction::Alwasy;
    this->targetType = EBattleSequenceTargetType::ATTACKER;
    this->enableInvisible = false;
}

