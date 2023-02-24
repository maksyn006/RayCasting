#ifndef STATE_HPP
#define STATE_HPP

#include <iostream>

#include "SFML/System/Time.hpp"
#include "SFML/Window/Event.hpp"

class State {
public:
    State(){
        std::cerr << "Empty State Init\n";
    }

    virtual void Update(sf::Time t) {}
    virtual void Draw() {}
    virtual void HandleEvents(sf::Event e) {}
};

#endif // STATE_HPP