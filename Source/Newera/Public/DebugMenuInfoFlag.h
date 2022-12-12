#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugMenuInfoFlag.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UDebugMenuInfoFlag : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UDebugMenuInfoFlag();
};

