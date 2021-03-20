#include "Factory.h"

RockUnit& RoyalFactory::CreateRockUnit() override {
    return *(new Knight);
}

PaperUnit& RoyalFactory::CreatePaperUnit() override  {
    return *(new Berserk);
}

ScissorsUnit& RoyalFactory::CreateScissorsUnit() override {
    return *(new CrossbowMan);
}


RockUnit& ForestFactory::CreateRockUnit() override {
    return *(new Ent);
}

PaperUnit& ForestFactory::CreatePaperUnit() override {
    return *(new Werewolf);
}

ScissorsUnit& ForestFactory::CreateScissorsUnit() override {
    return *(new WoodElf);
}
