#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugMenuBGM.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UDebugMenuBGM : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UDebugMenuBGM();
};

