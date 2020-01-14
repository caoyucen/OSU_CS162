/*********************************************************************
 * Group Project: Group 29
 * Date: 05/09/19
 * Description: Header file for the Critter class. It is an  abstract
                class and contains the basic functions for critters
 **********************************************************************/

#ifndef CRITTER_HPP
#define CRITTER_HPP

class Grid;

enum Direction {UP, DOWN, RIGHT, LEFT};

class Critter
{
protected:
	int row;
	int column;
	int age;
    int breedAge;
    int type;    //1 for ant, 2 for doodlebug
	int daysAfterBreeding;
	bool moved;
	Grid *grid;
    
    
public:

	Critter(Grid *, int, int);
	virtual ~Critter();
    
	int getAge();
    int getType();
	bool getMoved();
    Grid *get_grid();
    
	void resetMoved();
    void increaseAge();
    
	virtual void move() = 0;
	virtual void breed() = 0;

};

#endif 
