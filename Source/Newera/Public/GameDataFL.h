#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGameMode.h"
#include "EFaithType.h"
#include "EPartyTeam.h"
#include "GameDataFL.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UGameDataFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameDataFL();
    UFUNCTION(BlueprintCallable)
    static void SetPartyTeam(const FName UnitMasterGopId, EPartyTeam partyTeam);
    
    UFUNCTION(BlueprintCallable)
    static void SetMissionCount(const FName& UnitDataMasterId, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    static void SetFaithParam(EFaithType Type, int32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void SaveFaithPointDataToCSV();
    
    UFUNCTION(BlueprintCallable)
    static bool IsPartyMember(const FName UnitMasterGopId);
    
    UFUNCTION(BlueprintCallable)
    static EPartyTeam GetPartyTeam(const FName UnitMasterGopId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMissionCount(const FName& UnitMasterGopId);
    
    UFUNCTION(BlueprintCallable)
    static EGameMode GetGameMode();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFaithParam(EFaithType Type);
    
    UFUNCTION(BlueprintCallable)
    static bool DebugCanGetImmortalPlume();
    
};

