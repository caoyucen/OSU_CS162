//*********************************************************************
// Project3
// Program name: harry_potter.cpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#include "harry_potter.hpp"

namespace cs_harry_potter {
	
	//constructor
	Harry_potter::Harry_potter(const string name) : CharacterBase(name){
		attack_sizeDie = 2;
		attack_die_side = 6; 
		defense_sizeDie = 2;
		defense_die_side = 6; 
		armor = 0;
		strength = 10;
		ctype = 5;
		die_time = 0;
		type_name = "Harry_potter";
		max_strength = strength;
	}
	
	void Harry_potter::actual_damage(int attack_point, int defense_point){
		int total_damage = 0;
		
		if (attack_point == 2147483646)
		{
			strength =  0;
		}
		else{
			total_damage = attack_point - defense_point - armor;
			if (total_damage <= 0){
			}
			else{
				strength =  strength - total_damage;
			}
		}
		
		//harry get back to life or not 
		if (strength <= 0 && die_time == 0){
			die_time = 1;
			strength = 20;
		}

	}
}
