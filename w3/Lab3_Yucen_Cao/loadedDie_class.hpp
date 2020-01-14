//
//  loadedDie_class.hpp
//  Lab3
//
//  YUCEN CAO
//  
//In this project,  it is a 2-player game. It is played through dice. The player who rolls higher number gets one point. If both players roll the same number, it is considered a draw and no one gets a point.
//
//

#ifndef loadedDie_class_hpp
#define loadedDie_class_hpp

#include <stdio.h>
#include "die_class.hpp"

namespace cs_loadedDie{
	class LoadedDie : public cs_die::Die{
		
	public:
		
	public:
		//constructor
		LoadedDie(int n);
		
		//return a random integer between 1 and N, and have almost 50% chance to add 1
		virtual int rolling();
		
	};
}

#endif /* loadedDie_class_hpp */
