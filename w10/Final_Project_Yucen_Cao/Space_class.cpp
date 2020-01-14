//
//  Space_class.cpp
//*********************************************************************
// Program name: Final project
// Author: YUCEN CAO - CS162 Spring 2019
// Date: June 11, 2019
// Description: In the final project, you will be able to design and implement a one-player, text-based game where the player can move through spaces to get items and accomplish goals.
// It is a collecting item game, when the player collect all the item, it will win. 
// The max step is 11, step will reduce by each move.
// Every room has different items, and some of the room is very dangerous
// *********************************************************************

#include "Space_class.hpp"

Space::Space()
{
	map = {{' ','-','-','-', ' '}, {'|',' ',' ',' ', '|'}, {'|',' ',' ',' ', '|'}, {'|',' ',' ',' ', '|'}, {' ','-','-','-', ' '}};
	left = nullptr;
	right = nullptr;
	top = nullptr;
	bottom = nullptr;
	name = "";
}

Space::Space(bool cash, bool knife, bool clothes, bool dog)
{
	map = {{' ','-','-','-', ' '}, {'|',' ',' ',' ', '|'}, {'|',' ',' ',' ', '|'}, {'|',' ',' ',' ', '|'}, {' ','-','-','-', ' '}};
	left = nullptr;
	right = nullptr;
	top = nullptr;
	bottom = nullptr;
	if (cash == 1){
		map[1][1] = '$';
	}
	if (knife == 1){
		map[1][2] = '#';
	}
	if(clothes == 1){
		map[1][3] = '&';
	}
	if(dog == 1){
		map[2][2] = 'D';
	}
	
}

Space::~Space(){
	
}


Space* Space::get_left()
{
	return (left);
}

Space* Space::get_right()
{
	return (right);
}

Space* Space::get_top()
{
	return (top);
}

Space* Space::get_bottom()
{
	return (bottom);
}

void Space::set_location(Space* Left, Space* Right, Space* Top, Space* Bottom)
{
	left = Left;
	right = Right;
	top = Top;
	bottom = Bottom;
}


void Space::print_map()
{
	std::cout << "You are in the " << name << "." << std::endl;
	for( int i = 0; i < 5; i++){
		for ( int j = 0; j < 5; j++){
			std::cout << map[i][j];
		}
		std::cout <<  std::endl;
	}
	std::cout <<  std::endl;
}


//If there is dog in int room or not
bool Space::see_dog()
{
	bool see = 0;
	
	if (map[2][2] == 'D'){
		see = 1;
	}
	return (see);
}




