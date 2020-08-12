#ifndef Game_hpp
#define Game_hpp

#include "Pacman.hpp"
#include "Window.hpp"
#include "World.hpp"
#include <SFML/Graphics.hpp>

class Game {
private:
  Window window_;
  World world_;
  Pacman pacman_;
  sf::Clock clock_;
  float elapsed_;

public:
  Game();
  ~Game();
  void HandleInput();
  void Update();
  void Render();
  Window *GetWindow();
  float GetElapsed();
  void RestartClock();
};

#endif