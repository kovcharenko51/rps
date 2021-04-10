#include "Squad.h"

#include "Factory.h"


ButtleDecorator::ButtleDecorator(Squad* squad) : squad(squad) {}

const Unit* ButtleDecorator::GetCurrentUnit() {
    return squad->units[GetSquadSize() - 1];
}

void ButtleDecorator::KillCurrentUnit() {
    // Delete using factory
}

size_t ButtleDecorator::GetSquadSize() {
    return squad->units.size();
}