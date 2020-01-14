/*********************************************************************
 * Group Project: Group 29
 * Date: 05/09/19
 * Description: Header file for the Doodlebug class. It is inherited from
                Critter class. It contains specific functions for doodlebug
 **********************************************************************/

#ifndef DOODLEBUG_HPP
#define DOODLEBUG_HPP

#include "Critter.hpp"

class Doodlebug : public Critter
{
private:
	int daysAfterEating;
public:

	Doodlebug(Grid *, int, int);
    
    int getDaysAfterEating();
    
	virtual void move();
	virtual void breed();
	
	
};

#endif
