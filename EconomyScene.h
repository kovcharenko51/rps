#pragma once

#include "Scene.h"
#include "Squad.h"

class EconomyScene : public Scene {

public:
    EconomyScene(sf::Clock&, Squad*, unsigned int&);
    void HandleInput();

    EconomicDecorator decorator;
};