#ifndef Frame_hpp
#define Frame_hpp

#include <SFML/Graphics.hpp>

const unsigned char kFrameSize = 72;
const unsigned char kEnergizerRadius = kFrameSize / 3;
const unsigned char kEnergizerPadding = (kFrameSize - kEnergizerRadius * 2) / 2;
const unsigned char kDotRadius = kFrameSize / 6;
const unsigned char kDotPadding = (kFrameSize - kDotRadius * 2) / 2;

const sf::Color kDotColor(sf::Color::White);
const sf::Color kEnergizerColor(sf::Color::White);
const sf::Color kWallColor(52, 93, 169, 255);
const sf::Color kDoorColor(sf::Color(141, 141, 141, 200));

enum class ContentKind {
  None,
  Border,
  Wall,
  Door,
  Dot,
  Energizer,
};

class Frame {
private:
  ContentKind content_kind_;
  sf::Vector2u position_;
  sf::RectangleShape GetWallShape();
  sf::RectangleShape GetDoorShape();
  sf::CircleShape GetDotShape();
  sf::CircleShape GetEnergizerShape();

public:
  Frame(sf::Vector2u position, ContentKind content_kind);
  ~Frame();
  ContentKind GetContentKind();
  void SetContentKind(ContentKind content_kind);
  sf::Vector2u GetPosition();
  bool IsAccessible() const;
  void Render(sf::RenderWindow &render_window);
  bool operator==(const sf::Vector2u position) const;
};

#endif