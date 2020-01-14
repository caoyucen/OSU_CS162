//*********************************************************************
// Project3
// Program name: input_validation.hpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#ifndef input_validation_hpp
#define input_validation_hpp

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <cctype>
using std :: cout;
using std :: endl;
using std::string;


//check the string is empty or not, and return the string
string enter_input();


//This function to check if it is only 0/1
int validation_one_zero(string temp);

//to check it is int or not
bool validation_int(string s);


// C++ version in osu not suppot the stoi function, so I write myStoi
int myStoi(string s); 

//This function to check if it is only n-m
int validation_range(string temp, int n, int m);

#endif /* input_validation_hpp */
