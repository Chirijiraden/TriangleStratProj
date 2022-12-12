#include "NeweraGameStateBattle.h"

class UDropItemManagerBattle;
class ULadderManager;
class UTurretManager;
class UTrapManager;

UTurretManager* ANeweraGameStateBattle::GetTurretManager() const {
    return NULL;
}

UTrapManager* ANeweraGameStateBattle::GetTrapManager() const {
    return NULL;
}

ULadderManager* ANeweraGameStateBattle::GetLadderManager() const {
    return NULL;
}

UDropItemManagerBattle* ANeweraGameStateBattle::GetDropItemManagerBattle() const {
    return NULL;
}

ANeweraGameStateBattle::ANeweraGameStateBattle() {
    this->cursorHitRecorder = NULL;
    this->BattleAIMan = NULL;
    this->BattleEventObserver = NULL;
    this->BattleTutorialTrigger = NULL;
    this->ExtraExploitEventObserver = NULL;
    this->BattleExperienceManager = NULL;
    this->DropItemManagerBattle = NULL;
    this->TrapManager = NULL;
    this->TurretManager = NULL;
    this->LadderManager = NULL;
    this->DeferredSpawnActorManager = NULL;
    this->AbilityTimeManager = NULL;
    this->FlowManager = NULL;
    this->KnockBackManager = NULL;
    this->EvaluationInfoManager = NULL;
}

