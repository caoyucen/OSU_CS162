//*********************************************************************
// Project3
// Program name: main.cpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************


#include <iostream>
#include "character_base.hpp"
#include "menu.hpp"
#include "game.hpp"
using namespace cs_characterBase;
using namespace cs_game;



int main() {

	int *type = new int[2];
	int mark_end = 1; //the mark for end the game or not, 0 for end, 1 continue
	string name[6] = {"The name is: ","Vampire", "Barbarian", "BlueMen", "Medusa", "Harry_potter",};
	
	
	
	
	
	while(mark_end)
	{
		for (int i = 0; i < 2; i++)
		{
			std::cout << std::endl << "Please choose the NO." << i + 1 << " character." << std::endl; 
			type[i] = menu_choose_character();
		}
		
		Game gameplay;
		gameplay.set_fight(type); 
		
		
		gameplay.fight();
		
		
	
		mark_end = menu_end(); //end the game or not
	}
	
	delete []type;
	
	return 0;
}
