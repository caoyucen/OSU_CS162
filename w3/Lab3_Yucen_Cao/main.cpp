//
//  main.cpp
//  Lab3
//
//  YUCEN CAO
//  
//In this project,  it is a 2-player game. It is played through dice. The player who rolls higher number gets one point. If both players roll the same number, it is considered a draw and no one gets a point.
//
//

#include <iostream>
#include <iostream>
#include <stdio.h>
#include "menu.hpp"
#include "game_class.hpp"
using namespace cs_gameClass;
using std :: cout;

int main() 
{
	int input[5] = {0}; 
	//input[0]: the number of the rounds 
	//input[1]: the type of die for player A (Die is 0 /LoadedDie is 1)
	//input[2]: the type of die for player B (Die is 0 /LoadedDie is 1)
	//input[3]: the number of sides for dice for player A
	//input[4]: the number of sides for dice for player B
	
	if (menu(input) == 0)
	{
		//qiut the game
		return (0);
	}
	else
	{
		Game g;
		
		//run game
		g.run_game(input);
		
		//get winner
		g.winner();
	}
	
	return 0;
}
