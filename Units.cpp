#include "Units.h"

Unit::Unit(unsigned int cost) : cost_(cost) {
}

unsigned int Unit::GetCost() {
    return cost_;
}

void Unit::Attack() {
    state = DrawManager::Attack;
}

void Unit::Die() {
    state = DrawManager::Death;
}

void Unit::Idle() {
    state = DrawManager::Idle;
}


RockUnit::RockUnit() {
    type = UnitType::Rock;
}

PaperUnit::PaperUnit() {
    type = UnitType::Paper;
}

ScissorsUnit::ScissorsUnit() {
    type = UnitType::Scissors;
}


Knight::Knight(unsigned int cost) {
    cost_ = cost;
    sprite_type = DrawManager::Knight;
}

Berserk::Berserk(unsigned int cost) {
    cost_ = cost;
    sprite_type = DrawManager::Berserk;
}

CrossbowMan::CrossbowMan(unsigned int cost) {
    cost_ = cost;
    sprite_type = DrawManager::CrossbowMan;
}

Werewolf::Werewolf() {
    sprite_type = DrawManager::Werewolf;
}

Ent::Ent() {
    sprite_type = DrawManager::Ent;
}

WoodElf::WoodElf() {
    sprite_type = DrawManager::WoodElf;
}