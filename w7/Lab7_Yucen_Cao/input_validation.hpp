//
//  input_validation.hpp
//*********************************************************************
// Program name: Lab7
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 16, 2019
// Description: In this lab, we will create a queue data structure utilizing circular linked list.
//1. Add a value to the back of queue
//2. Display the front value
//3. Remove the front node
//4. Display the queue’s content
//5.Exit.
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

// C++ version in osu not suppot the stoi function, so I write myStoi
int myStoi(string s);


//This function to check if it is only n-m (non_negative)
int validation_range(string temp, int n, int m);


#endif /* input_validation_hpp */
