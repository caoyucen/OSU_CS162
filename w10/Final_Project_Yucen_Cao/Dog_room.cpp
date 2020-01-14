//
//  Dog_room.cpp
//*********************************************************************
// Program name: Final project
// Author: YUCEN CAO - CS162 Spring 2019
// Date: June 11, 2019
// Description: In the final project, you will be able to design and implement a one-player, text-based game where the player can move through spaces to get items and accomplish goals.
// It is a collecting item game, when the player collect all the item, it will win. 
// The max step is 11, step will reduce by each move.
// Every room has different items, and some of the room is very dangerous
// *********************************************************************

#include "Dog_room.hpp"

DogRoom::DogRoom():Space(0, 0, 0, 1){ 
	//in the DogRoom, there is a dog in the middle
	name = "DogRoom";
}

DogRoom::~DogRoom(){
	
}

bool DogRoom::empty_room()
{
	return (0);
}


void DogRoom::choose_item(vector<char>* c){
}
