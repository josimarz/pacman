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

class Pacman {
private:
  static MouthState mouth_sequence_[16];
  static sf::IntRect sprite_rect_[5][4];
  static sf::Vector2f sprite_scale_;
  static sf::Vector2u start_position_;
  static unsigned char padding_;
  sf::Texture texture_;
  sf::Sprite sprite_;
  Direction current_direction_;
  Direction next_direction_;
  unsigned char mouth_index_;
  sf::Vector2u current_position_;
  unsigned char lives_;
  unsigned char speed_;
  unsigned int score_;
  bool game_over_;
  bool energized_;
  sf::IntRect GetSpriteRect();
  sf::Vector2f GetFramePosition(sf::Vector2u position);
  bool CanMoveTo(sf::Vector2u position);
  void Move();

public:
  Pacman();
  ~Pacman();
  unsigned char GetSpeed();
  void Render(sf::RenderWindow &render_window);
  void Tick();
  void SetDirection(Direction direction);
};

#endif