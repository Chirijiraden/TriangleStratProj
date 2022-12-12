#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ActionObjectSirialData.h"
#include "ActionObjectInterface.generated.h"

UINTERFACE(Blueprintable)
class UActionObjectInterface : public UInterface {
    GENERATED_BODY()
};

class IActionObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnfocusCommandMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartAction(FName argName, float paramA, float paramB);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSave(FActionObjectSirialData& SerialData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoad(const FActionObjectSirialData& SerialData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFocusCommandMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCloseCommandMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsNeedRegisterToBattleCommand() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetNameGopId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetHelpGopId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetBattleCommandTextGopId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetBattleCommandArgumentName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetBattleCommandActionObjectTag() const;
    
};

