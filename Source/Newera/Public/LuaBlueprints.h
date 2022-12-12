#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LuaBlueprints.generated.h"

class ULuaAsset;

UCLASS(Blueprintable)
class NEWERA_API ULuaBlueprints : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULuaBlueprints();
private:
    UFUNCTION(BlueprintCallable)
    static void RunLua(const ULuaAsset* LuaAsset);
    
};

