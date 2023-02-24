#include <memory>
#include <random>

#include "SFML/Graphics.hpp"

#include "Context.hpp"
#include "State.hpp"
#include "Game.hpp"

int main(){
    srand(0);
    std::shared_ptr<Context> context;
    context = std::make_shared<Context>();
    context->window->create(sf::VideoMode::getDesktopMode(), "RayCasting");
    context->states = std::make_unique<Game>(context);

    sf::Clock clock = sf::Clock();
    while (context->window->isOpen())
    {
        sf::Time timer = clock.restart();
        sf::Event e;
        while (context->window->pollEvent(e))
        {
            if(e.type == sf::Event::Closed) context->window->close();
            context->states->HandleEvents(e);
        }
        context->states->Update(timer);
        context->states->Draw();
    }

}