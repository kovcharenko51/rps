#include "Factory.h"

void UnitFactory::DeleteUnit(Unit* unit) {
    delete unit;
}


RoyalFactory::RoyalFactory() {}

RoyalFactory* RoyalFactory::GetInstance() {
    static RoyalFactory singleton;
    return &singleton;
}

RockUnit& RoyalFactory::CreateRockUnit() {
    return *(new Knight);
}

PaperUnit& RoyalFactory::CreatePaperUnit()  {
    return *(new Berserk);
}

ScissorsUnit& RoyalFactory::CreateScissorsUnit() {
    return *(new CrossbowMan);
}


ForestFactory::ForestFactory() {}

ForestFactory* ForestFactory::GetInstance() {
    static ForestFactory singleton;
    return &singleton;
}

RockUnit& ForestFactory::CreateRockUnit() {
    return *(new Ent);
}

PaperUnit& ForestFactory::CreatePaperUnit() {
    return *(new Werewolf);
}

ScissorsUnit& ForestFactory::CreateScissorsUnit() {
    return *(new WoodElf);
}
