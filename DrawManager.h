#pragma once

#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>

struct DrawableObject;

class DrawManager {
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

    bool IsOpen() const;
};

struct DrawableObject {
    std::string filename_;
    sf::IntRect rect_;
    sf::Vector2i position_;
    sf::Vector2i scale_;

    DrawableObject() = default;
    template <typename... Args>
    DrawableObject(std::string,Args...);
};
