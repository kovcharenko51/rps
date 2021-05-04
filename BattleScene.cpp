#include "BattleScene.h"
#include "BattleManager.h"

BattleDecorator BattleScene::SpawnEnemies() {
    enemy_squad_ = new Squad();
    int size = std::rand() % 16;
    for (int i = 0; i < size; ++i) {
        int unit_ind = std::rand() % 3;
        switch (unit_ind) {
            case 0:
                enemy_squad_->units.emplace_back(new Werewolf());
                break;
            case 1:
                enemy_squad_->units.emplace_back(new WoodElf());
                break;
            case 2:
                enemy_squad_->units.emplace_back(new Ent());
                break;
            default:
                break;
        }
    }
    enemy_decorator = BattleDecorator(enemy_squad_);
    return enemy_decorator;
}

BattleScene::BattleScene(sf::Clock& clock, Squad* squad) : Scene(clock) {
    ally_decorator = BattleDecorator(squad);
    enemy_decorator = BattleDecorator(enemy_squad_);

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