#ifndef World_hpp
#define World_hpp

#include "Frame.hpp"
#include "Window.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

const std::vector<Frame> kFrames = {
    // line 0
    Frame(sf::Vector2u(0, 0), ContentKind::Border),
    Frame(sf::Vector2u(1, 0), ContentKind::Wall),
    Frame(sf::Vector2u(2, 0), ContentKind::Wall),
    Frame(sf::Vector2u(3, 0), ContentKind::Wall),
    Frame(sf::Vector2u(4, 0), ContentKind::Wall),
    Frame(sf::Vector2u(5, 0), ContentKind::Wall),
    Frame(sf::Vector2u(6, 0), ContentKind::Wall),
    Frame(sf::Vector2u(7, 0), ContentKind::Wall),
    Frame(sf::Vector2u(8, 0), ContentKind::Wall),
    Frame(sf::Vector2u(9, 0), ContentKind::Wall),
    Frame(sf::Vector2u(10, 0), ContentKind::Wall),
    Frame(sf::Vector2u(11, 0), ContentKind::Wall),
    Frame(sf::Vector2u(12, 0), ContentKind::Wall),
    Frame(sf::Vector2u(13, 0), ContentKind::Wall),
    Frame(sf::Vector2u(14, 0), ContentKind::Wall),
    Frame(sf::Vector2u(15, 0), ContentKind::Wall),
    Frame(sf::Vector2u(16, 0), ContentKind::Wall),
    Frame(sf::Vector2u(17, 0), ContentKind::Wall),
    Frame(sf::Vector2u(18, 0), ContentKind::Wall),
    Frame(sf::Vector2u(19, 0), ContentKind::Wall),
    Frame(sf::Vector2u(20, 0), ContentKind::Border),
    // line 1
    Frame(sf::Vector2u(0, 1), ContentKind::Border),
    Frame(sf::Vector2u(1, 1), ContentKind::Wall),
    Frame(sf::Vector2u(2, 1), ContentKind::Dot),
    Frame(sf::Vector2u(3, 1), ContentKind::Dot),
    Frame(sf::Vector2u(4, 1), ContentKind::Dot),
    Frame(sf::Vector2u(5, 1), ContentKind::Dot),
    Frame(sf::Vector2u(6, 1), ContentKind::Dot),
    Frame(sf::Vector2u(7, 1), ContentKind::Dot),
    Frame(sf::Vector2u(8, 1), ContentKind::Dot),
    Frame(sf::Vector2u(9, 1), ContentKind::Dot),
    Frame(sf::Vector2u(10, 1), ContentKind::Wall),
    Frame(sf::Vector2u(11, 1), ContentKind::Dot),
    Frame(sf::Vector2u(12, 1), ContentKind::Dot),
    Frame(sf::Vector2u(13, 1), ContentKind::Dot),
    Frame(sf::Vector2u(14, 1), ContentKind::Dot),
    Frame(sf::Vector2u(15, 1), ContentKind::Dot),
    Frame(sf::Vector2u(16, 1), ContentKind::Dot),
    Frame(sf::Vector2u(17, 1), ContentKind::Dot),
    Frame(sf::Vector2u(18, 1), ContentKind::Dot),
    Frame(sf::Vector2u(19, 1), ContentKind::Wall),
    Frame(sf::Vector2u(20, 1), ContentKind::Border),
    // line 2
    Frame(sf::Vector2u(0, 2), ContentKind::Border),
    Frame(sf::Vector2u(1, 2), ContentKind::Wall),
    Frame(sf::Vector2u(2, 2), ContentKind::Energizer),
    Frame(sf::Vector2u(3, 2), ContentKind::Wall),
    Frame(sf::Vector2u(4, 2), ContentKind::Wall),
    Frame(sf::Vector2u(5, 2), ContentKind::Dot),
    Frame(sf::Vector2u(6, 2), ContentKind::Wall),
    Frame(sf::Vector2u(7, 2), ContentKind::Wall),
    Frame(sf::Vector2u(8, 2), ContentKind::Wall),
    Frame(sf::Vector2u(9, 2), ContentKind::Dot),
    Frame(sf::Vector2u(10, 2), ContentKind::Wall),
    Frame(sf::Vector2u(11, 2), ContentKind::Dot),
    Frame(sf::Vector2u(12, 2), ContentKind::Wall),
    Frame(sf::Vector2u(13, 2), ContentKind::Wall),
    Frame(sf::Vector2u(14, 2), ContentKind::Wall),
    Frame(sf::Vector2u(15, 2), ContentKind::Dot),
    Frame(sf::Vector2u(16, 2), ContentKind::Wall),
    Frame(sf::Vector2u(17, 2), ContentKind::Wall),
    Frame(sf::Vector2u(18, 2), ContentKind::Energizer),
    Frame(sf::Vector2u(19, 2), ContentKind::Wall),
    Frame(sf::Vector2u(20, 2), ContentKind::Border),
    // line 3
    Frame(sf::Vector2u(0, 3), ContentKind::Border),
    Frame(sf::Vector2u(1, 3), ContentKind::Wall),
    Frame(sf::Vector2u(2, 3), ContentKind::Dot),
    Frame(sf::Vector2u(3, 3), ContentKind::Dot),
    Frame(sf::Vector2u(4, 3), ContentKind::Dot),
    Frame(sf::Vector2u(5, 3), ContentKind::Dot),
    Frame(sf::Vector2u(6, 3), ContentKind::Dot),
    Frame(sf::Vector2u(7, 3), ContentKind::Dot),
    Frame(sf::Vector2u(8, 3), ContentKind::Dot),
    Frame(sf::Vector2u(9, 3), ContentKind::Dot),
    Frame(sf::Vector2u(10, 3), ContentKind::Dot),
    Frame(sf::Vector2u(11, 3), ContentKind::Dot),
    Frame(sf::Vector2u(12, 3), ContentKind::Dot),
    Frame(sf::Vector2u(13, 3), ContentKind::Dot),
    Frame(sf::Vector2u(14, 3), ContentKind::Dot),
    Frame(sf::Vector2u(15, 3), ContentKind::Dot),
    Frame(sf::Vector2u(16, 3), ContentKind::Dot),
    Frame(sf::Vector2u(17, 3), ContentKind::Dot),
    Frame(sf::Vector2u(18, 3), ContentKind::Dot),
    Frame(sf::Vector2u(19, 3), ContentKind::Wall),
    Frame(sf::Vector2u(20, 3), ContentKind::Border),
    // line 4
    Frame(sf::Vector2u(0, 4), ContentKind::Border),
    Frame(sf::Vector2u(1, 4), ContentKind::Wall),
    Frame(sf::Vector2u(2, 4), ContentKind::Dot),
    Frame(sf::Vector2u(3, 4), ContentKind::Wall),
    Frame(sf::Vector2u(4, 4), ContentKind::Wall),
    Frame(sf::Vector2u(5, 4), ContentKind::Dot),
    Frame(sf::Vector2u(6, 4), ContentKind::Wall),
    Frame(sf::Vector2u(7, 4), ContentKind::Dot),
    Frame(sf::Vector2u(8, 4), ContentKind::Wall),
    Frame(sf::Vector2u(9, 4), ContentKind::Wall),
    Frame(sf::Vector2u(10, 4), ContentKind::Wall),
    Frame(sf::Vector2u(11, 4), ContentKind::Wall),
    Frame(sf::Vector2u(12, 4), ContentKind::Wall),
    Frame(sf::Vector2u(13, 4), ContentKind::Dot),
    Frame(sf::Vector2u(14, 4), ContentKind::Wall),
    Frame(sf::Vector2u(15, 4), ContentKind::Dot),
    Frame(sf::Vector2u(16, 4), ContentKind::Wall),
    Frame(sf::Vector2u(17, 4), ContentKind::Wall),
    Frame(sf::Vector2u(18, 4), ContentKind::Dot),
    Frame(sf::Vector2u(19, 4), ContentKind::Wall),
    Frame(sf::Vector2u(20, 4), ContentKind::Border),
    // line 5
    Frame(sf::Vector2u(0, 5), ContentKind::Border),
    Frame(sf::Vector2u(1, 5), ContentKind::Wall),
    Frame(sf::Vector2u(2, 5), ContentKind::Dot),
    Frame(sf::Vector2u(3, 5), ContentKind::Dot),
    Frame(sf::Vector2u(4, 5), ContentKind::Dot),
    Frame(sf::Vector2u(5, 5), ContentKind::Dot),
    Frame(sf::Vector2u(6, 5), ContentKind::Wall),
    Frame(sf::Vector2u(7, 5), ContentKind::Dot),
    Frame(sf::Vector2u(8, 5), ContentKind::Dot),
    Frame(sf::Vector2u(9, 5), ContentKind::Dot),
    Frame(sf::Vector2u(10, 5), ContentKind::Wall),
    Frame(sf::Vector2u(11, 5), ContentKind::Dot),
    Frame(sf::Vector2u(12, 5), ContentKind::Dot),
    Frame(sf::Vector2u(13, 5), ContentKind::Dot),
    Frame(sf::Vector2u(14, 5), ContentKind::Wall),
    Frame(sf::Vector2u(15, 5), ContentKind::Dot),
    Frame(sf::Vector2u(16, 5), ContentKind::Dot),
    Frame(sf::Vector2u(17, 5), ContentKind::Dot),
    Frame(sf::Vector2u(18, 5), ContentKind::Dot),
    Frame(sf::Vector2u(19, 5), ContentKind::Wall),
    Frame(sf::Vector2u(20, 5), ContentKind::Border),
    // line 6
    Frame(sf::Vector2u(0, 6), ContentKind::Border),
    Frame(sf::Vector2u(1, 6), ContentKind::Wall),
    Frame(sf::Vector2u(2, 6), ContentKind::Wall),
    Frame(sf::Vector2u(3, 6), ContentKind::Wall),
    Frame(sf::Vector2u(4, 6), ContentKind::Wall),
    Frame(sf::Vector2u(5, 6), ContentKind::Dot),
    Frame(sf::Vector2u(6, 6), ContentKind::Wall),
    Frame(sf::Vector2u(7, 6), ContentKind::Wall),
    Frame(sf::Vector2u(8, 6), ContentKind::Wall),
    Frame(sf::Vector2u(9, 6), ContentKind::None),
    Frame(sf::Vector2u(10, 6), ContentKind::Wall),
    Frame(sf::Vector2u(11, 6), ContentKind::None),
    Frame(sf::Vector2u(12, 6), ContentKind::Wall),
    Frame(sf::Vector2u(13, 6), ContentKind::Wall),
    Frame(sf::Vector2u(14, 6), ContentKind::Wall),
    Frame(sf::Vector2u(15, 6), ContentKind::Dot),
    Frame(sf::Vector2u(16, 6), ContentKind::Wall),
    Frame(sf::Vector2u(17, 6), ContentKind::Wall),
    Frame(sf::Vector2u(18, 6), ContentKind::Wall),
    Frame(sf::Vector2u(19, 6), ContentKind::Wall),
    Frame(sf::Vector2u(20, 6), ContentKind::Border),
    // line 7
    Frame(sf::Vector2u(0, 7), ContentKind::Border),
    Frame(sf::Vector2u(1, 7), ContentKind::Border),
    Frame(sf::Vector2u(2, 7), ContentKind::Border),
    Frame(sf::Vector2u(3, 7), ContentKind::Border),
    Frame(sf::Vector2u(4, 7), ContentKind::Wall),
    Frame(sf::Vector2u(5, 7), ContentKind::Dot),
    Frame(sf::Vector2u(6, 7), ContentKind::Wall),
    Frame(sf::Vector2u(7, 7), ContentKind::None),
    Frame(sf::Vector2u(8, 7), ContentKind::None),
    Frame(sf::Vector2u(9, 7), ContentKind::None),
    Frame(sf::Vector2u(10, 7), ContentKind::None),
    Frame(sf::Vector2u(11, 7), ContentKind::None),
    Frame(sf::Vector2u(12, 7), ContentKind::None),
    Frame(sf::Vector2u(13, 7), ContentKind::None),
    Frame(sf::Vector2u(14, 7), ContentKind::Wall),
    Frame(sf::Vector2u(15, 7), ContentKind::Dot),
    Frame(sf::Vector2u(16, 7), ContentKind::Wall),
    Frame(sf::Vector2u(17, 7), ContentKind::Border),
    Frame(sf::Vector2u(18, 7), ContentKind::Border),
    Frame(sf::Vector2u(19, 7), ContentKind::Border),
    Frame(sf::Vector2u(20, 7), ContentKind::Border),
    // line 8
    Frame(sf::Vector2u(0, 8), ContentKind::Wall),
    Frame(sf::Vector2u(1, 8), ContentKind::Wall),
    Frame(sf::Vector2u(2, 8), ContentKind::Wall),
    Frame(sf::Vector2u(3, 8), ContentKind::Wall),
    Frame(sf::Vector2u(4, 8), ContentKind::Wall),
    Frame(sf::Vector2u(5, 8), ContentKind::Dot),
    Frame(sf::Vector2u(6, 8), ContentKind::Wall),
    Frame(sf::Vector2u(7, 8), ContentKind::None),
    Frame(sf::Vector2u(8, 8), ContentKind::Wall),
    Frame(sf::Vector2u(9, 8), ContentKind::Wall),
    Frame(sf::Vector2u(10, 8), ContentKind::Door),
    Frame(sf::Vector2u(11, 8), ContentKind::Wall),
    Frame(sf::Vector2u(12, 8), ContentKind::Wall),
    Frame(sf::Vector2u(13, 8), ContentKind::None),
    Frame(sf::Vector2u(14, 8), ContentKind::Wall),
    Frame(sf::Vector2u(15, 8), ContentKind::Dot),
    Frame(sf::Vector2u(16, 8), ContentKind::Wall),
    Frame(sf::Vector2u(17, 8), ContentKind::Wall),
    Frame(sf::Vector2u(18, 8), ContentKind::Wall),
    Frame(sf::Vector2u(19, 8), ContentKind::Wall),
    Frame(sf::Vector2u(20, 8), ContentKind::Wall),
    // line 9
    Frame(sf::Vector2u(0, 9), ContentKind::None),
    Frame(sf::Vector2u(1, 9), ContentKind::None),
    Frame(sf::Vector2u(2, 9), ContentKind::None),
    Frame(sf::Vector2u(3, 9), ContentKind::None),
    Frame(sf::Vector2u(4, 9), ContentKind::None),
    Frame(sf::Vector2u(5, 9), ContentKind::Dot),
    Frame(sf::Vector2u(6, 9), ContentKind::None),
    Frame(sf::Vector2u(7, 9), ContentKind::None),
    Frame(sf::Vector2u(8, 9), ContentKind::Wall),
    Frame(sf::Vector2u(9, 9), ContentKind::None),
    Frame(sf::Vector2u(10, 9), ContentKind::None),
    Frame(sf::Vector2u(11, 9), ContentKind::None),
    Frame(sf::Vector2u(12, 9), ContentKind::Wall),
    Frame(sf::Vector2u(13, 9), ContentKind::None),
    Frame(sf::Vector2u(14, 9), ContentKind::None),
    Frame(sf::Vector2u(15, 9), ContentKind::Dot),
    Frame(sf::Vector2u(16, 9), ContentKind::None),
    Frame(sf::Vector2u(17, 9), ContentKind::None),
    Frame(sf::Vector2u(18, 9), ContentKind::None),
    Frame(sf::Vector2u(19, 9), ContentKind::None),
    Frame(sf::Vector2u(20, 9), ContentKind::None),
    // line 10
    Frame(sf::Vector2u(0, 10), ContentKind::Wall),
    Frame(sf::Vector2u(1, 10), ContentKind::Wall),
    Frame(sf::Vector2u(2, 10), ContentKind::Wall),
    Frame(sf::Vector2u(3, 10), ContentKind::Wall),
    Frame(sf::Vector2u(4, 10), ContentKind::Wall),
    Frame(sf::Vector2u(5, 10), ContentKind::Dot),
    Frame(sf::Vector2u(6, 10), ContentKind::Wall),
    Frame(sf::Vector2u(7, 10), ContentKind::None),
    Frame(sf::Vector2u(8, 10), ContentKind::Wall),
    Frame(sf::Vector2u(9, 10), ContentKind::Wall),
    Frame(sf::Vector2u(10, 10), ContentKind::Wall),
    Frame(sf::Vector2u(11, 10), ContentKind::Wall),
    Frame(sf::Vector2u(12, 10), ContentKind::Wall),
    Frame(sf::Vector2u(13, 10), ContentKind::None),
    Frame(sf::Vector2u(14, 10), ContentKind::Wall),
    Frame(sf::Vector2u(15, 10), ContentKind::Dot),
    Frame(sf::Vector2u(16, 10), ContentKind::Wall),
    Frame(sf::Vector2u(17, 10), ContentKind::Wall),
    Frame(sf::Vector2u(18, 10), ContentKind::Wall),
    Frame(sf::Vector2u(19, 10), ContentKind::Wall),
    Frame(sf::Vector2u(20, 10), ContentKind::Wall),
    // line 11
    Frame(sf::Vector2u(0, 11), ContentKind::Border),
    Frame(sf::Vector2u(1, 11), ContentKind::Border),
    Frame(sf::Vector2u(2, 11), ContentKind::Border),
    Frame(sf::Vector2u(3, 11), ContentKind::Border),
    Frame(sf::Vector2u(4, 11), ContentKind::Wall),
    Frame(sf::Vector2u(5, 11), ContentKind::Dot),
    Frame(sf::Vector2u(6, 11), ContentKind::Wall),
    Frame(sf::Vector2u(7, 11), ContentKind::None),
    Frame(sf::Vector2u(8, 11), ContentKind::None),
    Frame(sf::Vector2u(9, 11), ContentKind::None),
    Frame(sf::Vector2u(10, 11), ContentKind::None),
    Frame(sf::Vector2u(11, 11), ContentKind::None),
    Frame(sf::Vector2u(12, 11), ContentKind::None),
    Frame(sf::Vector2u(13, 11), ContentKind::None),
    Frame(sf::Vector2u(14, 11), ContentKind::Wall),
    Frame(sf::Vector2u(15, 11), ContentKind::Dot),
    Frame(sf::Vector2u(16, 11), ContentKind::Wall),
    Frame(sf::Vector2u(17, 11), ContentKind::Border),
    Frame(sf::Vector2u(18, 11), ContentKind::Border),
    Frame(sf::Vector2u(19, 11), ContentKind::Border),
    Frame(sf::Vector2u(20, 11), ContentKind::Border),
    // line 12
    Frame(sf::Vector2u(0, 12), ContentKind::Border),
    Frame(sf::Vector2u(1, 12), ContentKind::Wall),
    Frame(sf::Vector2u(2, 12), ContentKind::Wall),
    Frame(sf::Vector2u(3, 12), ContentKind::Wall),
    Frame(sf::Vector2u(4, 12), ContentKind::Wall),
    Frame(sf::Vector2u(5, 12), ContentKind::Dot),
    Frame(sf::Vector2u(6, 12), ContentKind::Wall),
    Frame(sf::Vector2u(7, 12), ContentKind::None),
    Frame(sf::Vector2u(8, 12), ContentKind::Wall),
    Frame(sf::Vector2u(9, 12), ContentKind::Wall),
    Frame(sf::Vector2u(10, 12), ContentKind::Wall),
    Frame(sf::Vector2u(11, 12), ContentKind::Wall),
    Frame(sf::Vector2u(12, 12), ContentKind::Wall),
    Frame(sf::Vector2u(13, 12), ContentKind::None),
    Frame(sf::Vector2u(14, 12), ContentKind::Wall),
    Frame(sf::Vector2u(15, 12), ContentKind::Dot),
    Frame(sf::Vector2u(16, 12), ContentKind::Wall),
    Frame(sf::Vector2u(17, 12), ContentKind::Wall),
    Frame(sf::Vector2u(18, 12), ContentKind::Wall),
    Frame(sf::Vector2u(19, 12), ContentKind::Wall),
    Frame(sf::Vector2u(20, 12), ContentKind::Border),
    // line 13
    Frame(sf::Vector2u(0, 13), ContentKind::Border),
    Frame(sf::Vector2u(1, 13), ContentKind::Wall),
    Frame(sf::Vector2u(2, 13), ContentKind::Dot),
    Frame(sf::Vector2u(3, 13), ContentKind::Dot),
    Frame(sf::Vector2u(4, 13), ContentKind::Dot),
    Frame(sf::Vector2u(5, 13), ContentKind::Dot),
    Frame(sf::Vector2u(6, 13), ContentKind::Dot),
    Frame(sf::Vector2u(7, 13), ContentKind::Dot),
    Frame(sf::Vector2u(8, 13), ContentKind::Dot),
    Frame(sf::Vector2u(9, 13), ContentKind::Dot),
    Frame(sf::Vector2u(10, 13), ContentKind::Wall),
    Frame(sf::Vector2u(11, 13), ContentKind::Dot),
    Frame(sf::Vector2u(12, 13), ContentKind::Dot),
    Frame(sf::Vector2u(13, 13), ContentKind::Dot),
    Frame(sf::Vector2u(14, 13), ContentKind::Dot),
    Frame(sf::Vector2u(15, 13), ContentKind::Dot),
    Frame(sf::Vector2u(16, 13), ContentKind::Dot),
    Frame(sf::Vector2u(17, 13), ContentKind::Dot),
    Frame(sf::Vector2u(18, 13), ContentKind::Dot),
    Frame(sf::Vector2u(19, 13), ContentKind::Wall),
    Frame(sf::Vector2u(20, 13), ContentKind::Border),
    // line 14
    Frame(sf::Vector2u(0, 14), ContentKind::Border),
    Frame(sf::Vector2u(1, 14), ContentKind::Wall),
    Frame(sf::Vector2u(2, 14), ContentKind::Dot),
    Frame(sf::Vector2u(3, 14), ContentKind::Wall),
    Frame(sf::Vector2u(4, 14), ContentKind::Wall),
    Frame(sf::Vector2u(5, 14), ContentKind::Dot),
    Frame(sf::Vector2u(6, 14), ContentKind::Wall),
    Frame(sf::Vector2u(7, 14), ContentKind::Wall),
    Frame(sf::Vector2u(8, 14), ContentKind::Wall),
    Frame(sf::Vector2u(9, 14), ContentKind::Dot),
    Frame(sf::Vector2u(10, 14), ContentKind::Wall),
    Frame(sf::Vector2u(11, 14), ContentKind::Dot),
    Frame(sf::Vector2u(12, 14), ContentKind::Wall),
    Frame(sf::Vector2u(13, 14), ContentKind::Wall),
    Frame(sf::Vector2u(14, 14), ContentKind::Wall),
    Frame(sf::Vector2u(15, 14), ContentKind::Dot),
    Frame(sf::Vector2u(16, 14), ContentKind::Wall),
    Frame(sf::Vector2u(17, 14), ContentKind::Wall),
    Frame(sf::Vector2u(18, 14), ContentKind::Dot),
    Frame(sf::Vector2u(19, 14), ContentKind::Wall),
    Frame(sf::Vector2u(20, 14), ContentKind::Border),
    // line 15
    Frame(sf::Vector2u(0, 15), ContentKind::Border),
    Frame(sf::Vector2u(1, 15), ContentKind::Wall),
    Frame(sf::Vector2u(2, 15), ContentKind::Energizer),
    Frame(sf::Vector2u(3, 15), ContentKind::Dot),
    Frame(sf::Vector2u(4, 15), ContentKind::Wall),
    Frame(sf::Vector2u(5, 15), ContentKind::Dot),
    Frame(sf::Vector2u(6, 15), ContentKind::Dot),
    Frame(sf::Vector2u(7, 15), ContentKind::Dot),
    Frame(sf::Vector2u(8, 15), ContentKind::Dot),
    Frame(sf::Vector2u(9, 15), ContentKind::Dot),
    Frame(sf::Vector2u(10, 15), ContentKind::None),
    Frame(sf::Vector2u(11, 15), ContentKind::Dot),
    Frame(sf::Vector2u(12, 15), ContentKind::Dot),
    Frame(sf::Vector2u(13, 15), ContentKind::Dot),
    Frame(sf::Vector2u(14, 15), ContentKind::Dot),
    Frame(sf::Vector2u(15, 15), ContentKind::Dot),
    Frame(sf::Vector2u(16, 15), ContentKind::Wall),
    Frame(sf::Vector2u(17, 15), ContentKind::Dot),
    Frame(sf::Vector2u(18, 15), ContentKind::Energizer),
    Frame(sf::Vector2u(19, 15), ContentKind::Wall),
    Frame(sf::Vector2u(20, 15), ContentKind::Border),
    // line 16
    Frame(sf::Vector2u(0, 16), ContentKind::Border),
    Frame(sf::Vector2u(1, 16), ContentKind::Wall),
    Frame(sf::Vector2u(2, 16), ContentKind::Wall),
    Frame(sf::Vector2u(3, 16), ContentKind::Dot),
    Frame(sf::Vector2u(4, 16), ContentKind::Wall),
    Frame(sf::Vector2u(5, 16), ContentKind::Dot),
    Frame(sf::Vector2u(6, 16), ContentKind::Wall),
    Frame(sf::Vector2u(7, 16), ContentKind::Dot),
    Frame(sf::Vector2u(8, 16), ContentKind::Wall),
    Frame(sf::Vector2u(9, 16), ContentKind::Wall),
    Frame(sf::Vector2u(10, 16), ContentKind::Wall),
    Frame(sf::Vector2u(11, 16), ContentKind::Wall),
    Frame(sf::Vector2u(12, 16), ContentKind::Wall),
    Frame(sf::Vector2u(13, 16), ContentKind::Dot),
    Frame(sf::Vector2u(14, 16), ContentKind::Wall),
    Frame(sf::Vector2u(15, 16), ContentKind::Dot),
    Frame(sf::Vector2u(16, 16), ContentKind::Wall),
    Frame(sf::Vector2u(17, 16), ContentKind::Dot),
    Frame(sf::Vector2u(18, 16), ContentKind::Wall),
    Frame(sf::Vector2u(19, 16), ContentKind::Wall),
    Frame(sf::Vector2u(20, 16), ContentKind::Border),
    // line 17
    Frame(sf::Vector2u(0, 17), ContentKind::Border),
    Frame(sf::Vector2u(1, 17), ContentKind::Wall),
    Frame(sf::Vector2u(2, 17), ContentKind::Dot),
    Frame(sf::Vector2u(3, 17), ContentKind::Dot),
    Frame(sf::Vector2u(4, 17), ContentKind::Dot),
    Frame(sf::Vector2u(5, 17), ContentKind::Dot),
    Frame(sf::Vector2u(6, 17), ContentKind::Wall),
    Frame(sf::Vector2u(7, 17), ContentKind::Dot),
    Frame(sf::Vector2u(8, 17), ContentKind::Dot),
    Frame(sf::Vector2u(9, 17), ContentKind::Dot),
    Frame(sf::Vector2u(10, 17), ContentKind::Wall),
    Frame(sf::Vector2u(11, 17), ContentKind::Dot),
    Frame(sf::Vector2u(12, 17), ContentKind::Dot),
    Frame(sf::Vector2u(13, 17), ContentKind::Dot),
    Frame(sf::Vector2u(14, 17), ContentKind::Wall),
    Frame(sf::Vector2u(15, 17), ContentKind::Dot),
    Frame(sf::Vector2u(16, 17), ContentKind::Dot),
    Frame(sf::Vector2u(17, 17), ContentKind::Dot),
    Frame(sf::Vector2u(18, 17), ContentKind::Dot),
    Frame(sf::Vector2u(19, 17), ContentKind::Wall),
    Frame(sf::Vector2u(20, 17), ContentKind::Border),
    // line 18
    Frame(sf::Vector2u(0, 18), ContentKind::Border),
    Frame(sf::Vector2u(1, 18), ContentKind::Wall),
    Frame(sf::Vector2u(2, 18), ContentKind::Dot),
    Frame(sf::Vector2u(3, 18), ContentKind::Wall),
    Frame(sf::Vector2u(4, 18), ContentKind::Wall),
    Frame(sf::Vector2u(5, 18), ContentKind::Wall),
    Frame(sf::Vector2u(6, 18), ContentKind::Wall),
    Frame(sf::Vector2u(7, 18), ContentKind::Wall),
    Frame(sf::Vector2u(8, 18), ContentKind::Wall),
    Frame(sf::Vector2u(9, 18), ContentKind::Dot),
    Frame(sf::Vector2u(10, 18), ContentKind::Wall),
    Frame(sf::Vector2u(11, 18), ContentKind::Dot),
    Frame(sf::Vector2u(12, 18), ContentKind::Wall),
    Frame(sf::Vector2u(13, 18), ContentKind::Wall),
    Frame(sf::Vector2u(14, 18), ContentKind::Wall),
    Frame(sf::Vector2u(15, 18), ContentKind::Wall),
    Frame(sf::Vector2u(16, 18), ContentKind::Wall),
    Frame(sf::Vector2u(17, 18), ContentKind::Wall),
    Frame(sf::Vector2u(18, 18), ContentKind::Dot),
    Frame(sf::Vector2u(19, 18), ContentKind::Wall),
    Frame(sf::Vector2u(20, 18), ContentKind::Border),
    // line 19
    Frame(sf::Vector2u(0, 19), ContentKind::Border),
    Frame(sf::Vector2u(1, 19), ContentKind::Wall),
    Frame(sf::Vector2u(2, 19), ContentKind::Dot),
    Frame(sf::Vector2u(3, 19), ContentKind::Dot),
    Frame(sf::Vector2u(4, 19), ContentKind::Dot),
    Frame(sf::Vector2u(5, 19), ContentKind::Dot),
    Frame(sf::Vector2u(6, 19), ContentKind::Dot),
    Frame(sf::Vector2u(7, 19), ContentKind::Dot),
    Frame(sf::Vector2u(8, 19), ContentKind::Dot),
    Frame(sf::Vector2u(9, 19), ContentKind::Dot),
    Frame(sf::Vector2u(10, 19), ContentKind::Dot),
    Frame(sf::Vector2u(11, 19), ContentKind::Dot),
    Frame(sf::Vector2u(12, 19), ContentKind::Dot),
    Frame(sf::Vector2u(13, 19), ContentKind::Dot),
    Frame(sf::Vector2u(14, 19), ContentKind::Dot),
    Frame(sf::Vector2u(15, 19), ContentKind::Dot),
    Frame(sf::Vector2u(16, 19), ContentKind::Dot),
    Frame(sf::Vector2u(17, 19), ContentKind::Dot),
    Frame(sf::Vector2u(18, 19), ContentKind::Dot),
    Frame(sf::Vector2u(19, 19), ContentKind::Wall),
    Frame(sf::Vector2u(20, 19), ContentKind::Border),
    // line 20
    Frame(sf::Vector2u(0, 20), ContentKind::Border),
    Frame(sf::Vector2u(1, 20), ContentKind::Wall),
    Frame(sf::Vector2u(2, 20), ContentKind::Wall),
    Frame(sf::Vector2u(3, 20), ContentKind::Wall),
    Frame(sf::Vector2u(4, 20), ContentKind::Wall),
    Frame(sf::Vector2u(5, 20), ContentKind::Wall),
    Frame(sf::Vector2u(6, 20), ContentKind::Wall),
    Frame(sf::Vector2u(7, 20), ContentKind::Wall),
    Frame(sf::Vector2u(8, 20), ContentKind::Wall),
    Frame(sf::Vector2u(9, 20), ContentKind::Wall),
    Frame(sf::Vector2u(10, 20), ContentKind::Wall),
    Frame(sf::Vector2u(11, 20), ContentKind::Wall),
    Frame(sf::Vector2u(12, 20), ContentKind::Wall),
    Frame(sf::Vector2u(13, 20), ContentKind::Wall),
    Frame(sf::Vector2u(14, 20), ContentKind::Wall),
    Frame(sf::Vector2u(15, 20), ContentKind::Wall),
    Frame(sf::Vector2u(16, 20), ContentKind::Wall),
    Frame(sf::Vector2u(17, 20), ContentKind::Wall),
    Frame(sf::Vector2u(18, 20), ContentKind::Wall),
    Frame(sf::Vector2u(19, 20), ContentKind::Wall),
    Frame(sf::Vector2u(20, 20), ContentKind::Border),
};

class World {
public:
  World();
  ~World();
  void Update();
  void Render(sf::RenderWindow &render_window);
};

#endif