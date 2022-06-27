<div id="top"></div>
<!--
*** Thanks for checking out the Best-README-Template. If you have a suggestion
*** that would make this better, please fork the repo and create a pull request
*** or simply open an issue with the tag "enhancement".
*** Don't forget to give the project a star!
*** Thanks again! Now go create something AMAZING! :D
-->



<!-- PROJECT LOGO -->
<br />
<div align="center">
    <img src="https://upload.wikimedia.org/wikipedia/fr/thumb/a/a5/Bomberman_Logo.svg/1280px-Bomberman_Logo.svg.png" alt="Logo">

<h3 align="center">Indie Studio - Engine</h3>
<img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="Logo">
<img src="https://img.shields.io/badge/Raylib-black?style=for-the-badge&logo=GNU&logoColor=white" alt="Raylib logo">
<p align="center">
    An engine based on the Raylib graphic library
  </p>
</div>

<!-- ABOUT THE PROJECT -->
## About the project

During my second year at Epitech, I had an end-of-year project that involved the reproduction of the famous game 
Bomberman. We had been advised to create an engine in order to simplify the design of our own Bomberman. I 
volunteered to do it.

At present, the engine includes the following elements:
* Raylib encapsulation (Only what is necessary)
* Scenes management
* Audio management
* Several components (Button, Text, Image, etc)
* Creating a window and initializing its dependencies (Mouse, Keyboard or joystick for each player)
* Resources management (without Entity Component System which was developed by another mate)

Unfortunately, I couldn't implement all the features I wanted which would have made this engine completely abstract.


<!-- GETTING STARTED -->
## Project compilation

The compilation of the project gives a static library that you just have to call when compiling your game.

### Prerequisites

To compile, you need the following items:
* CMake
* C++

### Installation

   ```sh
   mkdir build && cd build
   ```
   ```sh
   cmake --build .. build
   ```


<!-- ROADMAP -->
## Roadmap

I intend to continue the development of this engine outside of the project that was initially entrusted to us. Here is a list of the features I want to integrate in the future:

- [x] Fixing the bug on the Button component
- [ ] Add a component to manage collisions on the map
- [ ] Add a component to manage the camera simply


<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

I would like to thank the group that I had during the realization of this project

* [Thibaud Fontaine](https://github.com/FontaineThibaud)
* [Pierre-Jean Descarpentries](https://github.com/Pierre-Jean-Descarpentries)
* [Quentin Dubois](https://github.com/quentindubois-epitech)
* [Rayan Benguedih](https://github.com/rayanBenguedih)