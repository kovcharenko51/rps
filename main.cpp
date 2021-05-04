#include "DrawManager.h"
#include "SceneManager.h"
#include <vector>

// #include <iostream>
// template <typename C>
// void f(const C& c) {
//     for (const auto& e: c) {
//         std::cout << e;
//     }
// }

int main() {
    // f(std::vector<int>(2,0));
    DrawManager& drawer = DrawManager::GetInstance();
    Squad squad;
    sf::Clock game_clock;
    SceneManager scene_manager;

    scene_manager.CreateScene(SceneManager::Economy, game_clock, &squad);
    while (drawer.IsOpen()) {
        *scene_manager.GetScene();
        // scene_manager.GetScene()->Update();
        // auto list_to_draw = scene_manager.GetScene()->list_to_draw_;
        // drawer.AddDrawableObjects(list_to_draw);
        drawer.Draw();
    }
}
