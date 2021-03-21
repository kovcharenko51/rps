#include "Factory.h"

RockUnit& RoyalFactory::CreateRockUnit() {
    return *(new Knight);
}

PaperUnit& RoyalFactory::CreatePaperUnit()  {
    return *(new Berserk);
}

ScissorsUnit& RoyalFactory::CreateScissorsUnit() {
    return *(new CrossbowMan);
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
