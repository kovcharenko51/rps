<<<<<<< HEAD
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
=======
#include "DrawManager.h"

int main() {
    DrawManager& drawer = DrawManager::GetInstance();

    DrawableObject object_1(
        "Graphics/units.png", 
        sf::IntRect(32, 0 * 32, 32, 32), 
        sf::Vector2i(0, 0), 
        sf::Vector2i(8, 8)
    );

    DrawableObject object_2(
        "Graphics/units.png", 
        sf::IntRect(32, 4 * 32, 32, 32), 
        sf::Vector2i(2 * 8 * 32, 0), 
        sf::Vector2i(-8, 8)
    );
    
    while (drawer.IsOpen()) {
        drawer.AddDrawableObject(object_1);
        drawer.AddDrawableObject(object_2);
>>>>>>> ea7ea8d4b9e0cacc0aa91b4e4627d7f7c8d7d563
        drawer.Draw();
    }
}
