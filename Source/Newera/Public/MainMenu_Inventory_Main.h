#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "MainMenu_Inventory_Main.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UMainMenu_Inventory_Main : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorStopCheckTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorMovingCheckTime;
    
    UMainMenu_Inventory_Main();
    UFUNCTION(BlueprintCallable)
    void onCursorStopped();
    
    UFUNCTION(BlueprintCallable)
    void onCursorMoving();
    
};

