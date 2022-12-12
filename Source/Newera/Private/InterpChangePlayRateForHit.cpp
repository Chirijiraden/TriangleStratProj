#include "InterpChangePlayRateForHit.h"

void AInterpChangePlayRateForHit::SetSituation(EBattleSequenceSituationId _situation) {
}

void AInterpChangePlayRateForHit::SetEventAction(EBattleSequenceEventAction _eventAction) {
}

void AInterpChangePlayRateForHit::EndInterp() {
}

void AInterpChangePlayRateForHit::BeginInterp() {
}

AInterpChangePlayRateForHit::AInterpChangePlayRateForHit() {
    this->situation = EBattleSequenceSituationId::NONE;
    this->eventAction = EBattleSequenceEventAction::Alwasy;
    this->playRateCurveScaleHitOnly = 0.00f;
    this->playRateCurveTimeHitOnly = 0.00f;
    this->playRateCurveScaleCritical = 0.00f;
    this->playRateCurveTimeCritical = 0.00f;
    this->playRateCurveScaleSpecific = 0.00f;
    this->playRateCurveTimeSpecific = 0.00f;
    this->playRateCurveScaleCriticalAndSpecific = 0.00f;
    this->playRateCurveTimeCriticalAndSpecific = 0.00f;
    this->CurveTable = NULL;
}

