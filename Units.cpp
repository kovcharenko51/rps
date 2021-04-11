#include "Units.h"

Unit::Unit(unsigned int cost) : cost_(cost) {
}

unsigned int Unit::GetCost() {
    return cost_;
}

void Unit::Attack() {
    // Draw attack
}

void Unit::Die() {
    // Draw death
}

void Unit::Idle() {
    // Draw idle
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
}

Berserk::Berserk(unsigned int cost) {
    cost_ = cost;
}

CrossbowMan::CrossbowMan(unsigned int cost) {
    cost_ = cost;
}