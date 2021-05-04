#include "SceneManager.h"

void SceneManager::CreateScene(SceneType scene_type, sf::Clock& clock, Squad* squad) {
    switch (scene_type) {
        case Battle:
            cur_scene_ = std::make_shared<BattleScene>(clock, squad);
            break;
        case Economy:
            cur_scene_ = std::make_shared<EconomyScene>(clock, squad);
            break;
        default:
            break;
    }
    cur_type = scene_type;
}

std::shared_ptr<Scene> SceneManager::GetScene() {
    return cur_scene_;
}