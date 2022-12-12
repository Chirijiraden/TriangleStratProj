#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BlockDirectionInfo.h"
#include "MapFL.generated.h"

class UObject;

UCLASS(Blueprintable)
class NEWERA_API UMapFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMapFL();
    UFUNCTION(BlueprintCallable)
    static void SwitchDisplayGridEdge(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetMapGridLandHeight(const FIntVector& MapGrid, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    static void SetMapGridHeightObject(const FIntVector& MapGrid, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlockDirOnMapGrids(const TArray<FBlockDirectionInfo>& blockInformations);
    
    UFUNCTION(BlueprintCallable)
    static void DispParmanentVictoryAreaPanel(const FName& EventId);
    
    UFUNCTION(BlueprintCallable)
    static void DispEventAreaPanel(const FName& EventId);
    
    UFUNCTION(BlueprintCallable)
    static void DispEvent2AreaPanel(const FName& EventId);
    
    UFUNCTION(BlueprintCallable)
    static void ClearParmanentVictoryAreaPanel();
    
    UFUNCTION(BlueprintCallable)
    static void ClearEventAreaPanel();
    
    UFUNCTION(BlueprintCallable)
    static void ClearEvent2AreaPanel();
    
    UFUNCTION(BlueprintCallable)
    static void ClearBlockDirOnMapGrids(const TArray<FBlockDirectionInfo>& blockInformations);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckBlockDirOnMapGrids(const TArray<FIntVector>& mapGridCoordinates);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FIntVector CalculateMapCoorinateByGlobalPoint(const UObject* WorldContextObject, const FVector& Location);
    
};

