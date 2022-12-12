#include "LuaFunctionLibrary.h"

class AActor;
class UDebugMenuResource;

void ULuaFunctionLibrary::SetSystemVariableByInteger(TEnumAsByte<ELuaSysInfo> sysInfo, int32 Value) {
}

void ULuaFunctionLibrary::SetSystemGlobalVariableByInteger(TEnumAsByte<ELuaSysGlobal> sysGlobalInfo, int32 Value) {
}

void ULuaFunctionLibrary::SetStandByCommandToLua() {
}

void ULuaFunctionLibrary::SetMessageCommandToLua(const FString& MessageCommand) {
}

void ULuaFunctionLibrary::SetMessageActionCommandToLua(const FString& TagName, const FString& Argment) {
}

void ULuaFunctionLibrary::SetMapTimeWithDay(int32 Day, int32 hour, int32 Min, int32 Sec) {
}

void ULuaFunctionLibrary::SetMapTime(int32 hour, int32 Min, int32 Sec) {
}

void ULuaFunctionLibrary::SetLuaLevelScript(const FString& LevelName, const FString& ScriptName) {
}

void ULuaFunctionLibrary::SetBattleOrderCommandToLua() {
}

void ULuaFunctionLibrary::ScenarioInitialize() {
}

FString ULuaFunctionLibrary::OutputLuaFile(const FString& dir, const FString& fname, const FString& outputText) {
    return TEXT("");
}

void ULuaFunctionLibrary::MapTimeAnimation(float mapSec, float _animSpeed) {
}

UDebugMenuResource* ULuaFunctionLibrary::LoadTextResource(const FString& dir, const FString& fname, const FString& outputText) {
    return NULL;
}

int32 ULuaFunctionLibrary::GetSystemVariableByInteger(TEnumAsByte<ELuaSysInfo> sysInfo) {
    return 0;
}

int32 ULuaFunctionLibrary::GetSystemGlobalVariableByInteger(TEnumAsByte<ELuaSysGlobal> sysGlobalInfo) {
    return 0;
}

int32 ULuaFunctionLibrary::GetMapSec() {
    return 0;
}

int32 ULuaFunctionLibrary::GetMapMin() {
    return 0;
}

float ULuaFunctionLibrary::GetMapMaterialTime() {
    return 0.0f;
}

int32 ULuaFunctionLibrary::GetMapHour() {
    return 0;
}

ENeweraInputMode ULuaFunctionLibrary::GetActionInputMode() {
    return ENeweraInputMode::GameUI;
}

FString ULuaFunctionLibrary::FindLuaLevelScript(const FString& LevelName, bool& bExist) {
    return TEXT("");
}

void ULuaFunctionLibrary::EndAction(const AActor* Actor, FName tagKey) {
}

void ULuaFunctionLibrary::DebugChangeActorVisibility() {
}

void ULuaFunctionLibrary::DebugAllEventPlay(const FString& StartTitle) {
}

bool ULuaFunctionLibrary::CheckMapHourRange(int32 StartDay, int32 StartHour, int32 EndDay, int32 EndHour) {
    return false;
}

void ULuaFunctionLibrary::BP_SetSystemFlagByName(FName flagName, bool flag) {
}

void ULuaFunctionLibrary::BP_SetSystemFlag(int32 flagNo, bool flag) {
}

bool ULuaFunctionLibrary::BP_GetSystemFlagByName(FName flagName) {
    return false;
}

bool ULuaFunctionLibrary::BP_GetSystemFlag(int32 flagNo) {
    return false;
}

ULuaFunctionLibrary::ULuaFunctionLibrary() {
}

