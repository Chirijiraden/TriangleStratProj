#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "DebugEventName.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UDebugEventName : public UCommonBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text;
    
    UDebugEventName();
};

