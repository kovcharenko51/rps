#pragma once

#include "Scene.h"
#include "Squad.h"

class BattleScene : public Scene {
public:
    BattleDecorator ally_decorator;
    BattleDecorator enemy_decorator;
    BattleScene(sf::Clock&, Squad*);
};