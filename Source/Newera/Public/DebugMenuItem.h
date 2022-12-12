#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DebugMenuItem.generated.h"

class UDebugMenuResource;

UCLASS(Blueprintable)
class NEWERA_API UDebugMenuItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDebugMenuResource* child;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString luaFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString luaEventName;
    
    UDebugMenuItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChildMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDebugMenuResource* GetChildMenu() const;
    
};

