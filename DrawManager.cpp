#include "DrawManager.h"

const sf::Vector2i DrawManager::window_size = sf::Vector2i(128, 72);

DrawManager::DrawManager()
    : window_(sf::VideoMode(window_size.x, window_size.y), "RoyalPhoenixStory") {
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

// template <typename Container>
// void DrawManager::AddDrawableObjects(const Container& container) {
//     // for (const auto& object: container) {
//     //     AddDrawableObject(object);
//     // }
// }

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


DrawableObject DrawableObject::FromUnit(Unit unit, State state, bool is_on_right) {
    sf::IntRect rect(state * tile_size, unit * tile_size, tile_size, tile_size);
    int xPosition = tile_size / 2;
    xPosition = is_on_right ? DrawManager::window_size.x - xPosition : xPosition;
    int yPosition = tile_size / 2;
    int xScale = is_on_right ? -1 : 1;
    int yScale = 1;
    return DrawableObject("Graphics/units.png", rect, sf::Vector2i(xPosition, yPosition), sf::Vector2i(xScale, yScale));
}

DrawableObject DrawableObject::FromBackground(Background background) {
    const int width = 128;
    const int height = 72;
    sf::IntRect rect(0, background * height, width, height);
    return DrawableObject("Graphics/backgrounds.png", rect);
}

DrawableObject DrawableObject::FromIcon(Icon icon) {
    const int tile_size = 8;
    sf::IntRect rect((icon % 8) * tile_size, (icon / 8) * tile_size, tile_size, tile_size);
    return DrawableObject("Graphics/units_icons.png", rect);
}

DrawableObject::DrawableObject(std::string filename, const sf::IntRect& rect, sf::Vector2i position, sf::Vector2i scale)
    : filename_(filename), rect_(rect), position_(position), scale_(scale) {
}

sf::Window& DrawManager::GetWindow() const {
    return window_;
}