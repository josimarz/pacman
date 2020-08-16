#include "Pacman.hpp"

MouthState Pacman::mouth_sequence_[16] = {
    MouthState::Open,       MouthState::Open,       MouthState::Open,
    MouthState::Open,       MouthState::HalfClosed, MouthState::HalfClosed,
    MouthState::HalfClosed, MouthState::HalfClosed, MouthState::Closed,
    MouthState::Closed,     MouthState::Closed,     MouthState::Closed,
    MouthState::HalfOpen,   MouthState::HalfOpen,   MouthState::HalfOpen,
    MouthState::HalfOpen,
};

sf::IntRect Pacman::sprite_rect_[5][4] = {
    {
        sf::IntRect(32, 32, 16, 16),
        sf::IntRect(16, 32, 16, 16),
        sf::IntRect(16, 32, 16, 16),
        sf::IntRect(0, 32, 16, 16),
    },
    {
        sf::IntRect(32, 32, 16, 16),
        sf::IntRect(16, 32, 16, 16),
        sf::IntRect(16, 32, 16, 16),
        sf::IntRect(0, 32, 16, 16),
    },
    {
        sf::IntRect(32, 48, 16, 16),
        sf::IntRect(16, 48, 16, 16),
        sf::IntRect(16, 48, 16, 16),
        sf::IntRect(0, 48, 16, 16),
    },
    {
        sf::IntRect(32, 16, 16, 16),
        sf::IntRect(16, 16, 16, 16),
        sf::IntRect(16, 16, 16, 16),
        sf::IntRect(0, 16, 16, 16),
    },
    {
        sf::IntRect(32, 0, 16, 16),
        sf::IntRect(16, 0, 16, 16),
        sf::IntRect(16, 0, 16, 16),
        sf::IntRect(0, 0, 16, 16),
    },
};

sf::Vector2f Pacman::sprite_scale_ = sf::Vector2f(4, 4);

sf::Vector2u Pacman::start_position_ = sf::Vector2u(10, 15);

unsigned char Pacman::padding_ = tile::kTileSize - 16 * 4;

Pacman::Pacman() : current_position_(Pacman::start_position_) {
  current_direction_ = Direction::None;
  next_direction_ = Direction::None;
  mouth_index_ = 0;
  speed_ = 80;
  lives_ = 3;
  score_ = 0;
  energized_ = false;
  texture_.loadFromFile("assets/sprites/pacman.png");
  sprite_.setTexture(texture_);
  sprite_.setTextureRect(GetSpriteRect());
  sprite_.setScale(Pacman::sprite_scale_);
  sprite_.setPosition(GetFramePosition(current_position_));
}

Pacman::~Pacman() {}

sf::IntRect Pacman::GetSpriteRect() {
  return Pacman::sprite_rect_[(unsigned char)current_direction_][(
      unsigned char)Pacman::mouth_sequence_[mouth_index_]];
}

sf::Vector2f Pacman::GetFramePosition(sf::Vector2u position) {
  return sf::Vector2f(position.x * tile::kTileSize + Pacman::padding_,
                      position.y * tile::kTileSize + Pacman::padding_);
}

bool Pacman::CanMoveTo(sf::Vector2u position) {
  auto tile = World::FindTile(position);
  return tile ? tile->IsAccessible() : false;
}

unsigned char Pacman::GetSpeed() { return speed_; }

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
