#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UObject/NoExportTypes.h"
#include "ENeweraInputMode.h"
#include "ENeweraGameButton.h"
#include "NeweraPlayerControllerBase.generated.h"

class UNeweraActionInputMan;
class UNeweraPlayerInput;

UCLASS(Blueprintable)
class NEWERA_API ANeweraPlayerControllerBase : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraPlayerInput* gamePlayerInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNeweraActionInputMan* actionInputMan;
    
public:
    ANeweraPlayerControllerBase();
    UFUNCTION(BlueprintCallable)
    void SetActionInputMode(ENeweraInputMode inputMode);
    
    UFUNCTION(BlueprintCallable)
    void ResetActionInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionTriggerRepeat(ENeweraInputMode inputMode, ENeweraGameButton ACTION) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionTrigger(ENeweraInputMode inputMode, ENeweraGameButton ACTION) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionRelease(ENeweraInputMode inputMode, ENeweraGameButton ACTION) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActionOn(ENeweraInputMode inputMode, ENeweraGameButton ACTION) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAnalogStickR(ENeweraInputMode inputMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAnalogStickL(ENeweraInputMode inputMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENeweraInputMode GetActionInputMode() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearActionInput();
    
};

