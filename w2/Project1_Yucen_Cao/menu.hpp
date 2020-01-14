//
//  Project1
//  Yucen Cao
//
//In this project, we will implement a program that simulates Langton’s Ant. The rule of Langton’s Ant is very simple: the ant is placed onto the board that is filled with white spaces, and starts moving forward. 
//  
//Design for my program:
//Board class: No board class, I use a dynamic int array for the board. 0 will be space , and 1 will be “#” character. In this way, I can print the board every step.
//Ant initial direction: The initial direction for the ant is fixed facing up.
//Largest number of steps/rows/columns:  The largest number of steps is 1000. Because we need to print out every step, so I think 1000 steps are enough for the project. And 1000 is much more enough for rows and columns.
//Edge cases: Skip the step forward step, turn right and then continue on. In the edge cases, only turn right, the color will not change because the ant doesn’t step forward.
//Random starting location: I have random starting location in the program. Users can choose enter by themselves or get random location.
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

//to check the input is right or wrong, using for start or not
int menu_start(string temp);

//to check the input is right or wrong, if the input is not positive int, enter again,using for input rows, columns, and steps
int menu_positive_number(string temp);

//to check the input is right or wrong,the location should =< rows/columns, and it should be positive int, using for starting location
int menu_location(string temp, int board);

//To enter the input and put it into int *input, return (0) for quit, return(1) to start
bool menu(int *input);

#endif /* menu_hpp */
