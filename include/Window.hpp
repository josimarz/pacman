#ifndef Window_hpp
#define Window_hpp

#include <SFML/Graphics.hpp>
#include <iostream>

const sf::Vector2u kWindowSize(1512, 1512);

class Window {
private:
  void Setup(const std::string &title);
  void Create();
  void Destroy();
  sf::RenderWindow render_window_;
  std::string title_;
  bool done_;
  bool fullscreen_;

public:
  Window();
  Window(const std::string &title);
  ~Window();
  void BeginDraw();
  void EndDraw();
  void Update();
  bool IsDone();
  bool IsFullscreen();
  sf::RenderWindow *GetRenderWindow();
  sf::Vector2u GetSize();
  void ToggleFullscreen();
  void Draw(sf::Drawable &drawable);
};

#endif