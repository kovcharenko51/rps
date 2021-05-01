#include "Scene.h"

Scene::Scene(sf::Clock& clock) : clock_(clock) {
}

void Scene::Update() {
    for (auto script : script_vector_) {
        script->freeze_time -= clock_.getElapsedTime().asSeconds();
        script->Update();
    }
}