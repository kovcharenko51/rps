#pragma once

#include "Script.h"
#include "DrawManager.h"
#include <SFML/Graphics.hpp>
#include <vector>

class Scene {
protected:
    sf::Clock& clock;
    std::vector<Script*> script_vector;
public:
    bool has_finished;
    Scene(sf::Clock&);
    void Update();
    std::vector<DrawableObject> list_to_draw_;
    virtual ~Scene();
};

class BackgroundAdder : public Script {
protected:
    DrawableObject::Background background_;
public:
    BackgroundAdder(DrawableObject::Background);
    void Update() override;
};