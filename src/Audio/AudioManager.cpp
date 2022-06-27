/*
** EPITECH PROJECT, 2022
** Application.hpp
** File description:
** Header for the creation of the application into game engine
*/

#include "../../includes/Audio/AudioManager.hpp"

Engine::AudioManager::AudioManager()
= default;

Engine::AudioManager::~AudioManager()
{
}

void Engine::AudioManager::createSoundPlaylist(const std::string &name)
{
    _soundPlaylists.insert(std::make_pair(name, std::unordered_map<std::string, std::shared_ptr<Raylib::Sound>>()));
}

void Engine::AudioManager::createMusicPlaylist(const std::string &name)
{
    _musicPlaylists.insert(std::make_pair(name, std::unordered_map<std::string, std::shared_ptr<Raylib::Music>>()));
}

void Engine::AudioManager::addIntoMusicPlaylist(const std::string &playlistName, const std::string &musicName, const
std::string &musicPath)
{
    _musicPlaylists[playlistName].insert(std::make_pair(musicName, std::make_shared<Raylib::Music>(musicPath)));
}

void Engine::AudioManager::addIntoSoundPlaylist(const std::string &playlistName, const std::string &soundName, const
std::string &soundPath)
{
    _soundPlaylists[playlistName].insert(std::make_pair(soundName, std::make_shared<Raylib::Sound>(soundPath)));
}

void Engine::AudioManager::removeIntoSoundPlaylist(const std::string &playlistName, const std::string &soundName)
{
    _soundPlaylists[playlistName].erase(soundName);
}

void Engine::AudioManager::removeIntoMusicPlaylist(const std::string &playlistName, const std::string &musicName)
{
    _musicPlaylists[playlistName].erase(musicName);
}

void Engine::AudioManager::removeMusicPlaylist(const std::string &name)
{
    _musicPlaylists.erase(name);
}

void Engine::AudioManager::removeSoundPlaylist(const std::string &name)
{
    _soundPlaylists.erase(name);
}

std::shared_ptr<Raylib::Sound> Engine::AudioManager::getSound(const std::string &playlistName, const std::string
&soundName)
{
    auto playlistIterator = _soundPlaylists.find(playlistName);

    if (playlistIterator != _soundPlaylists.end()) {
        auto soundIterator = playlistIterator->second.find(soundName);
        if (soundIterator != playlistIterator->second.end()) {
            return soundIterator->second;
        } else {
            std::cerr << "Error: Sound not found into playlist" << std::endl;
        }
    } else {
        std::cerr << "Error: Playlist not found" << std::endl;
    }
}

std::shared_ptr<Raylib::Music> Engine::AudioManager::getMusic(const std::string &playlistName, const std::string
&musicName)
{
    auto playlistIterator = _musicPlaylists.find(playlistName);

    if (playlistIterator != _musicPlaylists.end()) {
        auto musicIterator = playlistIterator->second.find(musicName);
        if (musicIterator != playlistIterator->second.end()) {
            return musicIterator->second;
        } else {
            std::cerr << "Error: Music not found into playlist" << std::endl;
        }
    } else {
        std::cerr << "Error: Playlist not found" << std::endl;
    }
}