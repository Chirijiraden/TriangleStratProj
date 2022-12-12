#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NeweraGraphicSettingFL.generated.h"

UCLASS(Blueprintable)
class UNeweraGraphicSettingFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraGraphicSettingFL();
    UFUNCTION(BlueprintCallable)
    static void InitializePostProcessSettings();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyPostProcessSettings();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyPostProcessSetting_Gamma();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyPostProcessSetting_Gain();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyPostProcessSetting_EdgeBurn();
    
    UFUNCTION(BlueprintCallable)
    static void ApplyPostProcessSetting_DOF();
    
};

