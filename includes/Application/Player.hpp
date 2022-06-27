/*
** EPITECH PROJECT, 2022
** Application.hpp
** File description:
** Header for the creation of the application into game engine
*/

#pragma once

#include <iostream>
#include "../../libs/Raylib/includes/Keyboard.hpp"
#include "../../libs/Raylib/includes/Gamepad.hpp"

namespace Engine {
    class Player {
        public:
            // Ctor
            explicit Player(std::string &inputType, unsigned int id = 0);

            // Dtor
            ~Player();

            // Member functions
            bool isPressed(int keyOrButton);
            bool isDown(int keyOrButton);
            bool isReleased(int keyOrButton);
            bool isUp(int keyOrButton);
            int getPressed();

        private:
            std::string _type;
            std::unique_ptr<Raylib::Keyboard> _keyboard;
            std::unique_ptr<Raylib::Gamepad> _gamepad;
    };
}