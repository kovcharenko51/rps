#pragma once

#include "BattleScene.h"
#include "EconomyScene.h"
#include "Scene.h"

class SceneManager {
private:
    Scene* cur_scene_;
public:
    enum SceneType {
        Battle, Economy
    };
    void CreateScene(SceneType scene_type, sf::Clock& clock, BattleDecorator& ally_dec, BattleDecorator& enemy_dec);
    Scene* GetScene();
};