#ifndef NIBBLES_ENGINE_HPP
#define NIBBLES_ENGINE_HPP

#include "SnakeSection.hpp"
#include "Apple.h"
#include <SFML/Graphics.hpp> //tell the linker to look in the include directories
#include <SFML/Graphics/RectangleShape.hpp>
#include <vector>
#include <deque>

using namespace sf;
using namespace std;


class Engine {
private:
    //Window
    Vector2f resolution;
    RenderWindow window;
    const unsigned int FPS=60;
    static const Time TimePerFrame;

    vector<SnakeSection> snake;

    int snakeDirection;
    deque<int> directionQueue; // queue for direction key presses
    int speed;
    int sectionsToAdd;

    Apple apple;

    Time timeSinceLastMove;
    int currentGameState;
    int lastGameState;

public:
    enum Direction { UP, RIGHT, DOWN, LEFT };
    enum GameState{RUNNING,PAUSED,GAMEOVER};
    Engine();
    void input();
    void addDirection(int newDirection);
    void update();
    void draw();

    void newSnake();
    void addSnakeSection();

    void moveApple();

    void togglePause();

    void run();

};


#endif //NIBBLES_ENGINE_HPP
