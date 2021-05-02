#include "DrawManager.h"

DrawManager::DrawManager()
    : window_(sf::VideoMode(16 * scaled_tile_size / 4, 9 * scaled_tile_size / 4), 
        "RoyalPhoenixStory", 
            sf::Style::Close) {
    for (const auto& filename: texture_filenames_) {
        if (!textures_[filename].loadFromFile(filename)) {
            throw std::runtime_error("Can't load " + filename);
        }
    }
}

DrawManager& DrawManager::GetInstance() {
    static DrawManager singlenton;
    return singlenton;
}

void DrawManager::AddDrawableObject(const DrawableObject& object) {
    buffer_.push_back(object);
}

template <typename Container>
void DrawManager::AddDrawableObjects(const Container& container) {
    for (const auto& object: container) {
        AddDrawableObject(object);
    }
}

void DrawManager::Draw() {
    window_.clear();
    while (!buffer_.empty()) {
        auto object = buffer_.front();
        buffer_.pop_front();

        textures_[object.filename_].loadFromFile(object.filename_);
        sf::Sprite sprite(textures_[object.filename_], object.rect_);
        sprite.setPosition(object.position_.x, object.position_.y);
        sprite.setScale(object.scale_.x, object.scale_.y);
        window_.draw(sprite);
    }
    window_.display();
}

bool DrawManager::IsOpen() const {
    sf::Event event;
    while (window_.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window_.close();
        }
    }
    return window_.isOpen();
}


DrawableObject::DrawableObject(std::string filename, const sf::IntRect& rect, sf::Vector2i position, sf::Vector2i scale)
    : filename_(filename), rect_(rect), position_(position), scale_(scale) {
}
