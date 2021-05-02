#include "SceneManager.h"

void SceneManager::CreateScene(SceneType scene_type, sf::Clock& clock, BattleDecorator& ally_dec, BattleDecorator& enemy_dec) {
    switch (scene_type) {
        case Battle:
            cur_scene_ = new BattleScene(clock, ally_dec, enemy_dec);
            break;
        case Economy:
//            cur_scene_ = new EconomyScene();
            break;
        default:
            break;
    }
}

Scene* SceneManager::GetScene() {
    return cur_scene_;
}