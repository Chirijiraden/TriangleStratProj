#pragma once
#include "CoreMinimal.h"
#include "Engine/TriggerSphere.h"
#include "LuaTriggerSphere.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ALuaTriggerSphere : public ATriggerSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Arguments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnTalkOverLapEventCompatible;
    
    ALuaTriggerSphere();
};

