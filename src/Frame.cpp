#include "Frame.hpp"

Frame::Frame(sf::Vector2u position, ContentKind content_kind) {
  position_ = position;
  content_kind_ = content_kind;
}

Frame::~Frame() {}

ContentKind Frame::GetContentKind() { return content_kind_; }

sf::Vector2u Frame::GetPosition() { return position_; }

bool Frame::IsAccessible() const {
  return content_kind_ == ContentKind::Dot ||
         content_kind_ == ContentKind::Energizer ||
         content_kind_ == ContentKind::None;
}

void Frame::Render(sf::RenderWindow &render_window) {
  switch (content_kind_) {
  case ContentKind::None:
    break;
  case ContentKind::Border:
    break;
  case ContentKind::Wall:
    render_window.draw(GetWallShape());
    break;
  case ContentKind::Door:
    render_window.draw(GetDoorShape());
    break;
  case ContentKind::Dot:
    render_window.draw(GetDotShape());
    break;
  case ContentKind::Energizer:
    render_window.draw(GetEnergizerShape());
    break;
  }
}

bool Frame::operator==(const sf::Vector2u position) const {
  return position_ == position;
}

sf::RectangleShape Frame::GetWallShape() {
  const float x = position_.x * kFrameSize;
  const float y = position_.y * kFrameSize;
  sf::RectangleShape wall(sf::Vector2f(kFrameSize, kFrameSize));
  wall.setPosition(sf::Vector2f(x, y));
  wall.setFillColor(kWallColor);
  return wall;
}

sf::RectangleShape Frame::GetDoorShape() {
  const float x = position_.x * kFrameSize;
  const float y = position_.y * kFrameSize;
  sf::RectangleShape door(sf::Vector2f(kFrameSize, kFrameSize));
  door.setPosition(sf::Vector2f(x, y));
  door.setFillColor(kDoorColor);
  return door;
}

sf::CircleShape Frame::GetDotShape() {
  const float x = position_.x * kFrameSize + kDotPadding;
  const float y = position_.y * kFrameSize + kDotPadding;
  sf::CircleShape dot(kDotRadius);
  dot.setPosition(sf::Vector2f(x, y));
  dot.setFillColor(kDotColor);
  return dot;
}

sf::CircleShape Frame::GetEnergizerShape() {
  const float x = position_.x * kFrameSize + kEnergizerPadding;
  const float y = position_.y * kFrameSize + kEnergizerPadding;
  sf::CircleShape energizer(kEnergizerRadius);
  energizer.setPosition(sf::Vector2f(x, y));
  energizer.setFillColor(kEnergizerColor);
  return energizer;
}