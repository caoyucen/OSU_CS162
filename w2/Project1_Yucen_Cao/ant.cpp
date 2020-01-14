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

#include "ant.hpp"

namespace cs_ant {
	
	//constructor
	Ant:: Ant(int row, int column, int orientation)
	{
		ant_row = row;
		ant_column = column;
		ant_orientation = orientation;
	}
	
	//get private member funtions
	int Ant::getrow()
	{
		return ant_row;
	}
	
	int Ant::getcolumn()
	{
		return ant_column;
	}
	
	int Ant::getorientation()
	{
		return ant_orientation;
	}
	
	
	//change private member funtions
	void Ant:: move_forward()
	{
		//change location
		if(ant_orientation == 0){
			ant_row--;
		}
		else if(ant_orientation == 1){
			ant_column++;
		}
		else if(ant_orientation == 2){
			ant_row++;
		}
		else if(ant_orientation == 3){
			ant_column--;
		}
	}
	
	
	void Ant:: change_orientation(int turn)
	{
		int orientation = ant_orientation + turn;
		
		if (orientation == -1){
			orientation = 3;
		}
		else if (orientation == 4){
			orientation = 0;
		}
		ant_orientation = orientation;
	}
	
}
