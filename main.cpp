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
    BattleDecorator ally_dec = BattleDecorator(&squad);
    BattleDecorator enemy_dec = BattleDecorator(&squad);
    sf::Clock clock1;
    while (engine.IsOpen()) {
        scene_manager.CreateScene(SceneManager::Battle, clock1, ally_dec, enemy_dec);
        const std::vector<DrawableObject> vec = scene_manager.GetScene()->list_to_draw_;
        drawer.Draw();
    }
}
