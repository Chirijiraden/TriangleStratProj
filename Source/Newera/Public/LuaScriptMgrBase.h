#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LuaScriptMgrBase.generated.h"

class UDebugMenuResource;

UCLASS(Blueprintable)
class NEWERA_API ULuaScriptMgrBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuResource* TopMenuResource;
    
    ULuaScriptMgrBase();
};

