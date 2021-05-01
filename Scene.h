#pragma once

#include "DrawableObject.h"
#include "Script.h"
#include <SFML/Graphics.hpp>
#include <vector>

class Scene {
private:
    sf::Clock& clock_;
    std::vector<Script*> script_vector_;
    std::vector<DrawableObject*> list_to_draw_;
public:
    Scene(sf::Clock&);
    void Update();
    friend class BattleManager;
};