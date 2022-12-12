#pragma once
#include "CoreMinimal.h"
#include "MainMenu_StoryChart_Base.h"
#include "MainMenu_StoryChart_Pt02b_Br01.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UMainMenu_StoryChart_Pt02b_Br01 : public UMainMenu_StoryChart_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LineB00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LineB01;
    
public:
    UMainMenu_StoryChart_Pt02b_Br01();
};

