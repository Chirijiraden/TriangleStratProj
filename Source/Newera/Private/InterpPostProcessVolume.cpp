#include "InterpPostProcessVolume.h"

void AInterpPostProcessVolume::SetSituation(EBattleSequenceSituationId _situation) {
}

void AInterpPostProcessVolume::SetEventAction(EBattleSequenceEventAction _eventAction) {
}

void AInterpPostProcessVolume::EndInterp() {
}

void AInterpPostProcessVolume::BeginInterp() {
}

AInterpPostProcessVolume::AInterpPostProcessVolume() {
    this->CurveTable = NULL;
    this->situation = EBattleSequenceSituationId::NONE;
    this->eventAction = EBattleSequenceEventAction::Alwasy;
    this->changeTime = 1.00f;
    this->CurveScale = 1.00f;
}

