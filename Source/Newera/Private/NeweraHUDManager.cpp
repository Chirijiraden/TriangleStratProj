#include "NeweraHUDManager.h"

class ADebugScreenShot;

ADebugScreenShot* ANeweraHUDManager::GetDebugScreenShot() {
    return NULL;
}

ANeweraHUDManager::ANeweraHUDManager() {
    this->widgetFloatUIManager = NULL;
    this->widgetDescription = NULL;
    this->widgetEpilogueTitle = NULL;
    this->widgetCommonDialog = NULL;
    this->widgetCommonDialogJoin = NULL;
    this->widgetCommonDialogChoice = NULL;
    this->widgetCommonDialogChoice3Pat = NULL;
    this->widgetCommonDialogItem = NULL;
    this->widgetTitleDifficulty = NULL;
    this->widgetCommonFaithUp = NULL;
    this->widgetBattleCmdGuideMain = NULL;
    this->widgetBattleSimulation = NULL;
    this->widgetCommonBtnGuide = NULL;
    this->widgetCommonBtnGuide_Off = NULL;
    this->widgetCommonBackground = NULL;
    this->widgetCommonBackground_Blur = NULL;
    this->widgetCommonEnd = NULL;
    this->widgetBattlePopUpDialog = NULL;
    this->widgetCommonChoice = NULL;
    this->widgetCommonCharacterInfo = NULL;
    this->widgetCommonBackLogMain = NULL;
    this->widgetMainMenu = NULL;
    this->widgetMainMenuCharaPict = NULL;
    this->widgetMainMenuUnitDetail = NULL;
    this->widgetMainMenuUnitDetailEpisodeMain = NULL;
    this->widgetMainMenuUnitListMain = NULL;
    this->WidgetMainMenuUnitDetailAccessoryListMain = NULL;
    this->WidgetMainMenuInventoryMain = NULL;
    this->WidgetMainMenuShopMain = NULL;
    this->WidgetMainMenuShopDialog = NULL;
    this->WidgetMainMenuAccessoryEquipList = NULL;
    this->WidgetMainMenuTutorialMain = NULL;
    this->WidgetMainMenuNoteMain = NULL;
    this->WidgetMainMenuInformationMain = NULL;
    this->WidgetHandyManClassUpMain = NULL;
    this->WidgetHandyManClassUpEffect = NULL;
    this->WidgetHandyManBlackSmithMain = NULL;
    this->WidgetMainMenuBarMain = NULL;
    this->WidgetMainMenuScoutMain = NULL;
    this->WidgetMainMenuOptionMain = NULL;
    this->WidgetMainMenuSaveLoadMain = NULL;
    this->WidgetMainMenuTutorialDetailWnd = NULL;
    this->WidgetMainMenuStoryChartMain = NULL;
    this->widgetBriefingTop = NULL;
    this->widgetBriefingUnitDetail = NULL;
    this->widgetBriefingMapUnitMain = NULL;
    this->WidgetBattleOrderMain = NULL;
    this->widgetBattleActionBar = NULL;
    this->WidgetBattleSceneName = NULL;
    this->WidgetBattleBattleStart = NULL;
    this->WidgetBattleVictoryConditionWin = NULL;
    this->WidgetBattleVictoryConditionLose = NULL;
    this->WidgetBattleVictory = NULL;
    this->WidgetBattleOver = NULL;
    this->widgetBattleVictoryConditionsDetail[0] = NULL;
    this->widgetBattleVictoryConditionsDetail[1] = NULL;
    this->WidgetCharacterAbilityName = NULL;
    this->WidgetBattleTurnCount = NULL;
    this->WidgetBattle_Main = NULL;
    this->WidgetBattleStatusTarget = NULL;
    this->WidgetBattleStatusTargetS = NULL;
    this->WidgetBattleResultMain = NULL;
    this->WidgetBattleResultExploit = NULL;
    this->WidgetResearchMemo = NULL;
    this->WidgetResearchCaption = NULL;
    this->WidgetCommonMapName = NULL;
    this->WidgetWorldMap_Narration = NULL;
    this->WidgetVoteOpinion = NULL;
    this->WidgetVotePersuadeDialog = NULL;
    this->WidgetVoteItemDialog = NULL;
    this->WidgetVoteTitle = NULL;
    this->WidgetVoteSelect = NULL;
    this->WidgetResearchNoticeUnlock = NULL;
    this->WidgetEventPict = NULL;
    this->WidgetDebugEventName = NULL;
    this->NeweraBattleMoviePlayer = NULL;
    this->NeweraBattleMoviePlayerWin = NULL;
    this->NeweraBattleMoviePlayerLose = NULL;
    this->NeweraHandyManMoviePlayer = NULL;
    this->ActorDebugScreenShot = NULL;
}

