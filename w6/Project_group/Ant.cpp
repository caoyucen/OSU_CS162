/*********************************************************************
 * Group Project: Group 29
 * Date: 05/09/19
 * Description: Implimentation file for the Ant class. It is inherited from
                Critter class. It contains specific functions for ant
 **********************************************************************/

#include "Ant.hpp"
#include "Grid.hpp"
#include<cstdlib>

/*constructor, takes one pointer to Grid and two int for row and column as parameters.
 It sets the attribuites for ant*/
Ant::Ant(Grid *grid, int row, int column) : Critter(grid, row, column)
{
    type = 1;  //Ant
    breedAge = 3;
}

/*move() function, generates the direction randomly and move.
 If the target cell is occupied or would move the ant off the grid,
 then the ant does not move */
void Ant::move()
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
}


/*breed() function, if the ant age is larger or equal to breedAge, creats a new ant
 in an adjacent cell that is empty randomly. If no empty cell available, no breeding occurs.
 Oncee an offspring is produced, reset the daysAfterEat to 0*/
void Ant::breed()
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
                        Ant *ant = new Ant(grid, rowToBreed, column);
                        grid->get_grid()[rowToBreed][column] = ant;
                        bred = true;
                    }
                    break;
                }
                case DOWN:
                {
                    rowToBreed = row + 1;
                    if (rowToBreed < grid->get_rows() && grid->check_space_empty(rowToBreed, column))
                    {
                        Ant *ant = new Ant(grid, rowToBreed, column);
                        grid->get_grid()[rowToBreed][column] = ant;
                        bred = true;
                    }
                    break;
                }
                case RIGHT:
                {
                    columnToBreed = column + 1;
                    if (columnToBreed < grid->get_cols() && grid->check_space_empty(row, columnToBreed))
                    {
                        Ant *ant = new Ant(grid, row, columnToBreed);
                        grid->get_grid()[row][columnToBreed] = ant;
                        bred = true;
                    }
                    break;
                }
                case LEFT:
                {
                    columnToBreed = column - 1;
                    if (columnToBreed >= 0 && grid->check_space_empty(row, columnToBreed))
                    {
                        Ant *ant = new Ant(grid, row, columnToBreed);
                        grid->get_grid()[row][columnToBreed] = ant;
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
