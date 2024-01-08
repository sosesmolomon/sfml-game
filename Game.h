#pragma once

#ifndef GAME_H
#define GAME_H


#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


/*
    Class that acts as the game engine
    wrapper class
*/
class Game
{
    private:

        //Window
        sf::RenderWindow* window;
        sf::VideoMode videoMode;
        sf::Event ev;


        //Game objects
        sf::RectangleShape enemy;

        // Private functions
        void initVariables();
        void initWindow();
        void initEnemies();


    public:
        // Constructions / Destructors
        Game();
        virtual ~Game();

        //Accessors
        const bool running() const;
        

        // Functions
        void pollEvents();
        void update();
        void render();
};

#endif
