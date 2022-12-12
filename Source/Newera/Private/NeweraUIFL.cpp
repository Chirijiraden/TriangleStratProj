#include "NeweraUIFL.h"

class UObject;
class AActor;

bool UNeweraUIFL::WaitPadAny() {
    return false;
}

bool UNeweraUIFL::WaitAnimOpen() {
    return false;
}

ENeweraInputMode UNeweraUIFL::SetActionInputMode(const UObject* WorldContext, ENeweraInputMode inputMode) {
    return ENeweraInputMode::GameUI;
}

void UNeweraUIFL::RemoveActionObject(AActor* Actor) {
}

void UNeweraUIFL::OnChangeWorldMapNarrationHidden() {
}

void UNeweraUIFL::OnChangeHUDHideFlag() {
}

ENeweraInputMode UNeweraUIFL::GetActionInputMode(const UObject* WorldContext) {
    return ENeweraInputMode::GameUI;
}

void UNeweraUIFL::EntryBurnableObject(AActor* Actor) {
}

void UNeweraUIFL::EntryActionObject(AActor* Actor) {
}

int32 UNeweraUIFL::CreateCommonDialog(const UObject* WorldContext, const FString& Text) {
    return 0;
}

void UNeweraUIFL::CloseCommonDialog(const UObject* WorldContext, int32 oldInputMode) {
}

UNeweraUIFL::UNeweraUIFL() {
}

