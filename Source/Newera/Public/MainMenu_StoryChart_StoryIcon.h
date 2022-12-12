#pragma once
#include "CoreMinimal.h"
#include "MainMenu_StoryChart_Base.h"
#include "MainMenu_StoryChart_StoryIcon.generated.h"

class UImage;
class UHorizontalBox;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UMainMenu_StoryChart_StoryIcon : public UMainMenu_StoryChart_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* StoryNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Clear;
    
public:
    UMainMenu_StoryChart_StoryIcon();
};

