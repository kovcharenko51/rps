#include "Engine.h"

#include <iostream>

SFMLEngine::SFMLEngine()
    : window(sf::VideoMode(16 * scaled_tile_size / 4, 9 * scaled_tile_size / 4), 
        "RoyalPhoenixStory", 
            sf::Style::Close) {
    units.loadFromFile("Graphics/units.png");
    backgrounds.loadFromFile("Graphics/backgrounds.png");;
}

bool SFMLEngine::IsOpen() {
    return window.isOpen();
}

void SFMLEngine::HandleInput() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }


    DrawBackground(0);

    static sf::Clock clock;
    float time = clock.getElapsedTime().asSeconds();
    static int unit_index = 0;
    //int unit_index = static_cast<int>(time) / 3 % 3;
    int state_index = static_cast<int>(time) % 3;

    static bool pressedDown = false;
    static bool pressedUp = false;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && !pressedDown) {
        --unit_index;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && !pressedUp) {
        ++unit_index;
    }

    pressedDown = sf::Keyboard::isKeyPressed(sf::Keyboard::Down);
    pressedUp = sf::Keyboard::isKeyPressed(sf::Keyboard::Up);

    unit_index += 3;
    unit_index %= 3;


    DrawUnit(unit_index, state_index, false);
    DrawUnit(unit_index + 3, state_index, true);
}

void SFMLEngine::Reset() {
    window.clear();
}

void SFMLEngine::DrawUnit(int unit_index, int state_index, bool isOnRight) {
    if (unit_index == -1) return;
    sf::IntRect rect(tile_size * state_index, tile_size * unit_index, tile_size, tile_size);
    sf::Sprite unit(units, rect);
    
    int xPosition = scaled_tile_size / 2;
    xPosition = isOnRight ? window.getSize().x - xPosition : xPosition;
    int yPosition = scaled_tile_size / 2;
    unit.setPosition(xPosition, yPosition);

    int xScale = isOnRight ? -scale : scale;
    int yScale = scale;
    unit.setScale(xScale, yScale);
    window.draw(unit);
}

void SFMLEngine::DrawBackground(int background_index) {
    if (background_index == -1) return;
    float x = 16 * tile_size;
    float y = 9 * tile_size;
    sf::IntRect rect(0, y * background_index, x, y);
    sf::Sprite background(backgrounds, rect);
    background.setScale(scale, scale);
    window.draw(background);
}

void SFMLEngine::Display() {
    window.display();
}