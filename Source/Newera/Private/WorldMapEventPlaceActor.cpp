#include "WorldMapEventPlaceActor.h"

void AWorldMapEventPlaceActor::Callback_OnReInitializedIconListWidget() {
}

void AWorldMapEventPlaceActor::Callback_OnInitializedIconListWidget() {
}

AWorldMapEventPlaceActor::AWorldMapEventPlaceActor() {
    this->WorldEventPlaceType = EWorldEventPlaceType::WP_A_CAPITAL;
    this->IconListWidget = NULL;
    this->IconListWidgetSlot = NULL;
    this->PlaceNameWidget = NULL;
    this->PlaceNameWidgetSlot = NULL;
}

