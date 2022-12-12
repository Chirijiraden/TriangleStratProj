#pragma once
#include "CoreMinimal.h"
#include "LuaScriptMgrBase.h"
#include "LuaScriptMgr.generated.h"

class UDebugMenuInfoFlag;
class UDebugMenuFlag;

UCLASS(Blueprintable)
class NEWERA_API ULuaScriptMgr : public ULuaScriptMgrBase {
    GENERATED_BODY()
public:
    ULuaScriptMgr();
    UFUNCTION(BlueprintCallable)
    static void SetInfomation(int32 infomation_index, bool is_info);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetTriggerList();
    
    UFUNCTION(BlueprintCallable)
    static bool GetInfomation(int32 infomation_index);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UDebugMenuInfoFlag*> GetInfoFlagList();
    
    UFUNCTION(BlueprintCallable)
    static bool GetInfoFlagAllOnState();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UDebugMenuFlag*> GetFlagList();
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestReoadLevelScript(const FName& szLuaFileName);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestReoadCurrentLevelScript();
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestExecuteTrigger(FName TriggerName);
    
    UFUNCTION(BlueprintCallable)
    static void BP_RequestExecuteEvent(FName mapName, FName luaFileName, FName luaEventName);
    
    UFUNCTION(BlueprintCallable)
    static void BP_ReloadRequestExecuteEvent(bool bBaseScriptReload);
    
    UFUNCTION(BlueprintCallable)
    bool BP_ReloadBaseScript(const FName& BaseScriptName);
    
};

