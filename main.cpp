#include "DrawManager.h"
#include "SceneManager.h"
#include <vector>

int main() {
    DrawManager& drawer = DrawManager::GetInstance();
    Squad squad;
    sf::Clock game_clock;
    SceneManager scene_manager;

    while (drawer.IsOpen()) {
        scene_manager.CreateScene(SceneManager::Battle, game_clock, &squad);
        scene_manager.GetScene()->Update();
        // std::vector<DrawableObject> vec = scene_manager.GetScene()->list_to_draw_;
        drawer.Draw();
    }
}
