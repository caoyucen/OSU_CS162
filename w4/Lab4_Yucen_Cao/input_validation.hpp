//
//  input_validation.hpp
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#ifndef input_validation_hpp
#define input_validation_hpp

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <cctype>
using std :: cout;
using std :: endl;
using std::string;

//check the string is empty or not, and return the string
string enter_input();

//check the string is float or not
bool validation_float(string s);

//to check the float from 0 to top_score
float validation_scores(string temp, float top_score);

//to check it is int or not
bool validation_int(string s);

// C++ version not suppot the stoi function, so I write myStoi
int myStoi(string s);

// C++ version in osu not suppot the stof function, so I write myStof
float myStof(string s);

//This function to check if it is only 0-4
int validation(string temp);

//To check the number no more than total number
int validation_number_person(string temp, int all_person);

//This function to check if it is only 0/1
int validation_one_zero(string temp);

//To check age is postive int or not, the biggest is 100
int validation_age(string temp);

#endif /* input_validation_hpp */

