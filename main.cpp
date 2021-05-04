#include "DrawManager.h"
#include "SceneManager.h"
#include <vector>

int main() {
    DrawManager& drawer = DrawManager::GetInstance();
    auto squad = new Squad();
    sf::Clock game_clock;
    SceneManager scene_manager;
    scene_manager.CreateScene(SceneManager::Economy, game_clock, squad);
    while (drawer.IsOpen()) {
        game_clock.restart();
        if (scene_manager.GetScene()->has_finished) {
            switch (scene_manager.cur_type) {
                case SceneManager::Battle:
                    scene_manager.CreateScene(SceneManager::Economy, game_clock, squad);
                    break;
                case SceneManager::Economy:
                    scene_manager.CreateScene(SceneManager::Battle, game_clock, squad);
                    break;
                default:
                    break;
            }

        }
        scene_manager.GetScene()->Update();
    }
}
