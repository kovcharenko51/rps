#include "Engine.h"

int main() {
    SFMLEngine sfml_engine;
    Engine& engine = sfml_engine;

    while (engine.IsOpen()) {
        engine.Reset();
        engine.HandleInput();
        engine.Display();
    }
}
