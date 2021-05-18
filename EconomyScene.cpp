#include "EconomyScene.h"
#include "EconomyManager.h"

EconomyScene::EconomyScene(sf::Clock& clock, Squad* squad, unsigned int& balance) 
    : Scene(clock), decorator(squad, balance) {
    script_vector.emplace_back(new BackgroundAdder(DrawableObject::Background::Castle));
    script_vector.emplace_back(new EconomyManager(*this));
}