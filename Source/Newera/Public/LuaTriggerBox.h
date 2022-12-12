#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "LuaTriggerBox.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ALuaTriggerBox : public ATriggerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Arguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnTalkOverLapEventCompatible;
    
    ALuaTriggerBox();
};

