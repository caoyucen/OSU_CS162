//
//  input_validation.hpp
//*********************************************************************
// Program name: Lab9
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 30, 2019
// Description: In this lab, we will create two data structures using STL containers: “stack” and “queue”.
//For the Queue container, we will implement a program that simulates a buffer. The simulation needs a function that randomly generate number. And the buffer simulation starts with no value in the buffer.
//Use a stack to create a function that creates a palindrome, which is a string that is the same forwards and backwards.
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

