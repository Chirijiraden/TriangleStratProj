#pragma once
#include "CoreMinimal.h"
#include "CommonBaseWidget.h"
#include "Battle_CmdMenu_Main.generated.h"

class UActionObjectInterface;
class IActionObjectInterface;

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UBattle_CmdMenu_Main : public UCommonBaseWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IActionObjectInterface> CurrentFocusActionObject;
    
public:
    UBattle_CmdMenu_Main();
};

