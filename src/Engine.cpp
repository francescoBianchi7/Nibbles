

#include "Engine.h"

const sf::Time Engine::TimePerFrame=seconds(1.f/60.f);
Engine::Engine(){
    resolution=Vector2f(800,600);
    window.create(VideoMode(resolution.x,resolution.y),"Nibbles",Style::Default);
    window.setFramerateLimit(FPS);

    newSnake();

}
//starting snake
void Engine::newSnake() {
    snake.clear();
    snake.emplace_back(Vector2f(100,100));
    snake.emplace_back(Vector2f(80,100));
    snake.emplace_back(Vector2f(60,100));
}
void Engine::addSnakeSection() {
    //just adding new section
    Vector2f newSectionPosition= snake[snake.size()-1].getPosition();
    snake.emplace_back(newSectionPosition);

}
void Engine::run() {
    //main game loop
    while(window.isOpen()){
        input();
        draw();
    }
}