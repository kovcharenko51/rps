#include "BattleManager.h"

BattleManager::BattleManager(Scene& scene) : scene_(dynamic_cast<BattleScene&>(scene)) {
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
    freeze_time = 1.0f;
    phase = AttackPhase;
}

bool BattleManager::CheckDeath(BattleDecorator& victim_decorator, BattleDecorator& attacker_decorator) {
    Unit* victim_unit = victim_decorator.GetCurrentUnit();
    Unit* attacker_unit = attacker_decorator.GetCurrentUnit();

    return (victim_unit->type == attacker_unit->type) 
        || (victim_unit->type == (attacker_unit->type + 1) % 3);
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
    bool kill_ally = CheckDeath(ally_decorator, enemy_decorator);
    bool kill_enemy = CheckDeath(enemy_decorator, ally_decorator);

    if (kill_ally) ally_decorator.KillCurrentUnit();
    if (kill_enemy) enemy_decorator.KillCurrentUnit();

    freeze_time = 0.0f;
    phase = StartPhase;
}

void BattleManager::Update() {
    if (freeze_time <= 0) {
        switch (phase) {
            case StartPhase:
                Prepare(scene_.ally_decorator, scene_.enemy_decorator);
                break;
            case PreparePhase:
                Attack(scene_.ally_decorator, scene_.enemy_decorator);
                break;
            case AttackPhase:
                Kill(scene_.ally_decorator, scene_.enemy_decorator);
                break;
            case KillPhase:
                Pop(scene_.ally_decorator, scene_.enemy_decorator);
                break;
            default:
                break;
        }
    }
    if ((scene_.ally_decorator.GetSquadSize() == 0) 
        || (scene_.enemy_decorator.GetSquadSize() == 0)) {
        scene_.has_finished = true;
        return;
    }
    Unit* ally_unit = scene_.ally_decorator.GetCurrentUnit();
    Unit* enemy_unit = scene_.enemy_decorator.GetCurrentUnit();
    scene_.list_to_draw_.emplace_back(DrawableObject::FromUnit(ally_unit->sprite_type, ally_unit->state, false));
    scene_.list_to_draw_.emplace_back(DrawableObject::FromUnit(enemy_unit->sprite_type, enemy_unit->state, true));
}
