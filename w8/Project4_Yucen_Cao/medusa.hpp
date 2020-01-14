//*********************************************************************
// Project3
// Program name: medusa.hpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#ifndef medusa_hpp
#define medusa_hpp

#include <stdio.h>
#include "character_base.hpp"
using namespace cs_characterBase;

namespace cs_medusa {
	class Medusa : public CharacterBase{
	public:
		//constructor
		Medusa(const string name = "");
		
		//get the attack point
		virtual int attack();
		
	};
}

#endif /* medusa_hpp */
