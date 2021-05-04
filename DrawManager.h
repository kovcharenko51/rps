#pragma once

#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>

struct DrawableObject;

class DrawManager {
public:
    enum SpriteType {
        Knight      = 0,
        CrossbowMan = 1,
        Berserk     = 2,
        Ent         = 3,
        WoodElf     = 4,
        Werewolf    = 5,
    };

    enum State {
        Idle        = 0,
        Attack      = 1,
        Death       = 2,
    };
    enum Background {
        BattleBackground, EconomyBackground
    };
private:
    static const int tile_size = 32;
    static const int scale = 10;
    static const int scaled_tile_size = scale * tile_size;

    const std::vector<std::string> texture_filenames_ = { 
        "Graphics/units.png",
        "Graphics/backgrounds.png",
    };
    std::unordered_map<std::string, sf::Texture> textures_;
    
    std::deque<DrawableObject> buffer_;

    mutable sf::RenderWindow window_;
    
    DrawManager();
public:
    DrawManager(const DrawManager&) = delete;
    DrawManager& operator=(const DrawManager&) = delete;

    static DrawManager& GetInstance();

    void AddDrawableObject(const DrawableObject&);
    template <typename Container>
    void AddDrawableObjects(const Container&);
    void Draw();

    DrawableObject GetDrawableObjectForBackground(Background);
    DrawableObject GetDrawableObjectForUnit(SpriteType, State, bool) const;

    bool IsOpen() const;
};

struct DrawableObject {
    std::string filename_;
    sf::IntRect rect_;
    sf::Vector2i position_ = sf::Vector2i(0, 0);
    sf::Vector2i scale_ = sf::Vector2i(1, 1);

    DrawableObject() = default;
    DrawableObject(std::string, const sf::IntRect&, sf::Vector2i = sf::Vector2i(0, 0), sf::Vector2i = sf::Vector2i(1, 1));
};
