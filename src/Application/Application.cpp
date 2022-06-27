/*
** EPITECH PROJECT, 2022
** Application.cpp
** File description:
** Creation of the application into engine
*/

#include "../../includes/Application/Application.hpp"

Engine::Application::Application(unsigned int width, unsigned int height,
                                 const std::string &titleWindow, std::vector<std::string> players)
{
    _window = std::make_unique<Raylib::Window>(width, height, titleWindow);
    _window->setMaxFPS(60);
    for (int i = 0; i < players.size(); i++)
        _players.push_back(std::make_shared<Engine::Player>(players[i], players.size()));
    _assets = std::make_unique<Engine::Resources::Loader>();
    _mouse = std::make_unique<Raylib::Mouse>();
    _sceneManager = std::make_unique<Engine::SceneManager>();
    _audioManager = std::make_unique<Engine::AudioManager>();
}

Engine::Application::~Application()
{
    _window->close();
}

void Engine::Application::run()
{
    while (!_window->shouldClose())
        update();
}

void Engine::Application::update()
{
    _window->beginDraw();
    _window->clearBackground(Raylib::Color(255, 255, 255, 255));
    _sceneManager->getCurrentScene()->update();
    _window->endDraw();
}

