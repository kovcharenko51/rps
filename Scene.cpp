#include "Scene.h"

Scene::Scene(sf::Clock& clock) : clock(clock) {
    Script* script = new BackgroundAdder(*this);
    script_vector.emplace_back();
}

void Scene::Update() {
    for (auto script : script_vector) {
        script->freeze_time -= clock.getElapsedTime().asSeconds();
        script->Update();
    }
}

BackgroundAdder::BackgroundAdder(Scene& scene) : Script(scene) {
}

void BackgroundAdder::Update() {
    scene_->list_to_draw_.clear();
    scene_->list_to_draw_.emplace_back(DrawManager::GetInstance().GetDrawableObjectForBackground(scene_->background));
}

Scene::~Scene() {
    while (!script_vector.empty()) {
        delete script_vector.back();
        script_vector.pop_back();
    }
}
