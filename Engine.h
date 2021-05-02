#pragma once

#include <SFML/Graphics.hpp>

class Engine {
private:
    virtual void DrawBackground(int) = 0;
    virtual void DrawUnit(int,int,bool) = 0;
public:
    virtual ~Engine() = default;

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
    ~SFMLEngine() = default;
    bool IsOpen() override;
    void Reset() override;
    void HandleInput() override;
    void Display() override;
};
