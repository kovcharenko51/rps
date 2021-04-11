#include <iostream>

#include <SFML/Graphics.hpp>

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

    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
}
