#pragma once
#include "CoreMinimal.h"
#include "MainMenu_StoryChart_Base.h"
#include "MainMenu_StoryChart_Pt04a_Br02.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UMainMenu_StoryChart_Pt04a_Br02 : public UMainMenu_StoryChart_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LineB00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LineB01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LineB02;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LineB03;
    
public:
    UMainMenu_StoryChart_Pt04a_Br02();
};

