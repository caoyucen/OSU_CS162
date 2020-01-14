//
//  menu.hpp
//*********************************************************************
// Program name: Final project
// Author: YUCEN CAO - CS162 Spring 2019
// Date: June 11, 2019
// Description: In the final project, you will be able to design and implement a one-player, text-based game where the player can move through spaces to get items and accomplish goals.
// It is a collecting item game, when the player collect all the item, it will win. 
// The max step is 11, step will reduce by each move.
// Every room has different items, and some of the room is very dangerous
// *********************************************************************

#ifndef menu_hpp
#define menu_hpp

#include <stdio.h>
#include <iostream>
#include<string>
#include <stdlib.h>
#include "input_validation.hpp"
using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

//choose money($) or clothes(&)?
int menu_mOrc();

//next step will be what
int menu_next();

#endif /* menu_hpp */
