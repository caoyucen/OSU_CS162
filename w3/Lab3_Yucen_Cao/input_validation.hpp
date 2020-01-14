//
//  input_validation.hpp
//  Lab3
//
//  YUCEN CAO
//  
//In this project,  it is a 2-player game. It is played through dice. The player who rolls higher number gets one point. If both players roll the same number, it is considered a draw and no one gets a point.
//
//

#ifndef input_validation_hpp
#define input_validation_hpp

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <cctype>
using std :: cout;
using std :: endl;
using std::string;

//to check it is int or not
bool validation_int(string s);

// C++ version not suppot the stoi function, so I write myStoi
int myStoi(string s);

//This function to check if it is only 0/1
int validation_one_zero(string temp);

//To check it is postive int or not
int validation_positive_int(string temp);

#endif /* input_validation_hpp */
