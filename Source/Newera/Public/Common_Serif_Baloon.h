#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Common_Serif_Baloon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UCommon_Serif_Baloon : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UCommon_Serif_Baloon();
protected:
    UFUNCTION(BlueprintCallable)
    void onFinishAnimation_Out_2_Top();
    
    UFUNCTION(BlueprintCallable)
    void onFinishAnimation_Out_2_Bottom();
    
    UFUNCTION(BlueprintCallable)
    void onFinishAnimation_Out_1_Top();
    
    UFUNCTION(BlueprintCallable)
    void onFinishAnimation_Out_1_Bottom();
    
    UFUNCTION(BlueprintCallable)
    void onFinishAnimation_Out_0_Top();
    
    UFUNCTION(BlueprintCallable)
    void onFinishAnimation_Out_0_Bottom();
    
    UFUNCTION(BlueprintCallable)
    void onFinishAnimation_In_2_Top();
    
    UFUNCTION(BlueprintCallable)
    void onFinishAnimation_In_2_Bottom();
    
    UFUNCTION(BlueprintCallable)
    void onFinishAnimation_In_1_Top();
    
    UFUNCTION(BlueprintCallable)
    void onFinishAnimation_In_1_Bottom();
    
    UFUNCTION(BlueprintCallable)
    void onFinishAnimation_In_0_Top();
    
    UFUNCTION(BlueprintCallable)
    void onFinishAnimation_In_0_Bottom();
    
};

