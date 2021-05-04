#pragma once

#include "Script.h"
#include "DrawableObject.h"
#include "DrawManager.h"
#include <SFML/Graphics.hpp>
#include <vector>

class Scene {
protected:
    sf::Clock& clock;
    std::vector<Script*> script_vector;
public:
    bool has_finished = false;
    Scene() = default;
    Scene(sf::Clock&);
    void Update();
    std::vector<DrawableObject> list_to_draw_;
    DrawManager::Background background;
    virtual ~Scene();
};

class BackgroundAdder : public Script {
public:
    BackgroundAdder(Scene&);
    void Update() override;
};