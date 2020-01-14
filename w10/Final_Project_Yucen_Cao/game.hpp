//
//  game.hpp
//*********************************************************************
// Program name: Final project
// Author: YUCEN CAO - CS162 Spring 2019
// Date: June 11, 2019
// Description: In the final project, you will be able to design and implement a one-player, text-based game where the player can move through spaces to get items and accomplish goals.
// It is a collecting item game, when the player collect all the item, it will win. 
// The max step is 11, step will reduce by each move.
// Every room has different items, and some of the room is very dangerous
// *********************************************************************

#ifndef game_hpp
#define game_hpp

#include <stdio.h>
#include "menu.hpp"
#include "Living_room.hpp"
#include "Kitchen.hpp"
#include "Bedroom.hpp"
#include "Balcony.hpp"
#include "Dog_room.hpp"

//check if all the items be collected
bool check_container(vector<char> container);

bool game(vector<char>* container, int step);

#endif /* game_hpp */
