#ifndef World_hpp
#define World_hpp

#include "Frame.hpp"
#include "Window.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

class World {
public:
  static Frame frames_[441];
  World();
  ~World();
  void Update();
  void Render(sf::RenderWindow &render_window);
  static Frame *FindFrame(sf::Vector2u position);
};

#endif