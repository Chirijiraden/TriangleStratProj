#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ENeweraInputMode.h"
#include "NeweraUIFL.generated.h"

class UObject;
class AActor;

UCLASS(Blueprintable)
class NEWERA_API UNeweraUIFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraUIFL();
    UFUNCTION(BlueprintCallable)
    static bool WaitPadAny();
    
    UFUNCTION(BlueprintCallable)
    static bool WaitAnimOpen();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static ENeweraInputMode SetActionInputMode(const UObject* WorldContext, ENeweraInputMode inputMode);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveActionObject(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void OnChangeWorldMapNarrationHidden();
    
    UFUNCTION(BlueprintCallable)
    static void OnChangeHUDHideFlag();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static ENeweraInputMode GetActionInputMode(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void EntryBurnableObject(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void EntryActionObject(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 CreateCommonDialog(const UObject* WorldContext, const FString& Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void CloseCommonDialog(const UObject* WorldContext, int32 oldInputMode);
    
};

