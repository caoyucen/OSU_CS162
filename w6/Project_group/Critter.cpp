/*********************************************************************
 * Group Project: Group 29
 * Date: 05/09/19
 * Description: Implementation file for the Critter class. It is an abstract
                class and contains the basic functions for critters
 **********************************************************************/

#include "Critter.hpp"
#include "Grid.hpp"
#include <cstdlib>

/*constructor, takes one pointer to Grid and two int for row and column as parameters.
  It sets the attribuites for critter*/
Critter::Critter(Grid *grid, int row, int column)
{
	age = 0;
	daysAfterBreeding = 0;
    this->row = row;
    this->column = column;
	this->grid = grid;
	
}

/*destructor*/
Critter::~Critter()
{
}

/*getters*/
int Critter::getAge()
{
    return age;
}

int Critter::getType()
{
    return type;
}

bool Critter::getMoved()
{
    return moved;
}

Grid *Critter::get_grid()
{
	return grid;
}

/*resetMoved() function, sets moved to false*/
void Critter::resetMoved()
{
	this->moved = false;
}

/*increaseAge() function, increases age by one for every step move*/
void Critter::increaseAge()
{
    age++;
}



