/*
** EPITECH PROJECT, 2022
** Application.hpp
** File description:
** Header for the creation of the application into game engine
*/

#include "../../includes/Resources/Loader.hpp"

Engine::Resources::Loader::Loader()
{
    std::string path = "assets/fonts";

    for (const auto &entry : std::filesystem::directory_iterator(path))
        _fonts.push_back(entry.path());
    path = "assets/models";
    for (const auto &entry : std::filesystem::directory_iterator(path))
        _models.push_back(entry.path());
    path = "assets/sounds";
    for (const auto &entry : std::filesystem::directory_iterator(path))
        _sounds.push_back(entry.path());
    path = "assets/musics";
    for (const auto &entry : std::filesystem::directory_iterator(path))
        _musics.push_back(entry.path());
}

Engine::Resources::Loader::~Loader()
{
}

std::vector<std::string> Engine::Resources::Loader::getFontsLoaded()
{
    return _fonts;
}

std::vector<std::string> Engine::Resources::Loader::getModelsLoaded()
{
    return _models;
}

std::vector<std::string> Engine::Resources::Loader::getSoundsLoaded()
{
    return _sounds;
}

std::vector<std::string> Engine::Resources::Loader::getMusicsLoaded()
{
    return _musics;
}