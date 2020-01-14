//
//  read_from_file.hpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#ifndef read_from_file_hpp
#define read_from_file_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include "input_validation.hpp"

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::vector;


//Add a person by reading a saved information from a file 
bool add_people_file(int *add_type, float *add_scores, string& add_name);

#endif /* read_from_file_hpp */
