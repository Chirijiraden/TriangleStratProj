#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ELuaSysGlobal.h"
#include "ELuaSysInfo.h"
#include "ENeweraInputMode.h"
#include "LuaFunctionLibrary.generated.h"

class AActor;
class UDebugMenuResource;

UCLASS(Blueprintable)
class NEWERA_API ULuaFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuaFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetSystemVariableByInteger(TEnumAsByte<ELuaSysInfo> sysInfo, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetSystemGlobalVariableByInteger(TEnumAsByte<ELuaSysGlobal> sysGlobalInfo, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetStandByCommandToLua();
    
    UFUNCTION(BlueprintCallable)
    static void SetMessageCommandToLua(const FString& MessageCommand);
    
    UFUNCTION(BlueprintCallable)
    static void SetMessageActionCommandToLua(const FString& TagName, const FString& Argment);
    
    UFUNCTION(BlueprintCallable)
    static void SetMapTimeWithDay(int32 Day, int32 hour, int32 Min, int32 Sec);
    
    UFUNCTION(BlueprintCallable)
    static void SetMapTime(int32 hour, int32 Min, int32 Sec);
    
    UFUNCTION(BlueprintCallable)
    static void SetLuaLevelScript(const FString& LevelName, const FString& ScriptName);
    
    UFUNCTION(BlueprintCallable)
    static void SetBattleOrderCommandToLua();
    
    UFUNCTION(BlueprintCallable)
    static void ScenarioInitialize();
    
    UFUNCTION(BlueprintCallable)
    static FString OutputLuaFile(const FString& dir, const FString& fname, const FString& outputText);
    
    UFUNCTION(BlueprintCallable)
    static void MapTimeAnimation(float mapSec, float _animSpeed);
    
    UFUNCTION(BlueprintCallable)
    static UDebugMenuResource* LoadTextResource(const FString& dir, const FString& fname, const FString& outputText);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSystemVariableByInteger(TEnumAsByte<ELuaSysInfo> sysInfo);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSystemGlobalVariableByInteger(TEnumAsByte<ELuaSysGlobal> sysGlobalInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMapSec();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMapMin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetMapMaterialTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMapHour();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ENeweraInputMode GetActionInputMode();
    
    UFUNCTION(BlueprintCallable)
    static FString FindLuaLevelScript(const FString& LevelName, bool& bExist);
    
    UFUNCTION(BlueprintCallable)
    static void EndAction(const AActor* Actor, FName tagKey);
    
    UFUNCTION(BlueprintCallable)
    static void DebugChangeActorVisibility();
    
    UFUNCTION(BlueprintCallable)
    static void DebugAllEventPlay(const FString& StartTitle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CheckMapHourRange(int32 StartDay, int32 StartHour, int32 EndDay, int32 EndHour);
    
    UFUNCTION(BlueprintCallable)
    static void BP_SetSystemFlagByName(FName flagName, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void BP_SetSystemFlag(int32 flagNo, bool flag);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_GetSystemFlagByName(FName flagName);
    
    UFUNCTION(BlueprintCallable)
    static bool BP_GetSystemFlag(int32 flagNo);
    
};

