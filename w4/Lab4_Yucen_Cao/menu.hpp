//
//  menu.hpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#ifndef menu_hpp
#define menu_hpp

#include <stdio.h>
#include <iostream>
#include<string.h>
#include <stdlib.h>
#include "input_validation.hpp"
using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;


bool menu_program(int *input_program);

void menu_name(int *intput_name, int all_person);

bool menu_add_people(int *add_type, float *add_scores, string& add_name);

#endif /* menu_hpp */
