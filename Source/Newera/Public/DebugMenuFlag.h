#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugMenuFlag.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UDebugMenuFlag : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LuaIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UDebugMenuFlag();
};

