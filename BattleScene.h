#pragma once

#include <cstdlib>
#include "Scene.h"
#include "BattleManager.h"
#include "Squad.h"

class BattleScene : public Scene {
private:
    Squad* enemy_squad_;
public:
    BattleDecorator ally_decorator;
    BattleDecorator enemy_decorator;
    BattleScene(sf::Clock&, Squad*);
    BattleDecorator SpawnEnemies();
    ~BattleScene();
};