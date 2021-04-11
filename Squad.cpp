#include "Squad.h"

#include "Factory.h"


BattleDecorator::BattleDecorator(Squad* squad) : squad_(squad) {
}

const Unit* BattleDecorator::GetCurrentUnit() {
    return squad_->units.back();
}

void BattleDecorator::KillCurrentUnit() {
    Unit* current_unit = squad_->units.back();
    squad_->units.pop_back();
    delete current_unit;
}

size_t BattleDecorator::GetSquadSize() {
    return squad_->units.size();
}

EconomicDecorator::EconomicDecorator(Squad* squad, unsigned int& balance) : squad_(squad), balance_(balance){
}

void EconomicDecorator::InsertUnit(size_t ind, Unit* unit) {
    if (balance_ < unit->GetCost()) {
        return;
    }
    balance_ -= unit->GetCost();
    squad_->units.insert(squad_->units.begin() + ind, unit);
}

void EconomicDecorator::RemoveUnit(size_t ind) {
    balance_ += squad_->units[ind]->GetCost();
    squad_->units.erase(squad_->units.begin() + ind);
}
