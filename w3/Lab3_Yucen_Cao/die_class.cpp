//
//  die_class.cpp
//  Lab3
//
//  YUCEN CAO
//  
//In this project,  it is a 2-player game. It is played through dice. The player who rolls higher number gets one point. If both players roll the same number, it is considered a draw and no one gets a point.
//
//

#include "die_class.hpp"

namespace cs_die{
	//constructor
	Die::Die(int n)
	{
		N = n;
	}
	
	//get N
	int Die::get_N()
	{
		return (N);
	}
	
	//return a random integer between 1 and N
	int Die::rolling()
	{
		int random_num = 0;
		
		//get number from [a,b], use(rand() % (b-a+1))+ a;
		random_num = (rand() % N)+ 1;
		return (random_num);
	}
	
}
