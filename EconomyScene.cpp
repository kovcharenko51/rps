#include "EconomyScene.h"

EconomyScene::EconomyScene(sf::Clock& clock, Squad* squad) : Scene(clock) {
    background = DrawManager::BattleBackground;
    script_vector.emplace_back(new EconomyManager(*this));
}