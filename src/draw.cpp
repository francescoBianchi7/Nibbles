#include "Engine.h"

void Engine::draw() {
    window.clear(Color::Black);

    //Draw Snake
    for(auto & s :snake ){
        window.draw(s.getShape());
    }

    window.display();
}
