#include "DrawManager.h"
#include "SceneManager.h"
#include <vector>

int main() {
    auto squad = new Squad();
    squad->units.emplace_back(new CrossbowMan(10));
    squad->units.emplace_back(new Knight(10));
    squad->units.emplace_back(new CrossbowMan(10));
    squad->units.emplace_back(new Berserk(10));
    squad->units.emplace_back(new CrossbowMan(10));
    squad->units.emplace_back(new Knight(10));
    squad->units.emplace_back(new CrossbowMan(10));
    squad->units.emplace_back(new Berserk(10));
    sf::Clock game_clock;
    SceneManager scene_manager = SceneManager();
    scene_manager.CreateScene(SceneManager::Battle, game_clock, squad);
    while (DrawManager::GetInstance().IsOpen()) {
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
        game_clock.restart();
        DrawManager::GetInstance().AddDrawableObjects(scene_manager.GetScene()->list_to_draw_);
        DrawManager::GetInstance().Draw();
    }
}
