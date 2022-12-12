#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SoundSeq.generated.h"

class USoundSeq;

UCLASS(Blueprintable)
class USoundSeq : public UDataTable {
    GENERATED_BODY()
public:
    USoundSeq();
    UFUNCTION(BlueprintCallable)
    static void SetForceLoad_when_Initialize(bool sw);
    
    UFUNCTION(BlueprintCallable)
    static void Initialize();
    
    UFUNCTION(BlueprintCallable)
    static USoundSeq* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    static void Dispose();
    
};

