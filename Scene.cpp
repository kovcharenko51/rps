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

Scene::~Scene() {
    while (!script_vector.empty()) {
        delete script_vector.back();
        script_vector.pop_back();
    }
}

BackgroundAdder::BackgroundAdder(DrawableObject::Background background) 
    : background_(background) {
}

void BackgroundAdder::Update() {
    static auto& drawer = DrawManager::GetInstance();
    drawer.AddDrawableObject(DrawableObject::FromBackground(background_));
}
