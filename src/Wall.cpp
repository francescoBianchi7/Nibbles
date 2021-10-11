//
// Created by bianc on 27/09/2021.
//

#include "wall.h"


Wall::Wall(Vector2f position, Vector2f size) {
    wallShape.setSize(size);
    wallShape.setFillColor(Color::White);
    wallShape.setPosition(position);
}

RectangleShape Wall::getShape() {
    return wallShape;
}