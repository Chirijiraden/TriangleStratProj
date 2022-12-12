#pragma once
#include "CoreMinimal.h"
#include "MapGimmickUI.generated.h"

class UActionObjectInterface;
class IActionObjectInterface;

USTRUCT(BlueprintType)
struct NEWERA_API FMapGimmickUI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IActionObjectInterface> Object;
    
    FMapGimmickUI();
};

