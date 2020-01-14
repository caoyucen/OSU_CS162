//
//  input_validation.hpp
//  Lab5
//
//  Created by YUCEN CAO on 2019/4/30.
//  Copyright © 2019年 YUCEN CAO. All rights reserved.
//
//
//Create and use recursive functions
//In this lab, we will write a program that uses three recursive functions.
//The program needs to demonstrate all three functions by providing a menu.
//The menu should provide user choices to select one of the three functions to call, after prompting user input for function call and the function outputs results, the menu should go back to the first menu to let the user continue choosing functions to call.
//
//
//


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
using std::string;

//check the string is empty or not, and return the string
string enter_input();

//to check it is non_negitive int or not
bool validation_int(string s);

// C++ version in osu not suppot the stoi function, so I write myStoi
int myStoi(string s);

//This function to check if it is only n-m
int validation_range(string temp, int n, int m);

//This function to check if it is only 0/1
int validation_one_zero(string temp);

//This function to check if it is positive int
int validation_positive_int(string temp);

#endif /* input_validation_hpp */

