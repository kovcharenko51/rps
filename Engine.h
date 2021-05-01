#include <SFML/Graphics.hpp>

class Engine {
private:
    virtual void DrawBackground(int) = 0;
    virtual void DrawUnit(int,int,bool) = 0;
public:
    virtual bool IsOpen() = 0;
    virtual void HandleInput() = 0;
    virtual void Reset() = 0;
    virtual void Display() = 0;
};

class SFMLEngine : public Engine {
private:
    static const int tile_size = 32;
    static const int scale = 10;
    static const int scaled_tile_size = scale * tile_size;

    sf::RenderWindow window;
    sf::Texture units;
    sf::Texture backgrounds;

    void DrawUnit(int,int,bool) override;
    void DrawBackground(int) override;
public:
    SFMLEngine();
    bool IsOpen() override;
    void Reset() override;
    void HandleInput() override;
    void Display() override;
};

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
    int unit_index = static_cast<int>(time) / 3 % 3;
    int state_index = static_cast<int>(time) % 3;

    DrawUnit(unit_index, state_index, false);
    DrawUnit(unit_index + 3, state_index, true);
}

void SFMLEngine::Reset() {
    window.clear();
}

void SFMLEngine::DrawUnit(int unit_index, int state_index, bool is_on_right) {
    if (unit_index == -1) return;
    sf::IntRect rect(tile_size * state_index, tile_size * unit_index, tile_size, tile_size);
    sf::Sprite unit(units, rect);
    
    int x_position = scaled_tile_size / 2;
    x_position = is_on_right ? window.getSize().x - x_position : x_position;
    int y_position = scaled_tile_size / 2;
    unit.setPosition(x_position, y_position);

    int x_scale = is_on_right ? -scale : scale;
    int y_scale = scale;
    unit.setScale(x_scale, y_scale);
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