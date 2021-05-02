#pragma once

#include "Scene.h"
#include "Squad.h"

class BattleScene : public Scene {
private:
    BattleDecorator& ally_decorator_;
    BattleDecorator& enemy_decorator_;
public:
    BattleScene();
    BattleScene(sf::Clock&, BattleDecorator&, BattleDecorator&);
};