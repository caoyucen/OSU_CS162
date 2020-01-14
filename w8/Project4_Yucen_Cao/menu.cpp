//*********************************************************************
// Project3
// Program name: menu.cpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#include "menu.hpp"

//start or not
int menu_start()
{
	int mark = -2222; //initialize to a big negtive int, 0 quit, 1 continue
	string temp;
	
	temp.clear();
	std :: cout << "Do you want to start the game? " << std::endl;
	std :: cout << "1.Play " << std::endl;
	std :: cout << "2.Exit " << std::endl;
	temp = enter_input();
	mark = validation_range(temp, 1, 2);
	return(mark);
}


//end or not
int menu_end()
{
	int mark = -2222; //initialize to a big negtive int, 0 quit, 1 continue
	string temp;
	
	temp.clear();
	std :: cout << "Do you want to play again? " << std::endl;
	std :: cout << "1.Play again " << std::endl;
	std :: cout << "2.Exit " << std::endl;
	temp = enter_input();
	mark = validation_range(temp, 1, 2);
	return(mark);
}




//number of fighters for both team
int menu_teamNumber()
{
	int mark = -2222; //initialize to a big negtive int
	string temp;
	
	temp.clear();
	std :: cout << "Please enter the number of fighters for both team. " << std::endl;
	temp = enter_input();
	mark = validation_range(temp, 1, 10000);
	return(mark);
}



////choose the characters to fight
//int menu_choose_character()
//{
//	int type = -1;  //1 "Vampire", 2 "Barbarian", 3 "BlueMen", 4 "Medusa", 5"Harry_potter"
//	string temp;
//	
//	temp.clear();
//	std :: cout  << "1.Vampire" << std::endl << "2.Barbarian" << std::endl << "3.BlueMen" << std::endl << "4.Medusa" << std::endl << "5.Harry_potter" << std::endl << "Please enter the number of the character:" << std::endl;
//	temp = enter_input();
//	type = validation_range(temp, 1, 5);
//	
//	return (type);
//}


//enter the information for each fighter
void menu_eachFighter(const string team, int mark, int& type, string& name)
{
	string temp;
	temp.clear();
	//enter type
	type = -1;
	name.clear();
	std :: cout  << "Please enter the type for fighter No." << mark << " in Team " << team << std::endl;
	std :: cout  << "1.Vampire" << std::endl;
	std :: cout  << "2.Barbarian" << std::endl;
	std :: cout  << "3.BlueMen" << std::endl;
	std :: cout  << "4.Medusa" << std::endl;
	std :: cout  << "5.Harry_potter" << std::endl;
	temp = enter_input();
	type = validation_range(temp, 1, 5);
	//enter name
	std :: cout  << "Please enter the name for fighter No." << mark << " in Team " << team << std::endl;
	name =  enter_input();
}




//display the content of the loser pile or not 
int menu_loser()
{
	int mark = -2222; //initialize to a big negtive int
	string temp;
	
	temp.clear();
	std :: cout << "Do you want to display the content of the loser pile? " << std::endl;
	std :: cout << "1.Yes " << std::endl;
	std :: cout << "2.No " << std::endl;
	temp = enter_input();
	mark = validation_range(temp, 1, 2);
	return(mark);
}






