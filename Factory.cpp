#include <iostream>

#include "Factory.h"

void UnitFactory::DeleteUnit(Unit* unit) {
    delete unit;
}

Unit* RoyalFactory::CreateUnit(Unit::UnitType unit_type) {
    Unit* unit;
    switch (unit_type) {
        case Unit::Rock:
            unit = new Knight(RockCost);
            break;
        case Unit::Paper:
            unit = new Berserk(PaperCost);
            break;
        case Unit::Scissors:
            unit = new CrossbowMan(ScissorsCost);
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