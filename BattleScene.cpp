#include "BattleScene.h"

BattleScene::BattleScene(sf::Clock& clock, BattleDecorator& ally_decorator, BattleDecorator& enemy_decorator) : Scene(clock), ally_decorator_(ally_decorator), enemy_decorator_(enemy_decorator) {
}