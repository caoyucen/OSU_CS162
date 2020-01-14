//
//  save_to_file.hpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#ifndef save_to_file_hpp
#define save_to_file_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include "input_validation.hpp"
#include "university_class.hpp"
using namespace cs_university;

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::vector;

//save the information to a file called "output_file.txt" 
void save_information(University u);


#endif /* save_to_file_hpp */
