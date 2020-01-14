//*********************************************************************
// Project3
// Program name: medusa.cpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#include "medusa.hpp"

namespace cs_medusa {
	//constructor
	Medusa::Medusa(const string name): CharacterBase(name){
		attack_sizeDie = 2;
		attack_die_side = 6; 
		defense_sizeDie = 1;
		defense_die_side = 6; 
		armor = 3;
		strength = 8;
		ctype = 4;
		type_name = "Medusa";
		max_strength = strength;
	}
	
	
	//get the attack point
	int Medusa::attack()
	{
		int point = 0;
		int roll = 0;
		
		for ( int i = 0 ; i < attack_sizeDie; i++){
			roll = rand() % attack_die_side + 1;
			point =point + roll;
		}
		if (point != 12){
		}
		else{
			point =  2147483646;  //biggest int, medusa has glare
		}
		return (point);
	}

}
