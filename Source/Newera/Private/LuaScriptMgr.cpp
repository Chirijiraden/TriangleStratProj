#include "LuaScriptMgr.h"

class UDebugMenuInfoFlag;
class UDebugMenuFlag;

void ULuaScriptMgr::SetInfomation(int32 infomation_index, bool is_info) {
}

TArray<FName> ULuaScriptMgr::GetTriggerList() {
    return TArray<FName>();
}

bool ULuaScriptMgr::GetInfomation(int32 infomation_index) {
    return false;
}

TArray<UDebugMenuInfoFlag*> ULuaScriptMgr::GetInfoFlagList() {
    return TArray<UDebugMenuInfoFlag*>();
}

bool ULuaScriptMgr::GetInfoFlagAllOnState() {
    return false;
}

TArray<UDebugMenuFlag*> ULuaScriptMgr::GetFlagList() {
    return TArray<UDebugMenuFlag*>();
}

void ULuaScriptMgr::BP_RequestReoadLevelScript(const FName& szLuaFileName) {
}

void ULuaScriptMgr::BP_RequestReoadCurrentLevelScript() {
}

void ULuaScriptMgr::BP_RequestExecuteTrigger(FName TriggerName) {
}

void ULuaScriptMgr::BP_RequestExecuteEvent(FName mapName, FName luaFileName, FName luaEventName) {
}

void ULuaScriptMgr::BP_ReloadRequestExecuteEvent(bool bBaseScriptReload) {
}

bool ULuaScriptMgr::BP_ReloadBaseScript(const FName& BaseScriptName) {
    return false;
}

ULuaScriptMgr::ULuaScriptMgr() {
}

