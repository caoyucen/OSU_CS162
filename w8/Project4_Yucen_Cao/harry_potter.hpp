//*********************************************************************
// Project3
// Program name: harry_potter.hpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#ifndef harry_potter_hpp
#define harry_potter_hpp

#include <stdio.h>
#include "character_base.hpp"
using namespace cs_characterBase;

namespace cs_harry_potter {
	class Harry_potter:public CharacterBase{
	private:
		int die_time;
	public:
		//constructor
		Harry_potter(const string name = "");
		
		virtual void actual_damage(int attack_point, int defense_point);
	};
}


#endif /* harry_potter_hpp */
