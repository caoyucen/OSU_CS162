//
//  menu.hpp
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

//choose the function from 1 to 5
int choose_function();

//Enter a positive integer:
int menu_enter_number();


#endif /* menu_hpp */
