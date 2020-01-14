//
//  Project1
//  Yucen Cao
//
//In this project, we will implement a program that simulates Langton’s Ant. The rule of Langton’s Ant is very simple: the ant is placed onto the board that is filled with white spaces, and starts moving forward. 
//  
//Design for my program:
//Board class: No board class, I use a dynamic int array for the board. 0 will be space , and 1 will be “#” character. In this way, I can print the board every step.
//Ant initial direction: The initial direction for the ant is fixed facing up.
//Largest number of steps/rows/columns:  The largest number of steps is 1000. Because we need to print out every step, so I think 1000 steps are enough for the project. And 1000 is much more enough for rows and columns.
//Edge cases: Skip the step forward step, turn right and then continue on. In the edge cases, only turn right, the color will not change because the ant doesn’t step forward.
//Random starting location: I have random starting location in the program. Users can choose enter by themselves or get random location.
//
//

#include <iostream>
#include <stdio.h>
#include "menu.hpp"
#include "langtons_ant.hpp"
using std :: cin;
using std :: cout;



int main(int argc, const char * argv[]) {
	int input[5] = {0}; //input[0]:The number of rows for the board. input[1]:The number of columns for the board. input[2]:The number of steps during simulation. input[3]:The starting row of the ant. input[4]:The starting column of the ant.
	
	while(menu(input))
	{
		int **matrix = NULL;
		int row = 0;
		int column = 0;
		
		row = input[0];
		column = input[1];
		
		//allocate the memory
		matrix = new int*[row];
		for (int i = 0; i < row; i++){
			matrix[i] = new int [column];
		}
		
		//initialize the matrix
		for (int i = 0; i < row; i++){
			for (int j = 0; j < column; j++){
				matrix[i][j] = 0;  //0 is white space, "space character" when print; 1 is black, "#" when print
			}
		}
		
		// logic funtion
		langtons_ant(matrix, input); 
		
		//free memory
		for (int i = 0; i < row; i++){
			delete [] matrix[i];
		}
		delete [] matrix;
	}
	
	
	
	return 0;
}
