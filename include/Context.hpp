#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include <memory>

#include "SFML/Graphics.hpp"

#include "State.hpp"

struct Context
{
    std::unique_ptr<sf::RenderWindow> window;
    std::unique_ptr<State> states;
    Context(){
        window = std::make_unique<sf::RenderWindow>();
    }
};


#endif // CONTEXT_HPP