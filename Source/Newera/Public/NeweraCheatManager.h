#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "NeweraCheatManager.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UNeweraCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UNeweraCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void WriteSystemDataClearTrueEnd();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WriteSystemDataClearHard();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WriteAchievementValue(int32 Index, int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WriteAchievement(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleBattleUnitStatusEffect2(const FString& attackerUnitName, const FString& UnitName, const FName& StatusEffectName, bool permanent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleBattleUnitStatusEffect(const FString& UnitName, const FName& StatusEffectName, bool permanent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleBattleUnitBuffDebuff(const FString& UnitName, const FName& buffDebuffGopId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestDebugCell(int32 Type);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopAutoBattle();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartAutoBattle(int32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnUnit(const FName& ActorName, const FName& UnitMasterId, const FName& unitParamId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowPlayerParam();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLuaSystemValue(int32 valuePos, int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLuaSystemString(int32 valuePos, const FString& str);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAIUnitUsingAttackName(const FString& UnitName, const FName& attackId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetAchievement();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RankUpWeaponPlayerSide(const FName& playerUnitName, int32 rankUp);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PartyMemberOut(const FName masterUnitName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PartyMemberIn(const FName masterUnitName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PartyMemberAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void OpenAllShop(bool OpenFlag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockAchievement(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LevelUpPlayerSide(const FName& playerUnitName, int32 upLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HasBattleOrder(const FName& battleOrderGopId, bool hasOrder);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetScenarioAnchor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeWeaponLevelPlayerSide(const FName& playerUnitName, int32 Level);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangePlayerParam(const FName& Command, int32 changeValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeMaxPowerInParty();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeMaxPower(const FName& masterUnitName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeFaithValueTreshold(const FName& paramGopId, int32 NewValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeClassPlayerSide(const FName& playerUnitName, int32 rank, int32 select);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AttachAccessortyToUnitMaster(const FName& masterUnitName, int32 slotNo, const FName& accessoryGopId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddWeaponAbilityUnitMaster(const FName& masterUnitName, bool Special, const FName& AbilityGopId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddItem(const FName& itemGopId, int32 deltaCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddBattleUnitParamForTeam(int32 teamMask, const FName& ParamName, int32 additiveValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddBattleUnitParam(const FString& UnitName, const FName& ParamName, int32 additiveValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddAllItemByCategory(const FName& Category, int32 additiveCount);
    
};

