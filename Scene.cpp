#include "Scene.h"

Scene::Scene(sf::Clock& clock) : clock(clock) {
    has_finished = false;
}

void Scene::Update() {
    for (auto script : script_vector) {
        script->Update();
        script->freeze_time -= clock.getElapsedTime().asSeconds();
    }
}

BackgroundAdder::BackgroundAdder(Scene& scene, DrawableObject::Background background) 
    : scene_(scene), background_(background) {
}

void BackgroundAdder::Update() {
    scene_.list_to_draw_.clear();
    scene_.list_to_draw_.emplace_back(DrawableObject::FromBackground(background_));
    freeze_time = 0.0f;
}

Scene::~Scene() {
    while (!script_vector.empty()) {
        delete script_vector.back();
        script_vector.pop_back();
    }
}
