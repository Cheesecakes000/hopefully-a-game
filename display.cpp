#include <SFML/Graphics.hpp>
#include <iostream>
#include "display.h"

void open_window() 
{
    // Create a window
    sf::RenderWindow window(sf::VideoMode({400u, 300u}), "SFML Test");

    while (window.isOpen())
    {
        // Process events
        while (const std::optional event = window.pollEvent())
        {
            // Close window: exit
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.display();
        
    }
}
