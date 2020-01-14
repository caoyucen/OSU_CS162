//*********************************************************************
// Project3
// Program name:  game.hpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#ifndef game_hpp
#define game_hpp

#include <stdio.h>
#include "character_base.hpp"
#include "vampire.hpp"
#include "barbarian.hpp"
#include "blueMen.hpp"
#include "medusa.hpp"
#include "harry_potter.hpp"
using namespace cs_characterBase;
using namespace cs_vampire;
using namespace cs_barbarian;
using namespace cs_blueMen;
using namespace cs_medusa;
using namespace cs_harry_potter;

namespace cs_game {
	class Game{
	public:
		CharacterBase** fighter;   //array pointer to the point
		//constract
		Game();
		
		//deconstruct
//		~Game();
		
		//set fighter
		//get the type from the menu. and set it
		void set_fight(int* type); 
    void set_fight(CharacterBase* fighter_1, CharacterBase* fighter_2);
		
		//fight
		bool fight();
	};
}

#endif /* game_hpp */
