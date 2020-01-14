//
//  recursive_function.hpp
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

#ifndef recursive_function_hpp
#define recursive_function_hpp

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
using std::string;
using std::cout;
using std::endl;


//Write a function that recursively prints a string in reverse. The function has ONLY one parameter of type string. It prints the reversed character to the screen followed by a newline character.
void prints_string_reverse(string s);

//Write a function that recursively calculates the sum of an array of integers.
int calculates_sum_arrayIntegers(int* int_array, int size);

//Write a function that recursively calculates the triangular number of an integer N. 
int calculates_triangular_number(int N);

#endif /* recursive_function_hpp */
