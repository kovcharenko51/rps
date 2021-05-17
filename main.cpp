#include "DrawManager.h"
#include "SceneManager.h"
#include "Factory.h"
#include <vector>

int main() {
    auto& drawer = DrawManager::GetInstance();
    RoyalFactory factory;
    auto squad = new Squad();
    sf::Clock game_clock;
    SceneManager scene_manager;
    scene_manager.CreateScene(SceneManager::Economy, game_clock, squad);

    while (drawer.IsOpen()) {
        auto& current_scene = *scene_manager.GetScene();
        if (current_scene.has_finished) {
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
        current_scene.Update();
        game_clock.restart();
        drawer.AddDrawableObjects(current_scene.list_to_draw_);
        drawer.Draw();
        current_scene.list_to_draw_.clear();
    }
}
