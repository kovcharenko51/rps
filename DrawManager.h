#pragma once

#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>

struct DrawableObject;

class DrawManager {
private:
    const std::vector<std::string> texture_filenames_ = { 
        "Graphics/units.png",
        "Graphics/units_icons.png",
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

    // Idk why, but it doesn't work if I define it in .cpp file
    template <typename Container>
    void AddDrawableObjects(const Container& container) {
        for (const auto& object: container) {
            AddDrawableObject(object);
        }
    }
    void Draw();

    bool IsOpen() const;
};

struct DrawableObject {
    enum Unit {
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
        Forest      = 0,
        Castle      = 1,
    };

    enum Icon {
        IconEmpty       = 0 * 8 + 0,
        IconKnight      = 1 * 8 + 0,
        IconCrossbowMan = 2 * 8 + 0,
        IconBerserk     = 3 * 8 + 0,

        Up          = 0 * 8 + 1,
        Down        = 1 * 8 + 1,
        Left        = 2 * 8 + 1,
        Right       = 3 * 8 + 1,

        UpClosed    = 0 * 8 + 2,
        DownClosed  = 1 * 8 + 2,
        LeftClosed  = 2 * 8 + 2,
        RightClosed = 3 * 8 + 2,
    };

    static DrawableObject FromUnit(Unit, State);
    static DrawableObject FromBackground(Background);
    static DrawableObject FromIcon(Icon);

    std::string filename_;
    sf::IntRect rect_;
    sf::Vector2i position_ = sf::Vector2i(0, 0);
    sf::Vector2i scale_ = sf::Vector2i(1, 1);

    DrawableObject() = default;
    DrawableObject(std::string, const sf::IntRect&, sf::Vector2i = sf::Vector2i(0, 0), sf::Vector2i = sf::Vector2i(1, 1));
};
