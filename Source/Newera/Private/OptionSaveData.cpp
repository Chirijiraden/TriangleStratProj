#include "OptionSaveData.h"

FOptionSaveData::FOptionSaveData() {
    this->reverseCameraH = false;
    this->reverseCameraV = false;
    this->cameraSpeedRateH = 0.00f;
    this->cameraSpeedRateV = 0.00f;
    this->textSpeedRate = 0.00f;
    this->battleSequencerPlaySpeed = 0.00f;
    this->battleUnitMoveSpeedRate = 0.00f;
    this->enablePickUpTarget = false;
    this->NeweraLanguageText = ENeweraLanguage::JP;
    this->NeweraLanguageVoice = ENeweraLanguageVoice::JP;
    this->soundVolumeRateMaster = 0.00f;
    this->soundVolumeRateBGM = 0.00f;
    this->soundVolumeRateSE = 0.00f;
    this->soundVolumeRateVoice = 0.00f;
    this->FastForwardRateOnResearch = 0.00f;
    this->FastForwardRateOnBattle = 0.00f;
    this->FastForwardRateOnEvent = 0.00f;
    this->battleCursorMoveRate = 0.00f;
    this->enableForceFeedback = false;
    this->postProcessGammaRate = 0.00f;
    this->postProcessGainRate = 0.00f;
    this->battleAutoSave = false;
    this->gameDifficulty = EGameDifficulty::NORMAL;
    this->enableCameraQuickMove = false;
    this->enableStageCameraAutoMove = false;
    this->enableRestoreCommandCursorPosition = false;
    this->enableInputStanbyRotationInSafetyZone = false;
    this->enableFieldEffectGuide = false;
    this->reverseBattleSequencerPlaySpeed = false;
    this->postProcessEdgeBurnWeight = 0.00f;
    this->enableCameraEffectDOF = false;
    this->enableSkipUnitRotate = false;
    this->battleCursorPadDirMode = EBattleCursorPadDirMode::NONE;
    this->battleAlwaysFastForward = false;
    this->enableStandbyCamera = false;
    this->quickCameraRotation = false;
    this->textDisplaySpeed = ENeweraTextDisplaySpeed::NORMAL;
    this->enablePostProcessEdgeBurn = false;
    this->mouseDragToCameraRotationRateH = 0.00f;
    this->mouseDragToCameraRotationRateV = 0.00f;
}

