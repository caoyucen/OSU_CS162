//
//  menu.cpp
//*********************************************************************
// Program name: Final project
// Author: YUCEN CAO - CS162 Spring 2019
// Date: June 11, 2019
// Description: In the final project, you will be able to design and implement a one-player, text-based game where the player can move through spaces to get items and accomplish goals.
// It is a collecting item game, when the player collect all the item, it will win. 
// The max step is 11, step will reduce by each move.
// Every room has different items, and some of the room is very dangerous
// *********************************************************************

#include "menu.hpp"

//choose money($) or clothes(&)?
int menu_mOrc()
{
	int num = 0;
	string temp;
	
	temp.clear();
	std::cout <<"Do you want to choose 1.money($) 2.clothes(&)? Please enter the number." << std::endl;
	
	temp = enter_input();
	num = validation_range(temp, 1, 2);
	
	return (num);
}


int menu_next()
{
	int num = 0;
	string temp;
	
	temp.clear();
	std::cout <<"Next step where do you want to go? 1.up  2.down  3.left  4.right" << std::endl;
	
	temp = enter_input();
	num = validation_range(temp, 1, 4);
	
	return (num);
}
