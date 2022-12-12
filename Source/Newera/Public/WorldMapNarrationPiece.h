#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WorldMapResumableObjectInterface.h"
#include "UObject/NoExportTypes.h"
#include "WorldMapNarrationPiece.generated.h"

class AWorldMapNarrationPathPart;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class AWorldMapNarrationPiece : public AActor, public IWorldMapResumableObjectInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FDynamicDelegateOnStartTransitionMillitarySymbolType, bool, Immediately);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathPartVisibleDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicDelegateOnStartTransitionMillitarySymbolType DynamicDelegateOnStartTransitionMillitarySymbolType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorTransitionStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorTransitionGoal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialTintParamName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AWorldMapNarrationPathPart*> PathParts;
    
public:
    AWorldMapNarrationPiece();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStaticMeshComponent* GetMainMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UStaticMeshComponent* GetFlagMeshComponent() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

