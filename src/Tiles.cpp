#include "Tiles.hpp"

namespace tile {

// Tile

Tile::Tile(const unsigned char x, const unsigned char y, const bool accessible,
           const bool eatable)
    : x_(x), y_(y), accessible_(accessible), eatable_(eatable) {}

Tile::~Tile() {}

bool Tile::IsAccessible() { return accessible_; }

bool Tile::IsEatable() { return eatable_; }

sf::Vector2u Tile::GetPosition() { return sf::Vector2u(x_, y_); }

void Tile::Render(sf::RenderWindow &render_window) {}

// Border

Border::Border(const unsigned char x, const unsigned char y)
    : Tile(x, y, false, false) {}

Border::~Border() {}

void Border::Render(sf::RenderWindow &render_window) {}

// Empty

Empty::Empty(const unsigned char x, const unsigned char y)
    : Tile(x, y, true, false) {}

Empty::~Empty() {}

void Empty::Render(sf::RenderWindow &render_window) {}

// Door

Door::Door(const unsigned char x, const unsigned char y)
    : Tile(x, y, false, false) {}

Door::~Door() {}

void Door::Render(sf::RenderWindow &render_window) {
  const auto x = x_ * kTileSize;
  const auto y = y_ * kTileSize;

  sf::RectangleShape shape(sf::Vector2f(kTileSize, kTileSize));
  shape.setPosition(sf::Vector2f(x, y));
  shape.setFillColor(sf::Color(141, 141, 141, 200));

  render_window.draw(shape);
}

// Dot

unsigned char Dot::radius_ = kTileSize / 6;
unsigned char Dot::padding_ = (kTileSize - Dot::radius_ * 2) / 2;

Dot::Dot(const unsigned char x, const unsigned char y)
    : Tile(x, y, true, true) {}

Dot::~Dot() {}

void Dot::Render(sf::RenderWindow &render_window) {
  const auto x = x_ * kTileSize + padding_;
  const auto y = y_ * kTileSize + padding_;

  sf::CircleShape shape(radius_);
  shape.setPosition(sf::Vector2f(x, y));
  shape.setFillColor(sf::Color::White);

  render_window.draw(shape);
}

// Pellet

unsigned char Pellet::radius_ = kTileSize / 3;
unsigned char Pellet::padding_ = (kTileSize - radius_ * 2) / 2;

Pellet::Pellet(const unsigned char x, const unsigned char y)
    : Tile(x, y, true, true) {}

Pellet::~Pellet() {}

void Pellet::Render(sf::RenderWindow &render_window) {
  const auto x = x_ * kTileSize + padding_;
  const auto y = y_ * kTileSize + padding_;

  sf::CircleShape shape(radius_);
  shape.setPosition(sf::Vector2f(x, y));
  shape.setFillColor(sf::Color::White);

  render_window.draw(shape);
}

// Wall

Wall::Wall(const unsigned char x, const unsigned char y)
    : Tile(x, y, false, false) {}

Wall::~Wall() {}

void Wall::Render(sf::RenderWindow &render_window) {
  const auto x = x_ * kTileSize;
  const auto y = y_ * kTileSize;

  sf::RectangleShape shape(sf::Vector2f(kTileSize, kTileSize));
  shape.setPosition(sf::Vector2f(x, y));
  shape.setFillColor(sf::Color(52, 93, 169, 255));

  render_window.draw(shape);
}

} // namespace tile
