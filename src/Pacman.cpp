#include "Pacman.hpp"

Pacman::Pacman() : current_position_(kStartPosition) {
  score_ = 0;
  current_direction_ = Direction::None;
  next_direction_ = Direction::None;
  mouth_index_ = 0;
  energized_ = false;
  texture_.loadFromFile("assets/sprites/pacman.png");
  sprite_.setTexture(texture_);
  sprite_.setTextureRect(GetSpriteRect());
  sprite_.setScale(kPacmanScale);
  sprite_.setPosition(GetFramePosition(current_position_));
}

Pacman::~Pacman() {}

sf::IntRect Pacman::GetSpriteRect() {
  return kSpriteRects[(unsigned char)current_direction_]
                     [(unsigned char)kMouthSequence[mouth_index_]];
}

sf::Vector2f Pacman::GetFramePosition(sf::Vector2u position) {
  return sf::Vector2f(position.x * kFrameSize + kPacmanPadding,
                      position.y * kFrameSize + kPacmanPadding);
}

void Pacman::Eat() {
  auto frame = World::FindFrame(current_position_);
  if (frame->GetContentKind() == ContentKind::Dot) {
    score_++;
    frame->SetContentKind(ContentKind::None);
  }
  if (frame->GetContentKind() == ContentKind::Energizer) {
    energized_ = true;
    frame->SetContentKind(ContentKind::None);
  }
}

bool Pacman::CanMoveTo(sf::Vector2u position) {
  auto frame = World::FindFrame(position);
  if (!frame) {
    return false;
  }
  return frame->IsAccessible();
}

void Pacman::Render(sf::RenderWindow &render_window) {
  sprite_.setTextureRect(GetSpriteRect());
  render_window.draw(sprite_);
}

void Pacman::Move() {
  sf::Vector2u position(current_position_);
  sf::Vector2f move = sprite_.getPosition();
  switch (current_direction_) {
  case Direction::None:
    return;
  case Direction::Up:
    position.y--;
    move.y -= 2;
    break;
  case Direction::Down:
    position.y++;
    move.y += 2;
    break;
  case Direction::Left:
    position.x--;
    move.x -= 2;
    break;
  case Direction::Right:
    position.x++;
    move.x += 2;
    break;
  }
  if (!CanMoveTo(position)) {
    current_direction_ = next_direction_;
    return;
  }
  sprite_.setPosition(move);
  auto target = GetFramePosition(position);
  if (move == sf::Vector2f(target)) {
    current_position_ = position;
    current_direction_ = next_direction_;
    Eat();
  }
}

void Pacman::Tick() {
  if (current_direction_ == Direction::None) {
    return;
  }
  if (mouth_index_ == 15) {
    mouth_index_ = 0;
  } else {
    mouth_index_++;
  }
  Move();
}

void Pacman::SetDirection(Direction direction) {
  if (current_direction_ == Direction::None) {
    current_direction_ = direction;
  }
  next_direction_ = direction;
}
