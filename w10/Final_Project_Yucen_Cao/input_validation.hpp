//
//  input_validation.hpp
//*********************************************************************
// Program name: Final project
// Author: YUCEN CAO - CS162 Spring 2019
// Date: June 11, 2019
// Description: In the final project, you will be able to design and implement a one-player, text-based game where the player can move through spaces to get items and accomplish goals.
// It is a collecting item game, when the player collect all the item, it will win. 
// The max step is 11, step will reduce by each move.
// Every room has different items, and some of the room is very dangerous
// *********************************************************************

#ifndef input_validation_hpp
#define input_validation_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <cctype>
using std :: cout;
using std :: endl;
using std :: string;

//check the string is empty or not, and return the string
string enter_input();

//to check it is non_negitive int or not
bool validation_int(string s);

//This function to check if it is only n-m (non_negative)
int validation_range(string temp, int n, int m);



#endif /* input_validation_hpp */

