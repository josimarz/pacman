#include "Window.hpp"

Window::Window() { Setup("Pacman"); }

Window::Window(const std::string &title) { Setup(title); }

Window::~Window() {}

void Window::Setup(const std::string &title) {
  title_ = title;
  fullscreen_ = false;
  done_ = false;
  Create();
}

void Window::Create() {
  auto style = fullscreen_ ? sf::Style::Fullscreen : sf::Style::Default;
  render_window_.create({kWindowSize.x, kWindowSize.y, 32}, title_, style);
}

void Window::Destroy() { render_window_.close(); }

void Window::BeginDraw() { render_window_.clear(sf::Color::Black); }

void Window::EndDraw() { render_window_.display(); }

void Window::Update() {
  sf::Event event;
  while (render_window_.pollEvent(event)) {
    if (event.type == sf::Event::Closed) {
      done_ = true;
      continue;
    }
    if (event.type != sf::Event::KeyPressed) {
      continue;
    }
    if (event.key.code != sf::Keyboard::F5) {
      continue;
    }
    ToggleFullscreen();
  }
}

bool Window::IsDone() { return done_; }

bool Window::IsFullscreen() { return fullscreen_; }

sf::RenderWindow *Window::GetRenderWindow() { return &render_window_; }

void Window::ToggleFullscreen() {
  fullscreen_ = !fullscreen_;
  Destroy();
  Create();
}

void Window::Draw(sf::Drawable &drawable) { render_window_.draw(drawable); }