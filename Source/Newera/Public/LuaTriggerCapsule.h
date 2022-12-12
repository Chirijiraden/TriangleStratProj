#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerCapsule.h"
#include "LuaTriggerCapsule.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ALuaTriggerCapsule : public ATriggerCapsule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Arguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnTalkOverLapEventCompatible;
    
    ALuaTriggerCapsule();
};

