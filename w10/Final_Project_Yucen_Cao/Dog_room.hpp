//
//  Dog_room.hpp
//*********************************************************************
// Program name: Final project
// Author: YUCEN CAO - CS162 Spring 2019
// Date: June 11, 2019
// Description: In the final project, you will be able to design and implement a one-player, text-based game where the player can move through spaces to get items and accomplish goals.
// It is a collecting item game, when the player collect all the item, it will win. 
// The max step is 11, step will reduce by each move.
// Every room has different items, and some of the room is very dangerous
// *********************************************************************

#ifndef Dog_room_hpp
#define Dog_room_hpp

#include <stdio.h>
#include "Space_class.hpp"
#include <vector>
using std::vector;

class DogRoom : public Space{
public:
	DogRoom();
	~DogRoom();
	virtual void choose_item(vector<char>* c);
	virtual bool empty_room();
};

#endif /* Dog_room_hpp */
