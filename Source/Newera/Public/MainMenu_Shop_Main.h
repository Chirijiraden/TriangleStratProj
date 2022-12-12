#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "UObject/NoExportTypes.h"
#include "MainMenu_Shop_Main.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UMainMenu_Shop_Main : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DialogOffset;
    
    UMainMenu_Shop_Main();
};

