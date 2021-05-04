#pragma once

#include "EconomyScene.h"
#include <SFML/Graphics.hpp>

class EconomyManager : public Script {
private:
    const int max_size = 16;
    const int tile_size = 8;
    const int icon_y = 48;

    void DrawSquad();
    void DrawOptions(int);
    void DrawOptionsLast(int);
    sf::Vector2i GetInput();
    void ChangeUnit(int,int);
    void ChangeLastUnit(int,int);
protected:
    EconomyScene& scene_;
public:
    EconomyManager(Scene&);
    void Update() override;
};