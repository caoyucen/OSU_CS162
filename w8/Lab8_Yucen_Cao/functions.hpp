//
//  functions.hpp
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

#ifndef functions_hpp
#define functions_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

//simple_search
bool simple_search(int target, int* array, int size);

//print the search result
void print_search(bool mark, string s);

//sorting
void sorting(int* array, int size, string s, string output_file);

//binary_search
bool binary_search(int target, int* array, int size);

#endif /* functions_hpp */
