#include "BattleManager.h"

BattleManager::BattleManager(Scene* scene) : scene_(scene) {
}

void BattleManager::Fight(BattleDecorator& ally_decorator, BattleDecorator& enemy_decorator) {
    const Unit* cur_ally_unit = ally_decorator.GetCurrentUnit();
    const Unit* cur_enemy_unit = enemy_decorator.GetCurrentUnit();
    if (cur_ally_unit->type == cur_enemy_unit->type) {
        ally_decorator.KillCurrentUnit();
        enemy_decorator.KillCurrentUnit();
    } else if ((cur_ally_unit->type == Unit::Rock) && (cur_enemy_unit->type == Unit::Scissors)) {
        enemy_decorator.KillCurrentUnit();
    } else if ((cur_ally_unit->type == Unit::Scissors) && (cur_enemy_unit->type == Unit::Rock)) {
        ally_decorator.KillCurrentUnit();
    } else if (cur_ally_unit->type > cur_enemy_unit->type) {
        enemy_decorator.KillCurrentUnit();
    } else {
        ally_decorator.KillCurrentUnit();
    }
    freeze_time = 1.5f;
}

void BattleManager::Update() {
    scene_->list_to_draw_.push_back(new DrawableObject());
}