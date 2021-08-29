
#ifndef NIBBLES_ENGINE_H
#define NIBBLES_ENGINE_H

#include "SnakeSection.h"
#include <SFML/Graphics.hpp> //tell the linker to look in the include directories
#include <SFML/Graphics/RectangleShape.hpp>
#include <vector>
using namespace sf;
using namespace std;


class Engine {
private:
    //Windosw
    Vector2f resolution;
    RenderWindow window;
    const unsigned int FPS=60;
    static const Time TimePerFrame;
    vector<SnakeSection> snake;

public:
    Engine();
    void input();

    void draw();

    void newSnake();
    void addSnakeSection();

    void run();

};


#endif //NIBBLES_ENGINE_H
