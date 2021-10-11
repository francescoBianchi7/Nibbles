//
// Created by bianc on 27/09/2021.
//
#ifndef NIBBLES_WALL_H
#define NIBBLES_WALL_H

#include <SFML/Graphics.hpp>

using namespace sf;

class Wall {
private:
    RectangleShape wallShape;

public:
    Wall(Vector2f position, Vector2f size);

    RectangleShape getShape();

};

#endif //NIBBLES_WALL_H
