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

//start or not
int menu_start();

//end or not
int menu_end();

//number of fighters for both team
int menu_teamNumber();

//enter the information for each fighter
void menu_eachFighter(const string team, int mark, int& type, string& name);

//display the content of the loser pile or not 
int menu_loser();

#endif /* menu_hpp */
