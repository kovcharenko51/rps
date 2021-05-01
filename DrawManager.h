#include <bits/stdc++.h>
#include <SFML/Graphics.hpp>

struct DrawableObject;

class DrawManager {
private:
    static const int tile_size = 32;
    static const int scale = 10;
    static const int scaled_tile_size = scale * tile_size;

    const std::vector<std::string> texture_filenames_;
    std::unordered_map<std::string, sf::Texture> textures_;
    
    std::deque<DrawableObject> buffer_;

    sf::RenderWindow window_;
    
    DrawManager();
public:
    DrawManager(const DrawManager&) = delete;
    DrawManager& operator=(const DrawManager&) = delete;

    static DrawManager& GetInstance();
    void AddDrawableObject(const DrawableObject&);
    template <typename Container>
    void AddDrawableObjects(const Container&);
    void Draw();
};

struct DrawableObject {
    std::string filename_;
    sf::IntRect rect_;
    sf::Vector2i position_;
    sf::Vector2i scale_;

    template <typename... Args>
    DrawableObject(std::string,Args...);
    DrawableObject(std::string,const sf::IntRect&,sf::Vector2i,sf::Vector2i);
};