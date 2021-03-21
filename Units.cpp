#include "Units.h"

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
    type = Rock;
}

PaperUnit::PaperUnit() {
    type = Paper;
}

ScissorsUnit::ScissorsUnit() {
    type = Scissors;
}