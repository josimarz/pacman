#include "Game.hpp"

Game::Game() : window_("Pacman") {}

Game::~Game() {}

void Game::HandleInput() {
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
    pacman_.SetDirection(Direction::Up);
    return;
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
    pacman_.SetDirection(Direction::Down);
    return;
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
    pacman_.SetDirection(Direction::Left);
    return;
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
    pacman_.SetDirection(Direction::Right);
  }
}

void Game::Update() {
  window_.Update();
  float timestep = 1.0f / pacman_.GetSpeed();
  if (elapsed_ > timestep) {
    pacman_.Tick();
    world_.Update();
    elapsed_ -= timestep;
  }
}

void Game::Render() {
  window_.BeginDraw();
  world_.Render(*window_.GetRenderWindow());
  pacman_.Render(*window_.GetRenderWindow());
  window_.EndDraw();
}

Window *Game::GetWindow() { return &window_; }

float Game::GetElapsed() { return elapsed_; }

void Game::RestartClock() { elapsed_ += clock_.restart().asSeconds(); }
