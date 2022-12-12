#include "InterpFlashForHit.h"

void AInterpFlashForHit::SetSituation(EBattleSequenceSituationId _situation) {
}

void AInterpFlashForHit::SetEventAction(EBattleSequenceEventAction _eventAction) {
}

void AInterpFlashForHit::EndInterp() {
}

void AInterpFlashForHit::BeginInterp() {
}

AInterpFlashForHit::AInterpFlashForHit() {
    this->situation = EBattleSequenceSituationId::NONE;
    this->eventAction = EBattleSequenceEventAction::Alwasy;
    this->flashMaterialCollection = NULL;
    this->intensityCurveScaleHitOnly = 0.00f;
    this->intensityCurveTimeHitOnly = 0.00f;
    this->intensityCurveScaleCritical = 0.00f;
    this->intensityCurveTimeCritical = 0.00f;
    this->intensityCurveScaleSpecific = 0.00f;
    this->intensityCurveTimeSpecific = 0.00f;
    this->intensityCurveScaleCriticalAndSpecific = 0.00f;
    this->intensityCurveTimeCriticalAndSpecific = 0.00f;
    this->CurveTable = NULL;
}

