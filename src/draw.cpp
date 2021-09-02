#include "Engine.hpp"

void Engine::draw() {
    window.clear(Color::Black);

    //Draw apple
    window.draw(apple.getSprite());

    //Draw Snake Section
    for(auto & s :snake ){
        window.draw(s.getShape());
    }

    window.display();
}
