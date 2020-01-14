//
//  menu.hpp
//*********************************************************************
// Program name: Lab8
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 24, 2019
// Description: In this lab, we will use algorithms to search data and sort data.
//1. Read Values from Files
//2. Simple Search
//3. Sorting
//4. Binary Search
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

//Enter the target integer
int menu_target();

//enter the name of the output file
string menu_output_file(string s);

#endif /* menu_hpp */
