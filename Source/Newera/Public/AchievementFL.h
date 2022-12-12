#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAchievementType.h"
#include "AchievementFL.generated.h"

UCLASS(Blueprintable)
class NEWERA_API UAchievementFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAchievementFL();
    UFUNCTION(BlueprintCallable)
    static void SetAchievementValue(EAchievementType achievementType, int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAchievementValueMax(EAchievementType achievementType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAchievementValue(EAchievementType achievementType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAchievementStatValue(EAchievementType achievementType);
    
};

