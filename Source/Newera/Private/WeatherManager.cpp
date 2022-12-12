#include "WeatherManager.h"

void UWeatherManager::SetWindPower(float WindPower) {
}

void UWeatherManager::SetWindDirection(const FVector& windDirection) {
}

void UWeatherManager::SetEnable(bool Enable) {
}

void UWeatherManager::SetDebugWindPower(int32 WindPower) {
}

void UWeatherManager::SetDebugWindDirectionY(float Y) {
}

void UWeatherManager::SetDebugWindDirectionX(float X) {
}

void UWeatherManager::SetDebugThunderStorm() {
}

void UWeatherManager::SetDebugSunnyAndSnowStick() {
}

void UWeatherManager::SetDebugSunnyAndPuddle() {
}

void UWeatherManager::SetDebugSunny() {
}

void UWeatherManager::SetDebugSnow() {
}

void UWeatherManager::SetDebugLightRain() {
}

void UWeatherManager::SetDebugHeavyRain() {
}

void UWeatherManager::SetDebugCloudyeAndPuddle() {
}

void UWeatherManager::SetDebugCloudyAndSnowStick() {
}

void UWeatherManager::SetDebugCloudy() {
}

void UWeatherManager::SetBattleWeatherControll(bool Enable) {
}

EWindType UWeatherManager::GetWindType() const {
    return EWindType::GENTLEWIND;
}

float UWeatherManager::GetWindPower() const {
    return 0.0f;
}

FVector UWeatherManager::GetWindDirection() {
    return FVector{};
}

EWeatherType UWeatherManager::GetWeatherType() const {
    return EWeatherType::SUNNY;
}

bool UWeatherManager::GetEnable() const {
    return false;
}

int32 UWeatherManager::GetDebugWindPower() {
    return 0;
}

float UWeatherManager::GetDebugWindDirectionY() {
    return 0.0f;
}

float UWeatherManager::GetDebugWindDirectionX() {
    return 0.0f;
}

bool UWeatherManager::GetBattleWeatherControll() const {
    return false;
}

void UWeatherManager::BattleWindSimurate() {
}

void UWeatherManager::BattleWeatherSimurate() {
}

UWeatherManager::UWeatherManager() {
    this->WorldContext = NULL;
    this->WeatherMaterialParams = NULL;
    this->ThunderMaterialParams = NULL;
}

