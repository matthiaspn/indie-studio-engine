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
    /**
    * @brief Player's game support (keyboard or gamepad)
    *
    */
    class Player {
        public:
            /**
             * @brief Initialize the player's game support
             *
             * @param inputType The type of support assigned to players (keyboard or gamepad only, other cases are considered as errors)
             * @param id The id required to identify the controller to the raylib
             *
             */
            explicit Player(std::string &inputType, unsigned int id = 0);

            /**
             * @brief Destroy the Player object
             *
             */
            ~Player();

            /**
             * @brief Check if the key or button was pressed
             *
             * @param keyOrButton code to check
             * @return true The key is currently pressed
             * @return false The key isn't currently pressed
             */
            bool isPressed(int keyOrButton);

            /**
             * @brief Check if the key or button was down
             *
             * @param keyOrButton code to check
             * @return true The key is currently down
             * @return false The key isn't currently down
             */
            bool isDown(int keyOrButton);

            /**
             * @brief Check if the key or button was released
             *
             * @param keyOrButton code to check
             * @return true The key is currently released
             * @return false The key isn't currently released
             */
            bool isReleased(int keyOrButton);

            /**
             * @brief Check if the key or button was up
             *
             * @param keyOrButton code to check
             * @return true The key is currently up
             * @return false The key isn't currently up
             */
            bool isUp(int keyOrButton);

            /**
             * @brief Get the key or button pressed
             *
             * @return ASCII code of the key or button pressed
             */
            int getPressed();

        private:
            /**
             * @brief The type of game support
             *
             */
            std::string _type;

            /**
             * @brief A pointer to keyboard functions (null pointer if the game support is "gamepad"
             *
             */
            std::unique_ptr<Raylib::Keyboard> _keyboard;

            /**
             * @brief A pointer to gamepad functions (null pointer if the game support is "keyboard"
             *
             */
            std::unique_ptr<Raylib::Gamepad> _gamepad;
    };
}