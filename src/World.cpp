#include "World.hpp"

World::World() {}

World::~World() {}

void World::Update() {}

void World::Render(sf::RenderWindow &render_window) {
  for (Frame frame : kFrames) {
    frame.Render(render_window);
  }
}
