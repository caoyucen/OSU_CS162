//
//  menu.hpp
//  Lab3
//
//  YUCEN CAO
//  
//In this project,  it is a 2-player game. It is played through dice. The player who rolls higher number gets one point. If both players roll the same number, it is considered a draw and no one gets a point.
//
//

#ifndef menu_hpp
#define menu_hpp

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "input_validation.hpp"
using std :: cin;
using std :: cout;
using std :: endl;
using std ::string;

////To enter the input and put it into int *input, return (0) for quit, return(1) to start
bool menu(int *input);

#endif /* menu_hpp */
