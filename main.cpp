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
        drawer.Draw();
    }
}
