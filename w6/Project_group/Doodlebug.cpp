/*********************************************************************
 * Group Project: Group 29
 * Date: 05/09/19
 * Description: Implementation file for the Doodlebug class. It is inherited from
                Critter class. It contains specific functions for doodlebug
 **********************************************************************/

#include "Doodlebug.hpp"
#include "Grid.hpp"
#include<cstdlib>


/*constructor, takes one pointer to Grid and two int for row and column as parameters.
 It sets the attribuites for doodlebug*/
Doodlebug::Doodlebug(Grid *grid, int row, int column) : Critter(grid, row, column)
{
    type = 2;  //doodlebug
    breedAge = 8;
	daysAfterEating = 0;
}

int Doodlebug::getDaysAfterEating()
{
	return daysAfterEating;
}

/*move() function, doodlebug will firstly try to move to an adjacent cell containing an ant
 eat the ant. If there are several ants in the adjacent cells, it will randomly pick an ant
 to eat. Otherwise, the doodlebug will randomly move to an adjacent cell*/
void Doodlebug::move()
{
	//if there is at least one ant in the adjacent cell, move to eat
	if ((row - 1 >= 0 && grid->check_space_ant(row - 1, column))
		|| ((row + 1 < grid->get_rows()) && grid->check_space_ant(row + 1, column))
		|| ((column + 1 < grid->get_cols()) && grid->check_space_ant(row, column + 1))
		|| (column - 1 >= 0 && grid->check_space_ant(row, column - 1)))
	{
		bool ate = false;
		while (!ate)
		{
            int rowToMove;
            int columnToMove;
			Direction direction = static_cast<Direction>(rand()%4);
            
            switch(direction)
            {
                case UP:
                {
                    rowToMove = row - 1;
                    //move if the cell containing an ant
                    if (rowToMove >= 0 && grid->check_space_ant(rowToMove, column))
                    {
                        //eat the ant
                        delete grid->get_grid()[rowToMove][column];
                        
                        //doodlebug move to the cell
                        grid->get_grid()[rowToMove][column] = grid->get_grid()[row][column];
                        grid->get_grid()[row][column] = nullptr;
                        row = rowToMove;
                        
                        this->daysAfterEating = 0;
                        ate = true;
                    }
                    break;
                }
                case DOWN:
                {
                    rowToMove = row + 1;
                    //move if the cell containing an ant
                    if ((rowToMove < grid->get_rows()) && grid->check_space_ant(rowToMove, column))
                    {
                        //eat the ant
                        delete grid->get_grid()[rowToMove][column];
                        
                        //doodlebug move to the cell
                        grid->get_grid()[rowToMove][column] = grid->get_grid()[row][column];
                        grid->get_grid()[row][column] = nullptr;
                        row = rowToMove;
                        
                        this->daysAfterEating = 0;
                        ate = true;
                    }
                    break;
                }
                case RIGHT:
                {
                    columnToMove = column + 1;
                    //move if the cell containing an ant
                    if ((columnToMove < grid->get_cols()) && grid->check_space_ant(row, columnToMove))
                    {
                        //eat the ant
                        delete grid->get_grid()[row][columnToMove];
                        
                        //doodlebug move to the cell
                        grid->get_grid()[row][columnToMove] = grid->get_grid()[row][column];
                        grid->get_grid()[row][column] = nullptr;
                        column = columnToMove;
                        
                        this->daysAfterEating = 0;
                        ate = true;
                    }
                    break;
                }
                case LEFT:
                {
                    columnToMove = column - 1;
                    //move if the cell containing an ant
                    if (columnToMove >= 0 && grid->check_space_ant(row, columnToMove))
                    {
                        //eat the ant
                        delete grid->get_grid()[row][columnToMove];
                        
                        //doodlebug move to the cell
                        grid->get_grid()[row][columnToMove] = grid->get_grid()[row][column];
                        grid->get_grid()[row][column] = nullptr;
                        column = columnToMove;
                        
                        this->daysAfterEating = 0;
                        ate = true;
                    }
                    break;
                }
            }
		}

		moved = true;
	}
	else  //no adjacent ants
	{
        int rowToMove;
        int columnToMove;
        Direction direction = static_cast<Direction>(rand()%4);
        
        switch(direction)
        {
            case UP:
            {
                rowToMove = row - 1;
                // If the cell is empty and not out of bound, move
                if (rowToMove >= 0 && grid->check_space_empty(rowToMove, column))
                {
                    grid->get_grid()[rowToMove][column] = grid->get_grid()[row][column];
                    grid->get_grid()[row][column] = nullptr;
                    row = rowToMove;
                }
                break;
            }
            case DOWN:
            {
                rowToMove = row + 1;
                // If the cell is empty and not out of bound, move
                if ((rowToMove < grid->get_rows()) && grid->check_space_empty(rowToMove, column))
                {
                    grid->get_grid()[rowToMove][column] = grid->get_grid()[row][column];
                    grid->get_grid()[row][column] = nullptr;
                    row = rowToMove;
                }
                break;
            }
            case RIGHT:
            {
                columnToMove = column + 1;
                // If the cell is empty and not out of bound, move
                if ((columnToMove < grid->get_cols()) && grid->check_space_empty(row, columnToMove))
                {
                    grid->get_grid()[row][columnToMove] = grid->get_grid()[row][column];
                    grid->get_grid()[row][column] = nullptr;
                    column = columnToMove;
                }
                break;
            }
            case LEFT:
            {
                columnToMove = column - 1;
                // If the cell is empty and not out of bound, move
                if (columnToMove >= 0 && grid->check_space_empty(row, columnToMove))
                {
                    grid->get_grid()[row][columnToMove] = grid->get_grid()[row][column];
                    grid->get_grid()[row][column] = nullptr;
                    column = columnToMove;
                }
            }
        }
        moved = true;
		daysAfterEating++;
	}
}

/*breed() function, if the doodlebug age is larger or equal to breedAge, creats a new doodlebug
 in an adjacent cell that is empty randomly. If no empty cell available, no breeding occurs.
 Oncee an offspring is produced, reset the daysAfterEat to 0*/
void Doodlebug::breed()
{
    if ((daysAfterBreeding >= breedAge && grid->check_adjacent_empty(row, column)))
    {
        bool bred = false;
        
        while (!bred)
        {
            int rowToBreed;
            int columnToBreed;
            Direction direction = static_cast<Direction>(rand()%4);
            
            switch(direction)
            {
                case UP:
                {
                    rowToBreed = row - 1;
                    if (rowToBreed >= 0 && grid->check_space_empty(rowToBreed, column))
                    {
                        Doodlebug * doodlebug = new Doodlebug(grid, rowToBreed, column);
                        grid->get_grid()[rowToBreed][column] = doodlebug;
                        bred = true;
                    }
                    break;
                }
                case DOWN:
                {
                    rowToBreed = row + 1;
                    if (rowToBreed < grid->get_rows() && grid->check_space_empty(rowToBreed, column))
                    {
                        Doodlebug * doodlebug = new Doodlebug(grid, rowToBreed, column);
                        grid->get_grid()[rowToBreed][column] = doodlebug;
                        bred = true;
                    }
                    break;
                }
                case RIGHT:
                {
                    columnToBreed = column + 1;
                    if (columnToBreed < grid->get_cols() && grid->check_space_empty(row, columnToBreed))
                    {
                        Doodlebug * doodlebug = new Doodlebug(grid, row, columnToBreed);
                        grid->get_grid()[row][columnToBreed] = doodlebug;
                        bred = true;
                    }
                    break;
                }
                case LEFT:
                {
                    columnToBreed = column - 1;
                    if (columnToBreed >= 0 && grid->check_space_empty(row, columnToBreed))
                    {
                        Doodlebug * doodlebug = new Doodlebug(grid, row, columnToBreed);
                        grid->get_grid()[row][columnToBreed] = doodlebug;
                        bred = true;
                    }
                    break;
                }
            }  //end of switch
        }  //end of while
        daysAfterBreeding = 0;  //reset daysAfterBreeding to 0
    }
    else
    {
        daysAfterBreeding++;
    }
}

