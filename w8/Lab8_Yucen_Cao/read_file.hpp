//
//  read_file.hpp
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

#ifndef read_file_hpp
#define read_file_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

bool read_file(int *array, string s, int& size);

#endif /* read_file_hpp */
