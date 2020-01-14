/*********************************************************************
 * Group Project: Group 29
 * Date: 05/09/19
 * Description: Header file for the Ant class. It is inherited from
                Critter class. It contains specific functions for ant
 **********************************************************************/
#ifndef ANT_HPP
#define ANT_HPP

#include "Critter.hpp"

class Ant : public Critter
{
public:

	Ant(Grid *, int, int);
    virtual void move();
	virtual void breed();
	
};

#endif 
