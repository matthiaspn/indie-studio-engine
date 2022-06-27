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
    class Application {
        public:
            // Ctor
            Application(unsigned int width, unsigned int height, const
            std::string &titleWindow, std::vector<std::string> players);

            // Dtor
            ~Application();

            // Member functions
            void run();
            void update();

        private:
            // Objects
            std::unique_ptr<Raylib::Window> _window;
            std::unique_ptr<Raylib::Mouse> _mouse;
            std::vector<std::shared_ptr<Player>> _players;
            std::unique_ptr<Engine::Resources::Loader> _assets;
            std::unique_ptr<SceneManager> _sceneManager;
            std::unique_ptr<AudioManager> _audioManager;
    };
}