#pragma once

#include "DrawableObject.h"
#include "DrawManager.h"
#include "Script.h"
#include <SFML/Graphics.hpp>
#include <vector>

class Scene {
private:
    sf::Clock& clock_;
    std::vector<Script*> script_vector_;
public:
    Scene(sf::Clock&);
    void Update();
    std::vector<DrawableObject> list_to_draw_;
};