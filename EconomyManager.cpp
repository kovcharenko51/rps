#include <bits/stdc++.h>
#include "EconomyManager.h"
#include "Factory.h"

EconomyManager::EconomyManager(Scene& scene) : scene_(dynamic_cast<EconomyScene&>(scene)) {
    auto& decorator = scene_.decorator;
    decorator.AddBalance(decorator.GetSquadSize());
}

void EconomyManager::Update() {
    static int index = 0;
    auto& decorator = scene_.decorator;
    
    auto input = GetInput();
    int min = 0, max = max_size - 1;
    max = std::min(max, static_cast<int>(decorator.GetSquadSize()));
    max = std::min(max, static_cast<int>(decorator.GetSquadSize() 
        + decorator.GetBalance() - 1));
    index = std::max(min, std::min(index + input.x, max));
    bool is_last = index == decorator.GetSquadSize() 
        || index == decorator.GetSquadSize() - 1;

    DrawSquad();

    if (is_last) {
        DrawOptionsLast(index);
        ChangeLastUnit(index, -input.y);
    } else {
        DrawOptions(index);
        ChangeUnit(index, -input.y);
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)) {
        scene_.has_finished = true;
    }
}

void EconomyManager::DrawSquad() {
    auto& drawer = DrawManager::GetInstance();
    int x_offset = 0, x_delta = tile_size;
    int y_offset = icon_y;
    auto units = scene_.decorator.GetSquad().units;

    for (const auto& unit: units) {
        auto drawable = DrawableObject::FromIcon(unit->icon_type);
        sf::Vector2i position(x_offset, y_offset);
        drawable.position_ = position;
        x_offset += x_delta;
        drawer.AddDrawableObject(drawable);
    }

    auto& decorator = scene_.decorator;
    for (int coin = 0; coin < decorator.GetBalance(); ++coin) {
        auto drawable = DrawableObject::FromIcon(DrawableObject::IconEmpty);
        sf::Vector2i position(x_offset, y_offset);
        drawable.position_ = position;
        x_offset += x_delta;
        drawer.AddDrawableObject(drawable);
    }
}

/*
Knight
CrossbowMan
Berserk
*/
void EconomyManager::DrawOptions(int index) {
    auto& drawer = DrawManager::GetInstance();
    auto& decorator = scene_.decorator;
    int x_offset = tile_size * index;
    int y_lower = icon_y - tile_size;
    int y_upper = icon_y + tile_size;

    auto type = decorator.GetSquad().units[index]->icon_type;
    auto lower_type = type + 8;
    if (lower_type == 4 * 8) lower_type = 1 * 8;
    auto upper_type = type - 8;
    if (upper_type == 0 * 8) upper_type = 3 * 8;

    auto lower_drawable = DrawableObject::FromIcon(DrawableObject::Icon(lower_type));
    lower_drawable.position_ = sf::Vector2i(x_offset, y_lower);
    drawer.AddDrawableObject(lower_drawable);
    
    auto upper_drawable = DrawableObject::FromIcon(DrawableObject::Icon(upper_type));
    upper_drawable.position_ = sf::Vector2i(x_offset, y_upper);
    drawer.AddDrawableObject(upper_drawable);    
}

/*
Knight
CrossbowMan
Berserk
Empty
*/
void EconomyManager::DrawOptionsLast(int index) {
    auto& drawer = DrawManager::GetInstance();
    auto& decorator = scene_.decorator;
    int x_offset = tile_size * index;
    int y_lower = icon_y - tile_size;
    int y_upper = icon_y + tile_size;

    auto type = index == decorator.GetSquadSize() ? 0 
        : decorator.GetSquad().units[index]->icon_type;
    auto lower_type = type + 8;
    if (lower_type == 4 * 8) lower_type = 0 * 8;
    auto upper_type = type - 8;
    if (upper_type ==-1 * 8) upper_type = 3 * 8;

    auto lower_drawable = DrawableObject::FromIcon(DrawableObject::Icon(lower_type));
    lower_drawable.position_ = sf::Vector2i(x_offset, y_lower);
    drawer.AddDrawableObject(lower_drawable);
    
    auto upper_drawable = DrawableObject::FromIcon(DrawableObject::Icon(upper_type));
    upper_drawable.position_ = sf::Vector2i(x_offset, y_upper);
    drawer.AddDrawableObject(upper_drawable);  
}

sf::Vector2i EconomyManager::GetInput() {
    sf::Vector2i input(0, 0);
    
    static bool right = false;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && !right) {
        ++input.x;
    }
    right = sf::Keyboard::isKeyPressed(sf::Keyboard::Right);
    
    static bool left = false;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && !left) {
        --input.x;
    }
    left = sf::Keyboard::isKeyPressed(sf::Keyboard::Left);
    
    static bool up = false;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && !up) {
        ++input.y;
    }
    up = sf::Keyboard::isKeyPressed(sf::Keyboard::Up);
    
    static bool down = false;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && !down) {
        --input.y;
    }
    down = sf::Keyboard::isKeyPressed(sf::Keyboard::Down);

    return input;
}

/*
Knight
CrossbowMan
Berserk
*/
void EconomyManager::ChangeUnit(int index, int delta) {
    auto& decorator = scene_.decorator;
    auto unit_type = decorator.GetSquad().units[index]->type;
    Unit::UnitType next_unit_type = Unit::UnitType((unit_type + delta + 3) % 3);
    RoyalFactory factory;
    decorator.RemoveUnit(index);
    auto next_unit = factory.CreateUnit(next_unit_type);
    decorator.InsertUnit(index, next_unit);
}

/*
Knight
CrossbowMan
Berserk
Empty
*/
void EconomyManager::ChangeLastUnit(int index, int delta) {
    auto& decorator = scene_.decorator;
    int unit_type = index == decorator.GetSquadSize() ? 3 
        : decorator.GetSquad().units[index]->type;
    int next_unit_type = (unit_type + delta + 4) % 4;
    if (unit_type != 3) {
        decorator.RemoveUnit(index);
    }
    if (next_unit_type != 3) {
        RoyalFactory factory;
        auto next_unit = factory.CreateUnit(Unit::UnitType(next_unit_type));
        decorator.InsertUnit(index, next_unit);
    }
}
