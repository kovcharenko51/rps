#include "Engine.h"
#include "DrawManager.h"
#include "SceneManager.h"
#include <vector>

int main() {
    SFMLEngine sfml_engine;
    Engine& engine = sfml_engine;
    SceneManager scene_manager = SceneManager();
    DrawManager& drawer = DrawManager::GetInstance();
    Squad squad;
    sf::Clock game_clock;
    while (engine.IsOpen()) {
        scene_manager.CreateScene(SceneManager::Battle, game_clock, &squad);
        scene_manager.GetScene()->Update();
        std::vector<DrawableObject> vec = scene_manager.GetScene()->list_to_draw_;
        drawer.Draw();
    }
}
