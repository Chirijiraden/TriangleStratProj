#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "MainMenu_Information_List_Button.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UMainMenu_Information_List_Button : public UCommonBaseWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float customScroolSpeed_JP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float customScroolSpeed_EN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float customScroolSpeed_FR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float customScroolSpeed_IT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float customScroolSpeed_DE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float customScroolSpeed_ES;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float customScroolSpeed_TW;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float customScroolSpeed_CN;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float customScroolSpeed_KO;
    
public:
    UMainMenu_Information_List_Button();
};

