#pragma once
#include "CoreMinimal.h"
#include "NeweraDataAssetBase.h"
#include "NeweraDataAssetHUD.generated.h"

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
class UBattle_Log;
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
class UCommon_AutoSave;
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
class UDemo_ThanksDialog;
class UDemo_End_ThanksPlaying;
class UDemo_End_Staff;
class ADebugScreenShot;
class UDebugEventName;
class UCommon_Serif_Baloon;
class UCommon_MapName;
class UEventPict;
class UFadingWidget;
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
class UMainMenu_Shop_Dialog;
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
class UNeweraFloatUIManager;
class UResearch_Notice_Unlock;
class UResearch_Memo;
class UResearch_Caption;
class UNeweraWorldMap_Narration;
class UTitle_Movie;
class UTitle_Main;
class UTitle_Logo_Main;
class UTitle_Difficulty;
class UStaffRoll_Parts_Text;
class UStaffRoll_Parts_Movie;
class UStaffRoll_Parts_Image;
class UStaffRoll_Main;
class UVote_Title;
class UVote_Select;
class UVote_Persuade_Dialog;
class UVote_Opinion;
class UVote_Item;

UCLASS(Blueprintable)
class NEWERA_API UNeweraDataAssetHUD : public UNeweraDataAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFadingWidget> WidgetClassFadingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_AutoSave> WidgetClassCommonAutoSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Dialog_00> WidgetClassCommonDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Dialog_Choice> WidgetClassCommonDialogChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Dialog_Choice_3Pat> WidgetClassCommonDialogChoice3Pat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTitle_Difficulty> WidgetClassTitleDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_BtnGuide> WidgetClassCommonBtnGuide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_BtnGuide_Off> WidgetClassCommonBtnGuide_Off;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Description> WidgetClassDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Epilogue_Title> WidgetClassEpilogueTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Background> WidgetClassCommonBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_Top> WidgetClassMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_Option_Main> WidgetClassMainMenuOptionMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_SaveLoad_Main> WidgetClassMainMenuSaveLoadMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_Tutorial_DetailWnd> WidgetClassMainMenuTutorialDetailWnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNeweraFloatUIManager> WidgetClassFloatUIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADebugScreenShot> ActorClassDebugScreenShot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDebugEventName> WidgetClassDebugEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Serif_Baloon> WidgetClassCommonSerif;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Choice> WidgetClassCommonChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_CharacterInfo> WidgetClassCommonCharacterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEventPict> WidgetClassEventPict;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Background_Blur> WidgetClassCommonBackground_Blur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_BackLog_Main> WidgetClassCommonBackLogMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Dialog_Join> WidgetClassCommonDialogJoin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Dialog_Item> WidgetClassCommonDialogItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_FaithUp> WidgetClassCommonFaithUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_End> WidgetClassCommonEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_PopUp_Dialog> WidgetClassBattlePopUpDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_UnitList_Main> WidgetClassMainMenuUnitListMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_UnitDetail_AccessoryList_Main> WidgetClassMainMenuUnitDetailAccessoryListMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_CharaPict> WidgetClassMainMenuCharaPict;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_UnitDetail> WidgetClassMainMenuUnitDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_UnitDetail_Episode_Main> WidgetClassMainMenuUnitDetailEpisodeMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_Inventory_Main> WidgetClassMainMenuInventoryMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_Tutorial_Main> WidgetClassMainMenuTutorialMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_Note_Main> WidgetClassMainMenuNoteMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_Information_Main> WidgetClassMainMenuInformationMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_StoryChart_Main> WidgetClassMainMenuStoryChartMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_Shop_Main> WidgetClassMainMenuShopMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_Shop_Dialog> WidgetClassMainMenuShopDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_Shop_Dialog01> WidgetClassMainMenuShopDialog01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_Accessory_EquipList> WidgetClassMainMenuAccessoryEquipList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHandyMan_ClassUp_Main> WidgetClassHandyManClassUpMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHandyMan_ClassUp_Effect> WidgetClassHandyManClassUpEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHandyMan_BlackSmith_Main> WidgetClassHandyManBlackSmithMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_Bar_Main> WidgetClassMainMenuBarMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMainMenu_Scout_Main> WidgetClassMainMenuScoutMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_MapName> WidgetClassResearchPlaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UResearch_Memo> WidgetClassResearchMemo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UResearch_Caption> WidgetClassResearchCaption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UResearch_Notice_Unlock> WidgetClassResearchNoticeUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UVote_Opinion> WidgetClassVoteOpinion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UVote_Persuade_Dialog> WidgetClassVotePersuadeDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UVote_Item> WidgetClassVoteItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UVote_Title> WidgetClassVoteTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UVote_Select> WidgetClassVoteSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_ATBar> WidgetClassBattleActionBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_CmdGuide_Main> WidgetClassBattleCmdGuideMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_Simulation> WidgetClassBattleSimulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_Main> WidgetClassBattle_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_Status_Target> WidgetClassStatus_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_Status_Target_S> WidgetClassStatus_Target_S;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBriefingTop> WidgetClassBriefingTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBriefingUnitDetail> WidgetClassBriefingUnitDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBriefingMapUnitMain> WidgetClassBriefingUBriefingMapUnitMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_BattleOrder_Main> WidgetClasseBattleOrderMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_MapName> WidgetClassBattleSceneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_Start> WidgetClassBattleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_Condition_Win> WidgetClassBattleVictoryConditionWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_Condition_Lose> WidgetClassBattleVictoryConditionLose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_Win> WidgetClassBattleVictory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_GameOver> WidgetClassBattleOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_OptionWin_00> WidgetClassBattleVictoryConditionsDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_OptionWin_00> WidgetClassBattleVictoryConditionsDetail2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_ActName> WidgetClassCharacterAbilityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_TurnCount> WidgetClassBattleTurnCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_Result_Main> WidgetClassBattleResultMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_Result_Exploit> WidgetClassBattleResultExploit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_Log> WidgetClassBattleLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UNeweraWorldMap_Narration> WidgetClassWorldMap_Narration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Main> WidgetClassStaffRollMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Parts_Text> WidgetClassStaffRollPartsText0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Parts_Text> WidgetClassStaffRollPartsTextH1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Parts_Text> WidgetClassStaffRollPartsTextH2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Parts_Text> WidgetClassStaffRollPartsTextH3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Parts_Image> WidgetClassStaffRollPartsImage0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Parts_Image> WidgetClassStaffRollPartsImage1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Parts_Image> WidgetClassStaffRollPartsImage2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Parts_Image> WidgetClassStaffRollPartsImage3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Parts_Movie> WidgetClassStaffRollPartsMovie0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Parts_Movie> WidgetClassStaffRollPartsMovie1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Parts_Movie> WidgetClassStaffRollPartsMovie2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Parts_Movie> WidgetClassStaffRollPartsMovie3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Parts_Movie> WidgetClassStaffRollPartsMovie4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UStaffRoll_Parts_Movie> WidgetClassStaffRollPartsMovie5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDemo_End_ThanksPlaying> WidgetClassDemoEndThanksPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDemo_End_Staff> WidgetClassDemoEndStaff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTitle_Logo_Main> WidgetClassTitleLogoMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTitle_Main> WidgetClassTitleMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTitle_Movie> WidgetClassTitleMovie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTitle_Movie> WidgetClassTitleMovieTrue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UDemo_ThanksDialog> WidgetClassDemoThanksDialog;
    
    UNeweraDataAssetHUD();
};

