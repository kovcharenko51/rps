#include <iostream>

#include "Factory.h"

unsigned int UnitFactory::RockCost      = 1;
unsigned int UnitFactory::ScissorsCost  = 1;
unsigned int UnitFactory::PaperCost     = 1;

void UnitFactory::DeleteUnit(Unit* unit) {
    delete unit;
}

Unit* RoyalFactory::CreateUnit(Unit::UnitType unit_type) {
    Unit* unit;
    switch (unit_type) {
        case Unit::Rock:
            unit = new Knight(UnitFactory::RockCost);
            break;
        case Unit::Paper:
            unit = new Berserk(UnitFactory::PaperCost);
            break;
        case Unit::Scissors:
            unit = new CrossbowMan(UnitFactory::ScissorsCost);
            break;
        case Unit::None:
            unit = nullptr;
    }
    return unit;
}

Unit* ForestFactory::CreateUnit(Unit::UnitType unit_type) {
    Unit* unit;
    switch (unit_type) {
        case Unit::Rock:
            unit = new Ent();
            break;
        case Unit::Paper:
            unit = new Werewolf();
            break;
        case Unit::Scissors:
            unit = new WoodElf();
            break;
        case Unit::None:
            unit = nullptr;
    }
    return unit;
}