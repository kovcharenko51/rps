#include "SceneManager.h"

void SceneManager::CreateScene(SceneType scene_type, sf::Clock& clock, Squad* squad) {
    switch (scene_type) {
        case Battle:
            cur_scene_ = std::make_shared<Scene>(BattleScene(clock, squad));
            cur_type = Battle;
            break;
        case Economy:
//            cur_scene_ = new EconomyScene();
            cur_type = Economy;
            break;
        default:
            break;
    }
}

std::shared_ptr<Scene> SceneManager::GetScene() {
    return cur_scene_;
}