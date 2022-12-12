#pragma once
#include "CoreMinimal.h"
#include "MainMenu_StoryChart_Base.h"
#include "MainMenu_StoryChart_Pt03a_Br03_02.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UMainMenu_StoryChart_Pt03a_Br03_02 : public UMainMenu_StoryChart_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LineF00;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LineF01;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LineF02;
    
public:
    UMainMenu_StoryChart_Pt03a_Br03_02();
};

