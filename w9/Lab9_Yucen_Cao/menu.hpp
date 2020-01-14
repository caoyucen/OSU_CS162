//
//  menu.hpp
//*********************************************************************
// Program name: Lab9
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 30, 2019
// Description: In this lab, we will create two data structures using STL containers: “stack” and “queue”.
//For the Queue container, we will implement a program that simulates a buffer. The simulation needs a function that randomly generate number. And the buffer simulation starts with no value in the buffer.
//Use a stack to create a function that creates a palindrome, which is a string that is the same forwards and backwards.
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


//Enter the number
int menu_number(string s, int max);

//enter a string for palindrome
string string_for_palindrome();

#endif /* menu_hpp */
