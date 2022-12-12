#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "NeweraWorldMap_Narration.generated.h"

class URichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UNeweraWorldMap_Narration : public UCommonBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* ItemText;
    
public:
    UNeweraWorldMap_Narration();
private:
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationVisible();
    
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationInvisible();
    
};

