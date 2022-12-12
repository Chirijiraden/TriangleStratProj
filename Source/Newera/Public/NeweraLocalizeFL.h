#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ENeweraLanguage.h"
#include "ENeweraLanguageChangeFlag.h"
#include "NeweraLocalizeFL.generated.h"

UCLASS(Blueprintable)
class UNeweraLocalizeFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNeweraLocalizeFL();
    UFUNCTION(BlueprintCallable)
    static void ChangeNeweraLanguage(ENeweraLanguage NeweraLanguage, ENeweraLanguageChangeFlag NeweraLanguageChangeFlags);
    
};

