#include "InterpPostProcessVolumeForHit.h"

void AInterpPostProcessVolumeForHit::SetSituation(EBattleSequenceSituationId _situation) {
}

void AInterpPostProcessVolumeForHit::SetEventAction(EBattleSequenceEventAction _eventAction) {
}

void AInterpPostProcessVolumeForHit::EndInterp() {
}

void AInterpPostProcessVolumeForHit::BeginInterp() {
}

AInterpPostProcessVolumeForHit::AInterpPostProcessVolumeForHit() {
    this->CurveTable = NULL;
    this->situation = EBattleSequenceSituationId::NONE;
    this->eventAction = EBattleSequenceEventAction::Alwasy;
    this->ChangeTimeHitOnly = 1.00f;
    this->CurveScaleHitOnly = 1.00f;
    this->ChangeTimeCritical = 1.00f;
    this->CurveScaleCritical = 1.00f;
    this->ChangeTimeSpecific = 1.00f;
    this->CurveScaleSpecific = 1.00f;
    this->ChangeTimeCriticalAndSpecific = 1.00f;
    this->CurveScaleCriticalAndSpecific = 1.00f;
}

