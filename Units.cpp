#include "Units.h"

Unit::Unit(unsigned int cost) : cost_(cost) {
}

unsigned int Unit::GetCost() {
    return cost_;
}

void Unit::Attack() {
    state = DrawableObject::Attack;
}

void Unit::Die() {
    state = DrawableObject::Death;
}

void Unit::Idle() {
    state = DrawableObject::Idle;
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
    sprite_type = DrawableObject::Knight;
}

Berserk::Berserk(unsigned int cost) {
    cost_ = cost;
    sprite_type = DrawableObject::Berserk;
}

CrossbowMan::CrossbowMan(unsigned int cost) {
    cost_ = cost;
    sprite_type = DrawableObject::CrossbowMan;
}

Werewolf::Werewolf() {
    sprite_type = DrawableObject::Werewolf;
}

Ent::Ent() {
    sprite_type = DrawableObject::Ent;
}

WoodElf::WoodElf() {
    sprite_type = DrawableObject::WoodElf;
}