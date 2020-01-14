//
//  game_class.cpp
//  Lab3
//
//  YUCEN CAO
//  
//In this project,  it is a 2-player game. It is played through dice. The player who rolls higher number gets one point. If both players roll the same number, it is considered a draw and no one gets a point.
//
//

#include "game_class.hpp"
namespace cs_gameClass{
	Game::Game(){
		pointA = 0;
		pointB = 0;
	}
		
	//print
	void Game::print_each_round(int RoundPointA, int RoundPointB, int whichround, int *input)
	{
		string winner;
		string typeofA;
		string typeofB;
		
		
		//winner
		if (RoundPointA > RoundPointB){
			winner = "Winner is A. ";
		}
		else if(RoundPointB > RoundPointA){
			winner = "Winner is B. ";
		}
		else{
			winner = "This is a draw.";
		}
		//typeA
		if(input[1] == 0){
			typeofA = "Die";
		}
		else{
			typeofA = "LoadedDie";
		}
		//typeB
		if(input[2] == 0){
			typeofB = "Die";
		}
		else{
			typeofB = "LoadedDie";
		}
		//print
		std:: cout << "NO." << whichround << " rounds: " << winner << std::endl << "The number rolled by A: " << RoundPointA <<"  Side of A: "<<input[3] <<"  Type of A: " << typeofA << std::endl <<"The number rolled by B: " << RoundPointB <<"  Side of B: "<<input[4]<< "  Type of B: " << typeofB << std::endl;
	}
	
	
	//run game
	void Game::run_game(int *input)
	{
		int rounds = 0;
		int RoundPointA = 0;
		int RoundPointB = 0;
		
		//input[0]: the number of the rounds 
		//input[1]: the type of die for player A (Die is 0 /LoadedDie is 1)
		//input[2]: the type of die for player B (Die is 0 /LoadedDie is 1)
		//input[3]: the number of sides for dice for player A
		//input[4]: the number of sides for dice for player B
		rounds = input[0];
		Die *playerA = NULL;
		Die *playerB = NULL;
		
		//player A
		if (input[1] == 0) {
			Die tempA(input[3]);
			playerA = &tempA;
		}
		else {
			LoadedDie tempA(input[3]);
			playerA = &tempA;
		}
		
		for (int i = 0; i < rounds; i++) {
			playerA-> rolling();
		}
		//player B
		if (input[2] == 0) {
			Die tempB(input[4]);
			playerB = &tempB;
		}
		else {
			LoadedDie tempB(input[4]);
			playerB = &tempB;
		}
		
		for (int i = 0; i < rounds; i++) {
			RoundPointA = playerA->rolling();
			RoundPointB = playerB->rolling();
			print_each_round(RoundPointA, RoundPointB, (i+1), input);
			if(RoundPointA > RoundPointB){
				pointA++;
			}
			else if (RoundPointA < RoundPointB){
				pointB++;
			}
			std::cout << "The score result, A:B = " << pointA <<":"<<pointB << std::endl << std::endl;
		}
	}
	
	//print winner
	void Game::winner(){
		
		//show result
		std::cout << "A wins " << pointA << " rounds." << std::endl <<  "B wins " << pointB << " rounds." << std::endl;
		
		//final
		if (pointA > pointB){
			std::cout << "The final winner is A" << std::endl << std::endl;
		}
		else if (pointA < pointB){
			std::cout << "The final winner is B" << std::endl << std::endl;
		}
		else{
			std::cout << "The final is a draw" << std::endl << std::endl;
		}
	}
		
}
