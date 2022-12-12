#include "NeweraGameStateBase.h"
#include "ForceFeedbackEffectMan.h"
#include "MapTimeManager.h"
#include "MapCellEffectManager.h"
#include "MapActionObjectManager.h"
#include "NeweraAreaSearchManager.h"
#include "NeweraPostProcessMgr.h"
#include "WeatherManager.h"

class ANeweraPlayerControllerBase;

bool ANeweraGameStateBase::IsEnvironmentSkySphereEnable() const {
    return false;
}

bool ANeweraGameStateBase::IsEnvironmentSkyLightEnable() const {
    return false;
}

bool ANeweraGameStateBase::IsEnvironmentLightEnable() const {
    return false;
}

bool ANeweraGameStateBase::IsEnvironmentDirectionalLightEnable() const {
    return false;
}

UWeatherManager* ANeweraGameStateBase::GetWeatherManager() const {
    return NULL;
}

UNeweraPostProcessMgr* ANeweraGameStateBase::GetPostProcessManager() const {
    return NULL;
}

ANeweraPlayerControllerBase* ANeweraGameStateBase::GetPlayerController() const {
    return NULL;
}

UMapTimeManager* ANeweraGameStateBase::GetMapTimeManager() const {
    return NULL;
}

UMapCellEffectManager* ANeweraGameStateBase::GetMapCellEffectManager() const {
    return NULL;
}

UMapActionObjectManager* ANeweraGameStateBase::GetMapActionObjectManager() const {
    return NULL;
}

ANeweraGameStateBase::ANeweraGameStateBase() {
    this->FrameGrabberActor = NULL;
    this->PostProcessManager = CreateDefaultSubobject<UNeweraPostProcessMgr>(TEXT("PostProcessManager"));
    this->MapTimeManager = CreateDefaultSubobject<UMapTimeManager>(TEXT("MapTimeManager"));
    this->WeatherManager = CreateDefaultSubobject<UWeatherManager>(TEXT("WeatherManager"));
    this->MapCellEffectManager = CreateDefaultSubobject<UMapCellEffectManager>(TEXT("CellEffectManager"));
    this->MapActionObjectManager = CreateDefaultSubobject<UMapActionObjectManager>(TEXT("ActionObjectManager"));
    this->ForceFeedbackEffectMan = CreateDefaultSubobject<UForceFeedbackEffectMan>(TEXT("ForceFeedbackEffectMan"));
    this->NeweraFastForwardManager = NULL;
    this->AreaSearchManager = CreateDefaultSubobject<UNeweraAreaSearchManager>(TEXT("AreaSearchManager"));
}

