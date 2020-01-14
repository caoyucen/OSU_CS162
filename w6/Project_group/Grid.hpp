//
//  Grid.hpp
//  Group_P
//
//  Created by baobao on 2019/5/10.
//  Copyright © 2019年 YUCEN CAO. All rights reserved.
//

#ifndef Grid_hpp
#define Grid_hpp

#include <stdio.h>
#include "Critter.hpp"
#include "Doodlebug.hpp"
#include "Ant.hpp"
#include <iostream>
#include <string>
using std::string;


class Grid{
private:
	Critter ***grid;  //array pointer to the pointer   二维数组指针的指针
	int rows;
	int cols;
public:
	Grid();
	Grid(int Rows, int Cols);
	 ~Grid();
	void create_grid();
	Critter*** get_grid();
	int get_rows();
	int get_cols();
	bool check_space_empty(int row, int col); //当前的space是否是空的
	bool check_adjacent_empty(int row, int col); //相邻的四个是否有空的
	bool check_space_ant(int row, int col); //相邻的四个是否有蚂蚁
	void print();
};

#endif /* Grid_hpp */
