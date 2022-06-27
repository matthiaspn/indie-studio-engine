/*
** EPITECH PROJECT, 2022
** Engine.hpp
** File description:
** Header for the creation of the engine
*/

#pragma once

#include "../libs/Raylib/includes/Window.hpp"
#include "Scenes/SceneManager.hpp"
#include "Application/Application.hpp"
#include <memory>

namespace Engine {
    class Engine {
        public:
            static Engine* getInstance();

            // Dtor
            ~Engine();

            // Member functions
            void createApp(unsigned int width, unsigned int height, const
            std::string &titleWindow, const std::vector<std::string> &players);

        private:
            // Ctor
            Engine();

            // Objects
            static Engine* _instance;
            std::unique_ptr<Application> _application;
    };
}