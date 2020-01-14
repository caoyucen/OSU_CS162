//
//  input_validation.hpp
//  Lab6
//
//  Created by baobao on 2019/5/7.
//  Copyright © 2019年 YUCEN CAO. All rights reserved.
//

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

//This function to check if it is only 0/1
int validation_one_zero(string temp);

//This function to check if it is only n-m (non_negative)
int validation_range(string temp, int n, int m);


#endif /* input_validation_hpp */
















