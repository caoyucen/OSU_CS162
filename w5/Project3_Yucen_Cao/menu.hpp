//*********************************************************************
// Project3
// Program name: menu.hpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#ifndef menu_hpp
#define menu_hpp

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include "input_validation.hpp"
using std::string;
using std::cout;
using std::endl;

//quit or not
int menu_end();

//choose the two characters to fight
int menu_choose_character();

#endif /* menu_hpp */
