#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Battle_Status_Target_S.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UBattle_Status_Target_S : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UBattle_Status_Target_S();
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationInvisible();
    
};

