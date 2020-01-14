//
//  menu.cpp
//  Lab3
//
//  YUCEN CAO
//  
//In this project,  it is a 2-player game. It is played through dice. The player who rolls higher number gets one point. If both players roll the same number, it is considered a draw and no one gets a point.
//
//
#include "menu.hpp"
#include "input_validation.hpp"


////To enter the input and put it into int *input, return (0) for quit, return(1) to start
bool menu(int *input)
{
	string temp;
	int start = 0;  //start the game 1, or quit the game 0
	
	std::cout << "Do you want to start the game?(Play game enter 1 /Exit game enter 0)" << std::endl;
	std::cin >> temp;
	
	start = validation_one_zero(temp);
	if (start == 0)
	{
		return (0);
	}
	
	//How many rounds will be played
	temp.clear(); //empty string temp
	std::cout << "How many rounds will be played?(Please enter the number of the rounds)" << std::endl;
	std::cin >> temp;
	input[0] = validation_positive_int(temp);
	
	//The type of die for player A
	temp.clear(); //empty string temp
	std::cout << "What it the type of die for player A? (Die enter 0 /LoadedDie enter 1) " << std::endl;
	std::cin >> temp;
	input[1] = validation_one_zero(temp);
	
	//The type of die for player B
	temp.clear(); //empty string temp
	std::cout << "What it the type of die for player B? (Die enter 0 /LoadedDie enter 1) " << std::endl;
	std::cin >> temp;
	input[2] = validation_one_zero(temp);
	
	//The number of sides for dice for player A
	temp.clear(); //empty string temp
	std::cout << "What it the number of sides for dice for player A? (Please enter the number of sides) " << std::endl;
	std::cin >> temp;
	input[3] = validation_positive_int(temp);
	
	//The number of sides for dice for player B
	temp.clear(); //empty string temp
	std::cout << "What it the number of sides for dice for player B? (Please enter the number of sides) " << std::endl;
	std::cin >> temp;
	input[4] = validation_positive_int(temp);
	
	
	return (1);
}
