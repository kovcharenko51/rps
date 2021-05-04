#pragma once

#include "EconomyManager.h"
#include "Scene.h"
#include "Squad.h"

class EconomyScene : public Scene {
public:
    EconomyScene(sf::Clock&, Squad*);
    void HandleInput();
};