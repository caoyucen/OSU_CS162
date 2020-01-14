//
//  game_class.hpp
//  Lab3
//
//  YUCEN CAO
//  
//In this project,  it is a 2-player game. It is played through dice. The player who rolls higher number gets one point. If both players roll the same number, it is considered a draw and no one gets a point.
//
//

#ifndef game_class_hpp
#define game_class_hpp

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "die_class.hpp"
#include "loadedDie_class.hpp"
using std::cout;
using std::cin;
using std::string;
using namespace cs_die;
using namespace cs_loadedDie;


namespace cs_gameClass{
	class Game{
	private:
		int pointA;
		int pointB;
		
	public:
		//constructor
		Game();
		
		//change pointA and pointB
		void changePoint(int a, int b);
		
		//run game
		void run_game(int *input);
		
		
		//print
		void print_each_round(int RoundPointA, int RoundPointB, int whichround, int *input);
		//void print_each_round(int typeA, int typeB, int RoundPointA, int RoundPointB, int whichround);
		
		//print winner
		void winner();
		
	};
}
#endif /* game_class_hpp */
