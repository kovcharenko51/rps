#include "EconomyScene.h"

EconomyScene::EconomyScene(sf::Clock& clock, Squad* squad) : Scene(clock) {
    script_vector.emplace_back(new BackgroundAdder(*this, DrawableObject::Background::Castle));
    script_vector.emplace_back(new EconomyManager(*this));
}