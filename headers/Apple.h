//
// Created by bianc on 03/09/2021.
//

#ifndef NIBBLES_APPLE_H
#define NIBBLES_APPLE_H

#include <SFML/Graphics.hpp>

using namespace sf;

class Apple {
private:
    RectangleShape sprite;

public:
    Apple();

    void setPosition(Vector2f newPosition);
    RectangleShape getSprite();
};


#endif //NIBBLES_APPLE_H
