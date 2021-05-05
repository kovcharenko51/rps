#include "BattleScene.h"
#include "BattleManager.h"
#include "Factory.h"

BattleDecorator BattleScene::SpawnEnemies() {
    ForestFactory factory;
    enemy_squad_ = new Squad();
    int size = 3;
    for (int i = 0; i < size; ++i) {
        auto unit = factory.CreateUnit(Unit::UnitType(i % 3));
        enemy_squad_->units.emplace_back(unit);
    }
    enemy_decorator = BattleDecorator(enemy_squad_);
    return enemy_decorator;
}

BattleScene::BattleScene(sf::Clock& clock, Squad* squad) : Scene(clock) {
    ally_decorator = BattleDecorator(squad);
    enemy_decorator = SpawnEnemies();

    script_vector.emplace_back(new BackgroundAdder(DrawableObject::Background::Forest));
    script_vector.emplace_back(new BattleManager(*this));
}

BattleScene::~BattleScene() {
    while (!enemy_squad_->units.empty()) {
        delete enemy_squad_->units.back();
        enemy_squad_->units.pop_back();
    }
    delete enemy_squad_;
}