//*********************************************************************
// Project3
// Program name: menu.cpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#include "menu.hpp"

//quit or not
int menu_end()
{
	int mark = -2222; //initialize to a big negtive int, 0 quit, 1 continue
	string temp;
	
	temp.clear();
	std :: cout << std::endl << "Do you want to end the game? Quit enter 0, Continue enter 1 " << std::endl;
	temp = enter_input();
	mark = validation_one_zero(temp);
	
	return(mark);
}



//choose the two characters to fight
int menu_choose_character()
{
	int type = -1;  //1 "Vampire", 2 "Barbarian", 3 "BlueMen", 4 "Medusa", 5"Harry_potter"
	string temp;
	
	temp.clear();
	std :: cout  << "1.Vampire" << std::endl << "2.Barbarian" << std::endl << "3.BlueMen" << std::endl << "4.Medusa" << std::endl << "5.Harry_potter" << std::endl << "Please enter the number of the character:" << std::endl;
	temp = enter_input();
	type = validation_range(temp, 1, 5);
	
	return (type);
}
