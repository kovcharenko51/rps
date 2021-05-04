#include "BattleManager.h"

BattleManager::BattleManager(Scene& scene) : Script(scene) {
}

void BattleManager::Prepare(BattleDecorator& ally_decorator, BattleDecorator& enemy_decorator) {
    ally_decorator.GetCurrentUnit()->Idle();
    enemy_decorator.GetCurrentUnit()->Idle();
    freeze_time = 0.5f;
    phase = PreparePhase;
}

void BattleManager::Attack(BattleDecorator& ally_decorator, BattleDecorator& enemy_decorator) {
    ally_decorator.GetCurrentUnit()->Attack();
    enemy_decorator.GetCurrentUnit()->Attack();
    freeze_time = 0.5f;
    phase = AttackPhase;
}

bool BattleManager::CheckDeath(BattleDecorator& first_decorator, BattleDecorator& sec_decorator) {
    Unit* left_unit = first_decorator.GetCurrentUnit();
    Unit* right_unit = sec_decorator.GetCurrentUnit();
    if ((left_unit->type == Unit::Rock) && (right_unit->type == Unit::Scissors)) {
        return false;
    } else if ((left_unit->type == Unit::Scissors) && (right_unit->type == Unit::Rock)) {
        return true;
    } else if (left_unit->type > right_unit->type) {
        return false;
    }
    return true;
}

void BattleManager::Kill(BattleDecorator& ally_decorator, BattleDecorator& enemy_decorator) {
    if (CheckDeath(ally_decorator, enemy_decorator)) {
        ally_decorator.GetCurrentUnit()->Die();
    } else {
        ally_decorator.GetCurrentUnit()->Idle();
    }
    if (CheckDeath(enemy_decorator, ally_decorator)) {
        enemy_decorator.GetCurrentUnit()->Die();
    } else {
        enemy_decorator.GetCurrentUnit()->Idle();
    }
    freeze_time = 1.0f;
    phase = KillPhase;
}

void BattleManager::Pop(BattleDecorator& ally_decorator, BattleDecorator& enemy_decorator) {
    if (CheckDeath(ally_decorator, enemy_decorator)) {
        ally_decorator.KillCurrentUnit();
    }
    if (CheckDeath(enemy_decorator, ally_decorator)) {
        enemy_decorator.KillCurrentUnit();
    }
    freeze_time = 0.0f;
}

void BattleManager::Update() {
    auto scene = dynamic_cast<BattleScene*>(scene_.get());
    if ((scene->ally_decorator.GetSquadSize() == 0) && (scene->enemy_decorator.GetSquadSize() == 0)) {
        scene_->has_finished = true;
        return;
    }
    if (freeze_time <= 0) {
        switch (phase) {
            case PreparePhase:
                Attack(scene->ally_decorator, scene->enemy_decorator);
                break;
            case AttackPhase:
                Kill(scene->ally_decorator, scene->enemy_decorator);
                break;
            case KillPhase:
                Pop(scene->ally_decorator, scene->enemy_decorator);
                return;
            default:
                break;
        }
    }
    Unit* ally_unit = scene->ally_decorator.GetCurrentUnit();
    Unit* enemy_unit = scene->ally_decorator.GetCurrentUnit();
    scene_->list_to_draw_.emplace_back(DrawManager::GetInstance().GetDrawableObjectForUnit(ally_unit->sprite_type, ally_unit->state, false));
    scene_->list_to_draw_.emplace_back(DrawManager::GetInstance().GetDrawableObjectForUnit(enemy_unit->sprite_type, enemy_unit->state, true));
}