//
//  Bedroom.cpp
//*********************************************************************
// Program name: Final project
// Author: YUCEN CAO - CS162 Spring 2019
// Date: June 11, 2019
// Description: In the final project, you will be able to design and implement a one-player, text-based game where the player can move through spaces to get items and accomplish goals.
// It is a collecting item game, when the player collect all the item, it will win. 
// The max step is 11, step will reduce by each move.
// Every room has different items, and some of the room is very dangerous
// *********************************************************************

#include "Bedroom.hpp"

Bedroom::Bedroom():Space(1,0,1,0){
	//there is colthes in the bedroom , and no money no knife
	name = "Bedroom";
}

Bedroom::~Bedroom(){
	
}

bool Bedroom::empty_room()
{
	int empty = 1;
	
	if ((map[1][1] != '$') && (map[1][3] != '&')) //$ is money, & is clothes
	{
		empty = 0;
	}
	return (empty);
}


void Bedroom::choose_item(vector<char>* c)
{
	if ((map[1][1] == '$') && (map[1][3] == '&')){
		if (menu_mOrc() == 1){  //choose money($) or clothes(&)?
			std::cout << "You get the money" << std::endl;
			c->push_back('$');
			map[1][1]  = ' ';
		}
		else{
			std::cout << "You get the clothes" << std::endl;
			c->push_back('&');
			map[1][3]  = ' ';
		}
	}
	else if ((map[1][1] == '$') && (map[1][3] != '&')){
		std::cout << "You get the money" << std::endl;
		c->push_back('$');
		map[1][1]  = ' ';
	}
	else {
		std::cout << "You get the clothes" << std::endl;
		c->push_back('&');
		map[1][3]  = ' ';
	}
}






