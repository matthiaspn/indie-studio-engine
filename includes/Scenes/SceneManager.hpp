/*
** EPITECH PROJECT, 2022
** SceneManager.hpp
** File description:
** Header of scene manager
*/

#pragma once

#include "IScene.hpp"
#include <iostream>
#include <memory>
#include <map>

namespace Engine {
    class SceneManager {
        public:
            // Ctor
            SceneManager();

            // Dtor
            ~SceneManager();

            // Member functions
            std::shared_ptr<IScene> getCurrentScene() const;
            void add(const std::shared_ptr<IScene>& scene);
            void load(unsigned int sceneId);
            void remove(unsigned int sceneId);

        private:

            // Objects
            std::map<unsigned int, std::shared_ptr<IScene> > _sceneList;
            std::pair<unsigned int, std::shared_ptr<IScene> > _currentScene;
    };
}

