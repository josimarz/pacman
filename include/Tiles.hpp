#ifndef Tiles_hpp
#define Tiles_hpp

#pragma once

#include <SFML/Graphics.hpp>

namespace tile {

const unsigned char kTileSize = 72;

class Tile {
private:
  bool eatable_;
  bool accessible_;

protected:
  unsigned char x_;
  unsigned char y_;

public:
  Tile(const unsigned char x, const unsigned char y, const bool accessible,
       const bool eatable);
  ~Tile();
  bool IsAccessible();
  bool IsEatable();
  sf::Vector2u GetPosition();
  virtual void Render(sf::RenderWindow &render_window);
};

class Border : public Tile {
public:
  Border(const unsigned char x, const unsigned char y);
  ~Border();
  void Render(sf::RenderWindow &render_window);
};

class Empty : public Tile {
public:
  Empty(const unsigned char x, const unsigned char y);
  ~Empty();
  void Render(sf::RenderWindow &render_window);
};

class Door : public Tile {
public:
  Door(const unsigned char x, const unsigned char y);
  ~Door();
  void Render(sf::RenderWindow &render_window) override;
};

class Dot : public Tile {
private:
  static unsigned char radius_;
  static unsigned char padding_;

public:
  Dot(const unsigned char x, const unsigned char y);
  ~Dot();
  void Render(sf::RenderWindow &render_window) override;
};

class Pellet : public Tile {
private:
  static unsigned char radius_;
  static unsigned char padding_;

public:
  Pellet(const unsigned char x, const unsigned char y);
  ~Pellet();
  void Render(sf::RenderWindow &render_window) override;
};

class Wall : public Tile {
public:
  Wall(const unsigned char x, const unsigned char y);
  ~Wall();
  void Render(sf::RenderWindow &render_window) override;
};

} // namespace tile

#endif
