
#ifndef NIBBLES_SNAKESECTION_H
#define NIBBLES_SNAKESECTION_H
#include <SFML/Graphics.hpp>
using namespace sf;

class SnakeSection {
private:
    Vector2f position;
    RectangleShape section;

public:
    explicit SnakeSection(Vector2f startPosition);
    Vector2f getPosition();
    void setPosition(Vector2f newPosition);

    RectangleShape getShape();

    void update();

};


#endif //NIBBLES_SNAKESECTION_H
