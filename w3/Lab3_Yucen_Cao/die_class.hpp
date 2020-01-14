//
//  die_class.hpp
//  Lab3
//
//  YUCEN CAO
//  
//In this project,  it is a 2-player game. It is played through dice. The player who rolls higher number gets one point. If both players roll the same number, it is considered a draw and no one gets a point.
//
//

#ifndef die_class_hpp
#define die_class_hpp

#include <stdio.h>
#include <stdlib.h>

namespace cs_die{
	class Die{
	private:
		int N;
		
	public:
		//constructor
		Die(int n);
		
		//get N
		int get_N();
		
		//return a random integer between 1 and N
		virtual int rolling();
	};
}

#endif /* die_class_hpp */
