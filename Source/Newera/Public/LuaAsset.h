#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuaAsset.generated.h"

UCLASS(Blueprintable)
class NEWERA_API ULuaAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LuaSourceString;
    
    ULuaAsset();
};

