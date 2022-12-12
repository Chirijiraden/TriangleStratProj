#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Common_Epilogue_Title.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UCommon_Epilogue_Title : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UCommon_Epilogue_Title();
    UFUNCTION(BlueprintCallable)
    void onFinishAnimationInvisible();
    
};

