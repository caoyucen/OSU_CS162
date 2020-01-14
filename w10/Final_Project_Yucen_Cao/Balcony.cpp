//
//  Balcony.cpp
//*********************************************************************
// Program name: Final project
// Author: YUCEN CAO - CS162 Spring 2019
// Date: June 11, 2019
// Description: In the final project, you will be able to design and implement a one-player, text-based game where the player can move through spaces to get items and accomplish goals.
// It is a collecting item game, when the player collect all the item, it will win. 
// The max step is 11, step will reduce by each move.
// Every room has different items, and some of the room is very dangerous
// *********************************************************************

#include "Balcony.hpp"

Balcony::Balcony():Space(1, 0, 0, 0){ 
	//in the Balcony, there is money, and no knife, no colthes,no dog
	name = "Balcony";
}


Balcony::~Balcony(){
	
}


bool Balcony::empty_room()
{
	int empty = 1;
	
	if (map[1][1] != '$') //# is knife
	{
		empty = 0;
	}
	return (empty);
}


void Balcony::choose_item(vector<char>* c)
{
	std::cout << "You get the money" << std::endl;
	c->push_back('$');
	map[1][1]  = ' ';
}
