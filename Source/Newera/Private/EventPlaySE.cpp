#include "EventPlaySE.h"

void AEventPlaySE::SetPlaySETarget(EBattleSequencePlaySETarget _playSETarget) {
}

void AEventPlaySE::SetGetGopId(EBattleSequenceGetGopId _getGopId) {
}

AEventPlaySE::AEventPlaySE() {
    this->getGopId = EBattleSequenceGetGopId::EVENT_PARAM;
    this->playSETarget = EBattleSequencePlaySETarget::PLAY_2D;
}

