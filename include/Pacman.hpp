#ifndef Pacman_hpp
#define Pacman_hpp

#include "World.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

enum class Direction {
  None,
  Up,
  Down,
  Left,
  Right,
};

enum class MouthState {
  Closed,
  HalfClosed,
  HalfOpen,
  Open,
};

const MouthState kMouthSequence[16] = {
    MouthState::Open,       MouthState::Open,       MouthState::Open,
    MouthState::Open,       MouthState::HalfClosed, MouthState::HalfClosed,
    MouthState::HalfClosed, MouthState::HalfClosed, MouthState::Closed,
    MouthState::Closed,     MouthState::Closed,     MouthState::Closed,
    MouthState::HalfOpen,   MouthState::HalfOpen,   MouthState::HalfOpen,
    MouthState::HalfOpen,
};

const unsigned char kPacmanSpeed = 80;
const unsigned char kSpriteWidth = 16;
const unsigned char kSpriteHeight = 16;
const sf::Vector2f kPacmanScale(4, 4);
const unsigned char kPacmanPadding = kFrameSize - 16 * 4;
const sf::Vector2u kStartPosition(10, 15);

const sf::IntRect kSpriteRects[5][4] = {
    {
        sf::IntRect(32, 32, kSpriteWidth, kSpriteHeight),
        sf::IntRect(16, 32, kSpriteWidth, kSpriteHeight),
        sf::IntRect(16, 32, kSpriteWidth, kSpriteHeight),
        sf::IntRect(0, 32, kSpriteWidth, kSpriteHeight),
    },
    {
        sf::IntRect(32, 32, kSpriteWidth, kSpriteHeight),
        sf::IntRect(16, 32, kSpriteWidth, kSpriteHeight),
        sf::IntRect(16, 32, kSpriteWidth, kSpriteHeight),
        sf::IntRect(0, 32, kSpriteWidth, kSpriteHeight),
    },
    {
        sf::IntRect(32, 48, kSpriteWidth, kSpriteHeight),
        sf::IntRect(16, 48, kSpriteWidth, kSpriteHeight),
        sf::IntRect(16, 48, kSpriteWidth, kSpriteHeight),
        sf::IntRect(0, 48, kSpriteWidth, kSpriteHeight),
    },
    {
        sf::IntRect(32, 16, kSpriteWidth, kSpriteHeight),
        sf::IntRect(16, 16, kSpriteWidth, kSpriteHeight),
        sf::IntRect(16, 16, kSpriteWidth, kSpriteHeight),
        sf::IntRect(0, 16, kSpriteWidth, kSpriteHeight),
    },
    {
        sf::IntRect(32, 0, kSpriteWidth, kSpriteHeight),
        sf::IntRect(16, 0, kSpriteWidth, kSpriteHeight),
        sf::IntRect(16, 0, kSpriteWidth, kSpriteHeight),
        sf::IntRect(0, 0, kSpriteWidth, kSpriteHeight),
    },
};

class Pacman {
private:
  sf::Texture texture_;
  sf::Sprite sprite_;
  Direction current_direction_;
  Direction next_direction_;
  unsigned char mouth_index_;
  sf::Vector2u current_position_;
  unsigned char lives_;
  unsigned int score_;
  bool game_over_;
  bool energized_;
  sf::IntRect GetSpriteRect();
  sf::Vector2f GetFramePosition(sf::Vector2u position);
  bool CanMoveTo(sf::Vector2u position);
  void Move();
  void Eat();

public:
  Pacman();
  ~Pacman();
  void Render(sf::RenderWindow &render_window);
  void Tick();
  void SetDirection(Direction direction);
};

#endif