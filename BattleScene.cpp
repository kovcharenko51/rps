#include "BattleScene.h"

BattleScene::BattleScene(sf::Clock& clock, Squad* squad) : Scene(clock) {
    ally_decorator = BattleDecorator(squad);
    enemy_decorator = BattleDecorator(squad);
}