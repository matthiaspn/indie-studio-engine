/*
** EPITECH PROJECT, 2022
** Application.hpp
** File description:
** Header for the creation of the application into game engine
*/

#pragma once

#include <iostream>
#include <vector>
#include <filesystem>

namespace Engine::Resources {
    class Loader {
        public:
            // Ctor
            Loader();

            // Dtor
            ~Loader();

            // Member functions
            std::vector<std::string> getFontsLoaded();
            std::vector<std::string> getModelsLoaded();
            std::vector<std::string> getSoundsLoaded();
            std::vector<std::string> getMusicsLoaded();

        private:
            // Objects
            std::vector<std::string> _fonts;
            std::vector<std::string> _models;
            std::vector<std::string> _sounds;
            std::vector<std::string> _musics;
    };
}
