#include "Game.hpp"

Game::Game(std::shared_ptr<Context>& context) {
    m_context = context;
    m_elapsedTime = 0;
}

void Game::Update(sf::Time deltaTime) {
    m_elapsedTime = deltaTime.asMilliseconds();
}
void Game::HandleEvents(sf::Event pollEvent) {
    
}
void Game::Draw(){
    m_context->window->clear(sf::Color::White);
    m_context->window->display();
}