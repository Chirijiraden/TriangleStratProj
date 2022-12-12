#pragma once
#include "CoreMinimal.h"
#include "NeweraGameStateBase.h"
#include "EDirectionOnMap.h"
#include "EAnimationType.h"
#include "EDisplayFlipbookFlag.h"
#include "EDisplayFlipbookAdditionalUnitType.h"
#include "ENeweraFlipbookOverrideType.h"
#include "NeweraGameStateDisplayFlipbook.generated.h"

class UUserWidget;
class ANeweraCharacterBase;
class ANeweraGameStateDisplayFlipbook;

UCLASS(Blueprintable)
class NEWERA_API ANeweraGameStateDisplayFlipbook : public ANeweraGameStateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> RootWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* RootWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANeweraCharacterBase* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ANeweraCharacterBase*> AdditionalUnits;
    
public:
    ANeweraGameStateDisplayFlipbook();
    UFUNCTION(BlueprintCallable)
    void ToggleFlags(EDisplayFlipbookFlag InFlags);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFlags(EDisplayFlipbookFlag InFlags);
    
    UFUNCTION(BlueprintCallable)
    void RefreshCharacter();
    
    UFUNCTION(BlueprintCallable)
    void RefreshAdditionalUnit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOn(EDisplayFlipbookFlag InFlags, bool bCheckAllFlags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ANeweraGameStateDisplayFlipbook* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetAllWeaponIdMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, ENeweraFlipbookOverrideType> GetAllFlipbookOverrideTypeMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetAllCharacterIdTexts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FName> GetAllAttackIdMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDisplayFlipbookAdditionalUnitType GetAdditionalUnitType() const;
    
    UFUNCTION(BlueprintCallable)
    bool ChangeWeaponSprite(const FString& InSpriteId);
    
    UFUNCTION(BlueprintCallable)
    bool ChangePlayRate(float Value);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeFlipbookOverrideType(ENeweraFlipbookOverrideType InFlipbookOverrideType);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeDirection(EDirectionOnMap InDirection);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeCharacter(const FString& InCharacterId);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeAttackFlipbook(const FName& InFlipbookId);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeAnimType(EAnimationType InAnimationType);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAdditionalUnitType(EDisplayFlipbookAdditionalUnitType InDisplayFlipbookAdditionalUnitType);
    
    UFUNCTION(BlueprintCallable)
    void AddFlags(EDisplayFlipbookFlag InFlags);
    
};

