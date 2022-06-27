/*
** EPITECH PROJECT, 2022
** Player.cpp
** File description:
** Header for player module
*/

#include "../../includes/Application/Player.hpp"

Engine::Player::Player(std::string &inputType, unsigned int id)
{
    std::transform(inputType.begin(), inputType.end(), inputType.begin(),
                   [](unsigned char c){return std::tolower(c); });
    if (inputType == "keyboard") {
        _type = inputType;
        _gamepad = nullptr;
        _keyboard = std::make_unique<Raylib::Keyboard>();
    } else {
        _type = inputType;
        _keyboard = nullptr;
        _gamepad = std::make_unique<Raylib::Gamepad>(id);
    }
}

Engine::Player::~Player()
= default;

bool Engine::Player::isPressed(int keyOrButton)
{
    return (_type == "keyboard" ? _keyboard->isKeyPressed(keyOrButton) :
    _gamepad->isButtonPressed(keyOrButton));
}

bool Engine::Player::isDown(int keyOrButton)
{
    return (_type == "keyboard" ? _keyboard->isKeyDown(keyOrButton) :
            _gamepad->isButtonDown(keyOrButton));
}

bool Engine::Player::isReleased(int keyOrButton)
{
    return (_type == "keyboard" ? _keyboard->isKeyReleased(keyOrButton) :
            _gamepad->isButtonReleased(keyOrButton));
}

bool Engine::Player::isUp(int keyOrButton)
{
    return (_type == "keyboard" ? _keyboard->isKeyUp(keyOrButton) :
            _gamepad->isButtonUp(keyOrButton));
}

int Engine::Player::getPressed()
{
    return (_type == "keyboard" ? _keyboard->getKeyPressed() : _gamepad->getButtonPressed());
}