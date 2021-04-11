#include <iostream>

#include "Factory.h"

int main() {
    std::cout << "Nothing to see here. Come later or check source." << std::endl;

    RoyalFactory royalFactory;
    Unit& knight = royalFactory.CreateUnit(Unit::Rock);
    Unit& berserk = royalFactory.CreateUnit(Unit::Paper);
    Unit& crossbowMan = royalFactory.CreateUnit(Unit::Scissors);

    ForestFactory forestFactory;
    Unit& ent = forestFactory.CreateUnit(Unit::Rock);
    Unit& werewolf = forestFactory.CreateUnit(Unit::Paper);
    Unit& woodElf = forestFactory.CreateUnit(Unit::Scissors);
}
