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

#include "langtons_ant.hpp"

//To get it is edge case or not, it is edge return (1), it is not return(0)
bool edgecase_ornot(int row, int column, int ant_row, int ant_column, int orientation) //check it is over the edge or not
{
	if(orientation == 0){
		ant_row--;       //up
	}
	else if(orientation == 1){
		ant_column++;    //right
	}
	else if(orientation == 2){
		ant_row++;       //down
	}
	else if(orientation == 3){
		ant_column--;    //left
	}
	
	if(ant_row < 0 || ant_row > row -1  || ant_column < 0 || ant_column > column -1 ){
		return (1); //it is edge case
	}
	return(0); //it is not edge case
}


//print the matrix with the edge sign
void print_matrix (int **matrix, int row, int column, int ant_row, int ant_column)
{	
	//print edge
	for (int n = 0; n < column + 2; n++){
		std::cout << '-';
	}
	std::cout << std::endl;
	
	//print matrix
	for (int i = 0; i < row; i++)
	{
		std::cout << '|'; //print edge
		for (int j = 0; j < column; j++)
		{
			if( (i == ant_row) && (j == ant_column))
			{
				std::cout << '*';
			}
			else
			{
				if(matrix[i][j] == 0)
				{
					std::cout << ' ';
				}
				else{
					std::cout <<'#';
				}
			}
		}
		std::cout << '|' << std::endl; //print edge
	}
	
	//print edge 
	for (int m = 0; m < column + 2; m++){
		std::cout << '-';
	}
	std::cout << std::endl;
	
}

//the main logic for langton ants
void langtons_ant(int **matrix, int *input)
{
	int row = input[0];
	int column = input[1];
	int steps = input[2];
	int ant_row = input[3] - 1;  //If the ant starts at row a, column b, it is on matrix[a-1][b-1]
	int ant_column = input[4] - 1;  //If the ant starts at row a, column b, it is on matrix[a-1][b-1]
	
	
	Ant ant((ant_row), (ant_column), 0);
	//the initial direction of the ant is facing up (0)
	
	
	//1.is it edge case or not 2.if edge,only change orientation right 3. not edge, step forward, change color, change orientation
	for (int i = 0; i < steps; i++)
	{
		if (edgecase_ornot(row, column, ant.getrow(), ant.getcolumn(), ant.getorientation()) == 1)
		{
			ant.change_orientation(1); //edge case turn right, and don't change the color
		}
		else
		{
			
			ant.move_forward(); //move forward
			if(matrix[ant.getrow()][ant.getcolumn()] == 0)
			{
				matrix[ant.getrow()][ant.getcolumn()] = 1; //change the color from white to black
				ant.change_orientation(1); // turn right
			}
			else
			{
				matrix[ant.getrow()][ant.getcolumn()] = 0; //change the color from black to white
				ant.change_orientation(-1); //turn left
			}
		}
		//print every step
		print_matrix (matrix, row, column, ant.getrow(),ant.getcolumn());
	}
}
		

