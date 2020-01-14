//*********************************************************************
// Project3
// Program name: barbarian.cpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#include "barbarian.hpp"



namespace cs_barbarian{
	
	//constructor
	Barbarian::Barbarian() : CharacterBase(){
		attack_sizeDie = 2;
		attack_die_side = 6; 
		defense_sizeDie = 2;
		defense_die_side = 6; 
		armor = 0;
		strength = 12;
		ctype = 2;
		type_name = "Barbarian";
	}	
}
