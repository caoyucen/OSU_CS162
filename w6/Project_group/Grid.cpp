//
//  Grid.cpp
//  Group_P
//
//  Created by baobao on 2019/5/10.
//  Copyright © 2019年 YUCEN CAO. All rights reserved.
//

#include "Grid.hpp"


Grid::Grid(){
	//normal, 20*20 grid of cell
	rows = 20;
	cols = 20; 
	grid = nullptr;
	
	//allocate the memory, create_grid
	create_grid();
}




Grid::Grid(int Rows, int Cols){
	//input the size of the grid
	rows = Rows;
	cols = Cols;
	grid = nullptr;
	
	//allocate the memory, create_grid
	create_grid();
}




void Grid::create_grid(){
	//if grid is not exist, creat it.
	if (grid == nullptr){
		grid = new Critter **[rows];
		for (int i = 0; i < rows; i++){
			grid[i] = new Critter *[cols];
			for (int j = 0; j < cols; j++){
				grid[i][j] = nullptr;
			}
		}
	}
}




Grid::~Grid(){
	if (grid != nullptr){
		for (int i = 0; i < rows; i++){
			for (int j = 0; j < cols; j++){
				if (grid[i][j] != nullptr){
					delete grid[i][j];
				}
			}
			delete [] grid[i];
		}
		delete [] grid;
	}
}





Critter*** Grid::get_grid() 
{
	return (grid);
}




int Grid::get_rows(){
	return (rows);
}





int Grid::get_cols(){
	return (cols);
}


bool Grid::check_space_empty(int row, int col){  //当前的space是否是空的
	if (grid[row][col] == nullptr)
	{
		return (1);
	}
	else
	{
		return (0);
	}	
}
bool Grid::check_adjacent_empty(int Row, int Col){ //相邻的四个是否有空的
	if ((Col - 1) >= 0 && grid[Row][Col - 1] == nullptr)
	{
		return (1);
	}
	if ((Col + 1) < get_cols() && (grid[Row][Col+1] == nullptr))
	{
		return (1);
	}
	if ((Row + 1) < get_rows() && (grid[Row+1][Col] == nullptr))
	{
		return (1);
	}
	if ((Row - 1) >= 0 && (grid[Row - 1][Col] == nullptr))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}



bool Grid::check_space_ant(int row, int col){ //相邻的四个是否有蚂蚁
	if (grid[row][col] != nullptr && grid[row][col]->getType() == 1) //type 1 for ant
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


void Grid::print(){
	// top edge
	for (int i = 0; i < cols + 2; i++){
		std::cout << "-";
	}
	std::cout << std::endl; 
	
	//print the grid
	for (int i = 0; i < rows; i++)
	{
		std::cout << '|';
		for (int j = 0; j < cols; j++)
		{
			if (dynamic_cast<Ant*>(grid[i][j]))
			{
				std::cout << 'O';
			}
			else if (dynamic_cast<Doodlebug*>(grid[i][j]))
			{
				std::cout << 'X';
			}
			else
			{
				std::cout << ' ';
			}
		}
		std::cout << '|';
		std::cout << std::endl;
	}
	
	// bottom edge
	for (int j = 0; j < cols + 2; j++){
		std::cout << "-";
	}
	std::cout << std::endl; 
	
	std::cout << std::endl;
}
























