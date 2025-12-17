#include <SFML/Graphics.hpp>
#include <iostream>
#include "display.h"

const float movementSpeed = 4.0f;

sf::RectangleShape spawnPlayer() {

    sf::RectangleShape player;

    // Size in 2f for float
    player.setSize(sf::Vector2f(20, 20));
    player.setFillColor(sf::Color::Red);
    player.setPosition({5, 275});

    return player;
}

void controlPlayer(sf::RectangleShape &player) { 
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
        player.move({0.0f, -movementSpeed});
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
        player.move({-movementSpeed, 0.0f});
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
        player.move({0.0f, +movementSpeed});
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
        player.move({+movementSpeed, 0.0f});
    }
}