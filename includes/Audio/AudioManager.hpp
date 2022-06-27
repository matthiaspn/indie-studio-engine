/*
** EPITECH PROJECT, 2022
** Application.hpp
** File description:
** Header for the creation of the application into game engine
*/

#pragma once

#include <string>
#include <iostream>
#include <unordered_map>
#include "../../libs/Raylib/includes/Music.hpp"
#include "../../libs/Raylib/includes/Sound.hpp"

namespace Engine {
    class AudioManager {
        public:
            // Ctor
            AudioManager();

            // Dtor
            ~AudioManager();

            // Member functions
            void createMusicPlaylist(const std::string &name);
            void createSoundPlaylist(const std::string &name);
            void addIntoMusicPlaylist(const std::string &playlistName, const std::string &musicName, const
            std::string &musicPath);
            void addIntoSoundPlaylist(const std::string &playlistName, const std::string &soundName, const std:string
            &soundPath);
            void removeIntoSoundPlaylist(const std::string &playlistName, const std::string &soundName);
            void removeIntoMusicPlaylist(const std::string &playlistName, const std::string &musicName);
            void removeMusicPlaylist(const std::string &name);
            void removeSoundPlaylist(const std::string &name);

            // Functions to interact with playlist
            std::shared_ptr<Raylib::Sound> getSound(const std::string &playlistName, const std::string &soundName);
            std::shared_ptr<Raylib::Music> getMusic(const std::string &playlistName, const std::string &musicName);

        private:
            // Objects
            std::unordered_map<std::string, std::unordered_map<std::string, std::shared_ptr<Raylib::Sound>>>
            _soundPlaylists;
            std::unordered_map<std::string, std::unordered_map<std::string, std::shared_ptr<Raylib::Music>>>
            _musicPlaylists;
    };
}