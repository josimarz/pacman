#ifndef World_hpp
#define World_hpp

#include "Tiles.hpp"
#include "Window.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

using TileSet = std::vector<tile::Tile *>;

class World {
private:
  static TileSet tiles_;

public:
  World();
  ~World();
  void Update();
  void Render(sf::RenderWindow &render_window);
  static tile::Tile *FindTile(const sf::Vector2u position);
};

#endif