#include "Pacman.hpp"

Pacman::Pacman() : position_(10, 15) {
  direction_ = Direction::None;
  mouth_position_ = MouthPosition::Open;
  texture_.loadFromFile("assets/sprites/pacman.png");
  sprite_.setTexture(texture_);
  sprite_.setTextureRect(GetSpriteRect());
  sprite_.setScale(kPacmanScale);
}

Pacman::~Pacman() {}

sf::IntRect Pacman::GetSpriteRect() {
  return kSpriteRects[(unsigned char)direction_]
                     [(unsigned char)mouth_position_];
}

sf::Vector2f Pacman::GetFramePosition() {
  return sf::Vector2f(position_.x * kFrameSize + kPacmanPadding,
                      position_.y * kFrameSize + kPacmanPadding);
}

bool Pacman::CanMoveTo(sf::Vector2u position) {
  auto frame = std::find(kFrames.begin(), kFrames.end(), position);
  if (frame == kFrames.end()) {
    return false;
  }
  return frame->IsAccessible();
}

void Pacman::Render(sf::RenderWindow &render_window) {
  sprite_.setPosition(GetFramePosition());
  sprite_.setTextureRect(GetSpriteRect());
  render_window.draw(sprite_);
}

void Pacman::Move() {
  sf::Vector2u position(position_);
  switch (direction_) {
  case Direction::None:
    return;
  case Direction::Up:
    position.y--;
    break;
  case Direction::Down:
    position.y++;
    break;
  case Direction::Left:
    position.x--;
    break;
  case Direction::Right:
    position.x++;
    break;
  }
  if (CanMoveTo(position)) {
    position_ = position;
  }
}

void Pacman::Tick() {
  if (direction_ == Direction::None) {
    return;
  }
  switch (mouth_position_) {
  case MouthPosition::Closed:
    mouth_position_ = MouthPosition::HalfOpen;
    break;
  case MouthPosition::HalfClosed:
    mouth_position_ = MouthPosition::Closed;
    break;
  case MouthPosition::HalfOpen:
    mouth_position_ = MouthPosition::Open;
    break;
  case MouthPosition::Open:
    mouth_position_ = MouthPosition::HalfClosed;
    break;
  }
  Move();
}

void Pacman::SetDirection(Direction direction) { direction_ = direction; }
