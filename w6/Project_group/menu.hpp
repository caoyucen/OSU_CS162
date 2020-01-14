//
//  menu.hpp
//  Group_P
//
//  Created by baobao on 2019/5/10.
//  Copyright © 2019年 YUCEN CAO. All rights reserved.
//

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


int menu_enter_rows();


int menu_enter_cols();

int menu_enter_steps();

int menu_enter_ants(int Rows, int Cols);

int menu_enter_doodlebugs(int Rows, int Cols, int numAnts);

//continue or not
int menu_continue();


#endif /* menu_hpp */
