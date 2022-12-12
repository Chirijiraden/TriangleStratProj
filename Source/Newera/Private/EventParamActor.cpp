#include "EventParamActor.h"

void AEventParamActor::SetSituation(EBattleSequenceSituationId _situation) {
}

void AEventParamActor::SetEventAction(EBattleSequenceEventAction _eventAction) {
}

void AEventParamActor::EventTrigger() {
}

AEventParamActor::AEventParamActor() {
    this->situation = EBattleSequenceSituationId::NONE;
    this->eventAction = EBattleSequenceEventAction::Alwasy;
    this->eventImmediate = false;
}

