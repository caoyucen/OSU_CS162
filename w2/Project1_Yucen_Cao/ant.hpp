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

#ifndef ant_hpp
#define ant_hpp

#include <stdio.h>

namespace cs_ant {
	class Ant{
	private:
		int ant_row;
		int ant_column;
		int ant_orientation;  //0 facing up, 1 facing right, 2 facing down, 3 facing left)
	public:
		//constructor
		Ant(int row, int column, int orientation);
		
		//get private member funtions
		int getrow();
		int getcolumn();
		int getorientation();
		
		//change private member funtions
		void move_forward();
		void change_orientation(int left_or_right);
	};
}

#endif /* ant_hpp */
