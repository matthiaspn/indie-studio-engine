/*
** EPITECH PROJECT, 2022
** Application.hpp
** File description:
** Header for the creation of the application into game engine
*/

#pragma once

#include "../../libs/Raylib/includes/Window.hpp"
#include "../../libs/Raylib/includes/Mouse.hpp"
#include "../../libs/Raylib/includes/Keyboard.hpp"
#include "../../libs/Raylib/includes/Gamepad.hpp"
#include "../Scenes/SceneManager.hpp"
#include "../Audio/AudioManager.hpp"
#include "../Resources/Loader.hpp"
#include "Player.hpp"
#include <memory>
#include <vector>

namespace Engine {

    /**
    * @brief Application and its dependencies
    *
    */
    class Application {
        public:
            /**
             * @brief Create the Application object (Window)
             *
             * @param width Width of the window
             * @param height Height of the window
             * @param titleWindow Title of the window
             * @param players Board containing the game support (keyboard or gamepad) of the players. The number of media declared will dictate the number of players
             *
             */
            Application(unsigned int width, unsigned int height, const
            std::string &titleWindow, std::vector<std::string> players);

            /**
             * @brief Destroy the Application object
             *
             */
            ~Application();

            /**
             * @brief Launch the window
             *
             */
            void run();

            /**
             * @brief Update the content of the window
             *
             */
            void update();

        private:
            /**
            * @brief A pointer to window functions
            *
            */
            std::unique_ptr<Raylib::Window> _window;
            /**
            * @brief A pointer to mouse functions
            *
            */
            std::unique_ptr<Raylib::Mouse> _mouse;
            /**
            * @brief An array of pointers containing the functions of the player's game support
            *
            */
            std::vector<std::shared_ptr<Player>> _players;
            /**
            * @brief A pointer to resources loaded
            *
            */
            std::unique_ptr<Engine::Resources::Loader> _assets;
            /**
            * @brief A pointer to the scene manager
            *
            */
            std::unique_ptr<SceneManager> _sceneManager;
            /**
            * @brief A pointer to the audio manager
            *
            */
            std::unique_ptr<AudioManager> _audioManager;
    };
}