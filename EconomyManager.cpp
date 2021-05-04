#include "EconomyManager.h"

EconomyManager::EconomyManager(Scene& scene) : scene_(scene) {
}

void EconomyManager::Update() {
    scene_.has_finished = true;
}