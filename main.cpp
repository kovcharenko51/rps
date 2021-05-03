#include "DrawManager.h"
#include "SceneManager.h"
#include <vector>

int main() {
    DrawManager& drawer = DrawManager::GetInstance();

    while (drawer.IsOpen()) {
        drawer.Draw();
    }
}
