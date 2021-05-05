#pragma once

#include "BattleScene.h"
#include "EconomyScene.h"
#include <memory>
#include "Scene.h"

class SceneManager {
private:
    std::shared_ptr<Scene> cur_scene_;
public:
    enum SceneType {
        Battle, Economy, None
    };
    SceneType cur_type = None;
    void CreateScene(SceneType scene_type, sf::Clock& clock, Squad*);
    std::shared_ptr<Scene> GetScene();
};