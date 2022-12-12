#pragma once
#include "CoreMinimal.h"
#include "BattleFlowStateReceiverInterface.h"
#include "BattleCursorStateReceiverInterface.h"
#include "NeweraHUDBase.h"
#include "Layout/Margin.h"
#include "Newera_Serif_Instance.h"
#include "FreeWidgetCharacterSerifUI.h"
#include "NeweraHUDManager.generated.h"

class UBattle_ATBar;
class UBattle_ActName;
class UBattle_Start;
class UBattle_GameOver;
class UBattle_Condition_Win;
class UBattle_Condition_Lose;
class UBattle_CmdGuide_Main;
class UBattle_BattleOrder_Main;
class UBattle_PopUp_Dialog;
class UBattle_OptionWin_00;
class UBattle_MapName;
class UBattle_Main;
class UBattle_Status_Target;
class UBattle_Simulation;
class UBattle_Result_Main;
class UBattle_Result_Exploit;
class UBattle_Win;
class UBattle_TurnCount;
class UBattle_Status_Target_S;
class UCommon_Choice;
class UCommon_CharacterInfo;
class UCommon_BtnGuide_Off;
class UCommon_BtnGuide;
class UCommon_BackLog_Main;
class UCommon_Background_Blur;
class UCommon_Background;
class UBriefingUnitDetail;
class UBriefingTop;
class UBriefingMapUnitMain;
class UCommon_FaithUp;
class UCommon_Epilogue_Title;
class UCommon_End;
class UCommon_Dialog_Join;
class UCommon_Dialog_Item;
class UCommon_Dialog_Choice_3Pat;
class UCommon_Dialog_Choice;
class UCommon_Dialog_00;
class UCommon_Description;
class ADebugScreenShot;
class UDebugEventName;
class UCommon_MapName;
class UEventPict;
class UHandyMan_ClassUp_Main;
class UHandyMan_ClassUp_Effect;
class UHandyMan_BlackSmith_Main;
class UMainMenu_CharaPict;
class UMainMenu_Bar_Main;
class UMainMenu_Accessory_EquipList;
class UMainMenu_Inventory_Main;
class UMainMenu_Information_Main;
class UMainMenu_Shop_Main;
class UMainMenu_Shop_Dialog01;
class UMainMenu_Scout_Main;
class UMainMenu_SaveLoad_Main;
class UMainMenu_Option_Main;
class UMainMenu_Note_Main;
class UMainMenu_StoryChart_Main;
class UMainMenu_UnitDetail;
class UMainMenu_Tutorial_Main;
class UMainMenu_Tutorial_DetailWnd;
class UMainMenu_Top;
class UMainMenu_UnitDetail_Episode_Main;
class UMainMenu_UnitDetail_AccessoryList_Main;
class UMainMenu_UnitList_Main;
class ANeweraBattleMoviePlayer;
class UNeweraFloatUIManager;
class ANeweraHandyManMoviePlayer;
class UResearch_Notice_Unlock;
class UResearch_Memo;
class UResearch_Caption;
class UNeweraWorldMap_Narration;
class UTitle_Difficulty;
class UVote_Title;
class UVote_Select;
class UVote_Persuade_Dialog;
class UVote_Opinion;
class UVote_Item;

UCLASS(Blueprintable, NonTransient)
class NEWERA_API ANeweraHUDManager : public ANeweraHUDBase, public IBattleFlowStateReceiverInterface, public IBattleCursorStateReceiverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TalkWindowSafeArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ANeweraBattleMoviePlayer> ActorClassNeweraBattleMoviePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ANeweraBattleMoviePlayer> ActorClassNeweraBattleMoviePlayerWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ANeweraBattleMoviePlayer> ActorClassNeweraBattleMoviePlayerLose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ANeweraHandyManMoviePlayer> ActorClassNeweraHandyManMoviePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADebugScreenShot> ActorClassDebugScreenShot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNeweraFloatUIManager* widgetFloatUIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_Description* widgetDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_Epilogue_Title* widgetEpilogueTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_Dialog_00* widgetCommonDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_Dialog_Join* widgetCommonDialogJoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_Dialog_Choice* widgetCommonDialogChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_Dialog_Choice_3Pat* widgetCommonDialogChoice3Pat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_Dialog_Item* widgetCommonDialogItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTitle_Difficulty* widgetTitleDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_FaithUp* widgetCommonFaithUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_CmdGuide_Main* widgetBattleCmdGuideMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_Simulation* widgetBattleSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_BtnGuide* widgetCommonBtnGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_BtnGuide_Off* widgetCommonBtnGuide_Off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_Background* widgetCommonBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_Background_Blur* widgetCommonBackground_Blur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_End* widgetCommonEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_PopUp_Dialog* widgetBattlePopUpDialog;
    
    UPROPERTY(EditAnywhere, Transient)
    FNewera_Serif_Instance SerifInstance[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_Choice* widgetCommonChoice;
    
    UPROPERTY(EditAnywhere, Transient)
    FFreeWidgetCharacterSerifUI FreeSerifUIWdgetList[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_CharacterInfo* widgetCommonCharacterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_BackLog_Main* widgetCommonBackLogMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_Top* widgetMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_CharaPict* widgetMainMenuCharaPict;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_UnitDetail* widgetMainMenuUnitDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_UnitDetail_Episode_Main* widgetMainMenuUnitDetailEpisodeMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_UnitList_Main* widgetMainMenuUnitListMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_UnitDetail_AccessoryList_Main* WidgetMainMenuUnitDetailAccessoryListMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_Inventory_Main* WidgetMainMenuInventoryMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_Shop_Main* WidgetMainMenuShopMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_Shop_Dialog01* WidgetMainMenuShopDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_Accessory_EquipList* WidgetMainMenuAccessoryEquipList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_Tutorial_Main* WidgetMainMenuTutorialMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_Note_Main* WidgetMainMenuNoteMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_Information_Main* WidgetMainMenuInformationMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHandyMan_ClassUp_Main* WidgetHandyManClassUpMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHandyMan_ClassUp_Effect* WidgetHandyManClassUpEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHandyMan_BlackSmith_Main* WidgetHandyManBlackSmithMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_Bar_Main* WidgetMainMenuBarMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_Scout_Main* WidgetMainMenuScoutMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_Option_Main* WidgetMainMenuOptionMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_SaveLoad_Main* WidgetMainMenuSaveLoadMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_Tutorial_DetailWnd* WidgetMainMenuTutorialDetailWnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMainMenu_StoryChart_Main* WidgetMainMenuStoryChartMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBriefingTop* widgetBriefingTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBriefingUnitDetail* widgetBriefingUnitDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBriefingMapUnitMain* widgetBriefingMapUnitMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_BattleOrder_Main* WidgetBattleOrderMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_ATBar* widgetBattleActionBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_MapName* WidgetBattleSceneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_Start* WidgetBattleBattleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_Condition_Win* WidgetBattleVictoryConditionWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_Condition_Lose* WidgetBattleVictoryConditionLose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_Win* WidgetBattleVictory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_GameOver* WidgetBattleOver;
    
    UPROPERTY(EditAnywhere, Instanced, Transient)
    UBattle_OptionWin_00* widgetBattleVictoryConditionsDetail[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_ActName* WidgetCharacterAbilityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_TurnCount* WidgetBattleTurnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_Main* WidgetBattle_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_Status_Target* WidgetBattleStatusTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_Status_Target_S* WidgetBattleStatusTargetS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_Result_Main* WidgetBattleResultMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattle_Result_Exploit* WidgetBattleResultExploit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UResearch_Memo* WidgetResearchMemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UResearch_Caption* WidgetResearchCaption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCommon_MapName* WidgetCommonMapName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNeweraWorldMap_Narration* WidgetWorldMap_Narration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVote_Opinion* WidgetVoteOpinion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVote_Persuade_Dialog* WidgetVotePersuadeDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVote_Item* WidgetVoteItemDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVote_Title* WidgetVoteTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVote_Select* WidgetVoteSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UResearch_Notice_Unlock* WidgetResearchNoticeUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEventPict* WidgetEventPict;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDebugEventName* WidgetDebugEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANeweraBattleMoviePlayer* NeweraBattleMoviePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANeweraBattleMoviePlayer* NeweraBattleMoviePlayerWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANeweraBattleMoviePlayer* NeweraBattleMoviePlayerLose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANeweraHandyManMoviePlayer* NeweraHandyManMoviePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADebugScreenShot* ActorDebugScreenShot;
    
public:
    ANeweraHUDManager();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ADebugScreenShot* GetDebugScreenShot();
    
    
    // Fix for true pure virtual functions not being implemented
};

