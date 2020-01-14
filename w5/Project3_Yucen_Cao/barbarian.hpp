//*********************************************************************
// Project3
// Program name: barbarian.hpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#ifndef barbarian_hpp
#define barbarian_hpp

#include <stdio.h>
#include "character_base.hpp"
using namespace cs_characterBase;


namespace cs_barbarian{
	class Barbarian : public CharacterBase{
	public:
		//constructor
		Barbarian();
		
		
		//virtual void actual_damage(CharacterBase *attackC);
	};
}

#endif /* barbarian_hpp */
