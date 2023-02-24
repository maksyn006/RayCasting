#include <memory>

#include "SFML/Graphics.hpp"

#include "State.hpp"
#include "Context.hpp"

class Game : public State {
private:
    std::shared_ptr<Context> m_context;
    float m_elapsedTime;
public:
    Game(std::shared_ptr<Context>& context);

    void Draw() override;
    void HandleEvents(sf::Event event) override;
    void Update(sf::Time deltaTime) override;
};