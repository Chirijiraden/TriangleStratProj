#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "NeweraFloatUIManager.generated.h"

class UBattle_AttackBonus;
class UBattle_HPGauge_S;
class UBattle_PopUp_Exp;
class UBattle_PopUp_Effect;
class UBattle_PopUp_Debuff;
class UBattle_PopUp_Buff;
class UBattle_Resist;
class UBattle_Pursuit;
class UBattle_PopUp_Up;
class UBattle_PopUp_Normal;
class UBattle_PopUp_Gauge_S;
class UBattle_WeakPoint;
class UCommon_Emotion_Notice;
class UResearch_MerchantIcon;
class UResearch_MapTransition;
class UResearch_EventIcon;
class UResearch_CheckCommand;
class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UNeweraFloatUIManager : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Emotion_Notice> WidgetClassEmotionNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Emotion_Notice> WidgetClassEmotionQuestion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Emotion_Notice> WidgetClassEmotionSweat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Emotion_Notice> WidgetClassEmotionLively;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Emotion_Notice> WidgetClassEmotionSilence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommon_Emotion_Notice> WidgetClassEmotionShock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UResearch_EventIcon> WidgetClassEventIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UResearch_MerchantIcon> WidgetClassMerchantIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_PopUp_Effect> WidgetClassPopUp_Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_PopUp_Buff> WidgetClassPopUp_Buff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_PopUp_Debuff> WidgetClassPopUp_Debuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_PopUp_Up> WidgetClassPopUp_Up;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_PopUp_Exp> WidgetClassPopUp_Exp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_PopUp_Normal> WidgetClassPopUp_Nomal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_PopUp_Gauge_S> WidgetClassPopUp_Gauge_S;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_HPGauge_S> WidgetClassBattleHPGauge_S;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_Pursuit> WidgetClassBattlePursuit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_AttackBonus> WidgetClassBattleAttackBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_WeakPoint> WidgetClassBattleWeakPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattle_Resist> WidgetClassBattleResist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* canvasPanelRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UResearch_CheckCommand* reserchCheckCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UResearch_MapTransition* reserchMapTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBattle_HPGauge_S*> BattleHpGaugeInstanceList;
    
    UNeweraFloatUIManager();
};

