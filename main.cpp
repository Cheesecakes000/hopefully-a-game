#include "display.h"
#include <iostream>

int main() {
    // Create a window
    // Resolution in unsigned int
    sf::RenderWindow window(sf::VideoMode({400u, 300u}), "SFML Test");
    sf::RectangleShape player = spawnPlayer();

    while (window.isOpen()) {
        // Process events
        while (const std::optional event = window.pollEvent()) {

            // Close window: exit
            if (event->is<sf::Event::Closed>()) {
                window.close();
        }
            // Allow input control for player
            controlPlayer(player);
            
            // Clear screen
            window.clear();

            // Show player
            window.draw(player);
            
            // Display the window
            window.display();   
    }
}
    return EXIT_SUCCESS;
}
