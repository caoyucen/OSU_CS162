//*********************************************************************
// Project3
// Program name: blueMen.hpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#ifndef blueMen_hpp
#define blueMen_hpp

#include <stdio.h>
#include "character_base.hpp"
using namespace cs_characterBase;

namespace cs_blueMen {
	class BlueMen : public CharacterBase{
	public:
		//constructor
		BlueMen(const string name = "");
		
		
		virtual void actual_damage(int attack_point, int defense_point);
		
	};
}

#endif /* blueMen_hpp */
