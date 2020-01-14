//
//  menu.hpp
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

#ifndef menu_hpp
#define menu_hpp

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include "input_validation.hpp"
using std::string;
using std::cout;
using std::endl;

//choose the function type
int menu_function_type();

//quit or not
int menu_end();

//for user input the string of function1
string menu_function1();

//for user input the size of the array for function2
int menu_function2_size();

//for user input the integers in the array for function2
int menu_function2_array(int num);

//for user input the integer for function3
int menu_function3();


#endif /* menu_hpp */





