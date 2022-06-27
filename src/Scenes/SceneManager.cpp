/*
** EPITECH PROJECT, 2022
** SceneManager.cpp
** File description:
** Scene manager
*/

#include "../../includes/Scenes/SceneManager.hpp"

Engine::SceneManager::SceneManager()
{
}

Engine::SceneManager::~SceneManager()
{
}

std::shared_ptr<Engine::IScene> Engine::SceneManager::getCurrentScene() const
{
    return _currentScene.second;
}

void Engine::SceneManager::add(const std::shared_ptr<Engine::IScene> &scene)
{
    if (this->_sceneList.empty())
        _sceneList[this->_sceneList.size()] = scene;
    else
        _sceneList[0] = scene;
}

void Engine::SceneManager::load(unsigned int sceneId)
{
    auto sceneIterator = _sceneList.find(sceneId);

    if (sceneIterator != _sceneList.end()) {
        getCurrentScene()->clear();
        sceneIterator->second->initialize();
        _currentScene = std::pair<unsigned int, std::shared_ptr<IScene> >(sceneIterator->first, sceneIterator->second);
    } else {
        std::cerr << "Error: Scene not found" << std::endl;
    }
}

void Engine::SceneManager::remove(unsigned int sceneId)
{
    auto sceneIterator = _sceneList.find(sceneId);

    if (sceneIterator != _sceneList.end()) {
        if (sceneIterator->second == getCurrentScene())
            std::cerr << "Error: You cannot remove the current scene on the list" << std::endl;
        _sceneList.erase(sceneIterator);
    } else {
        std::cerr << "Error: Scene not found" << std::endl;
    }
}