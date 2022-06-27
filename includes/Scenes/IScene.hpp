/*
** EPITECH PROJECT, 2022
** IScene.hpp
** File description:
** Interface for scene
*/

#pragma once

namespace Engine {
    class IScene {
        public:
            // Ctor
            IScene(){}

            // Dtor
            virtual ~IScene(){}

            // Member functions
            virtual void initialize() = 0;
            virtual void update() = 0;
            virtual void clear() = 0;
    };
}