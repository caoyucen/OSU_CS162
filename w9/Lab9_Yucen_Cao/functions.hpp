//
//  functions.hpp
//*********************************************************************
// Program name: Lab9
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 30, 2019
// Description: In this lab, we will create two data structures using STL containers: “stack” and “queue”.
//For the Queue container, we will implement a program that simulates a buffer. The simulation needs a function that randomly generate number. And the buffer simulation starts with no value in the buffer.
//Use a stack to create a function that creates a palindrome, which is a string that is the same forwards and backwards.
// *********************************************************************

#ifndef functions_hpp
#define functions_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <queue>
#include <string>
#include <stack>
using std::string;
using std::queue;
using std::stack;
using std :: cin;
using std :: cout;
using std :: endl;

//simulates a buffer
void buffer_simulation(int rounds, int chance_to_put, int chance_to_take);

//output buffer
void print_buffer(queue<int> buffer);

// creates a palindrome
void palindrome(string s);

#endif /* functions_hpp */
