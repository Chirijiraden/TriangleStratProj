#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NeweraHitBoxWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NEWERA_API UNeweraHitBoxWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HitBoxName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitBoxId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* UserWidget;
    
    UNeweraHitBoxWidget();
};

