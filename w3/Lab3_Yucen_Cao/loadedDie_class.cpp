//
//  loadedDie_class.cpp
//  Lab3
//
//  YUCEN CAO
//  
//In this project,  it is a 2-player game. It is played through dice. The player who rolls higher number gets one point. If both players roll the same number, it is considered a draw and no one gets a point.
//
//

#include "loadedDie_class.hpp"

namespace cs_loadedDie{
	
	//constructor
	LoadedDie::LoadedDie(int n): Die(n){}
	
	//return a random integer between 1 and N, and have almost 50% chance to add 1
	int LoadedDie:: rolling()
	{
		int N = 0;
		int random_num = 0;
		
		//get N 
		N = get_N();
		//get number from [a,b], use(rand() % (b-a+1))+ a;
		random_num = (rand() % N)+ 1;
		//have 50% chance to add 1
		random_num = random_num + rand() % 2;
		//To check the edge, if over the edge then --
		if(random_num >N){
			random_num--;
		}
		
		return (random_num);
	}
}
