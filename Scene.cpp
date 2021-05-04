#include "Scene.h"

Scene::Scene(sf::Clock& clock) : clock(clock) {
}

void Scene::Update() {
    for (auto script : script_vector) {
        script->freeze_time -= clock.getElapsedTime().asSeconds();
        script->Update();
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
