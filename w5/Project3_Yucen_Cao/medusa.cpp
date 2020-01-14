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
	Medusa::Medusa(): CharacterBase(){
		attack_sizeDie = 2;
		attack_die_side = 6; 
		defense_sizeDie = 1;
		defense_die_side = 6; 
		armor = 3;
		strength = 8;
		ctype = 4;
		type_name = "Medusa";
	}
	
	
	//get the attack point
	int Medusa::attack()
	{
		int point = 0;
		int roll = 0;
		
		std::cout << "---Attacke---" << std::endl;
		for ( int i = 0 ; i < attack_sizeDie; i++){
			roll = rand() % attack_die_side + 1;
			point =point + roll;
			std::cout << "The attack: " <<"NO." << i+1 << " dice rolls " << roll << " points." << std::endl;
		}
		if (point != 12){
		std::cout << type_name << " attacks " << point << " points." << std::endl;
		}
		else{
			point =  2147483646;  //biggest int, medusa has glare
			std::cout << " Medusa has Glare, don't look at her. " << std::endl;
		}
		return (point);
	}
}
