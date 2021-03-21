#include <iostream>
#include "Factory.h"

int main() {
    std::cout << "Nothing to see here. Come later or check source." << std::endl;

    RoyalFactory royalFactory;
    RockUnit& knight = royalFactory.CreateRockUnit();
    PaperUnit& berserk = royalFactory.CreatePaperUnit();
    ScissorsUnit& crossbowMan = royalFactory.CreateScissorsUnit();

    ForestFactory forestFactory;
    RockUnit& ent = forestFactory.CreateRockUnit();
    PaperUnit& werewolf = forestFactory.CreatePaperUnit();
    ScissorsUnit& woodElf = forestFactory.CreateScissorsUnit();
}
