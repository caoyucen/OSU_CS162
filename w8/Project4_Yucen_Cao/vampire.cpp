//*********************************************************************
// Project3
// Program name: vampire.cpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#include "vampire.hpp"


namespace cs_vampire {
	//constructor
	Vampire::Vampire(const string name) : CharacterBase(name){
		attack_sizeDie = 1;
		attack_die_side = 12; 
		defense_sizeDie = 1;
		defense_die_side = 6; 
		armor = 1;
		strength = 18;
		ctype = 1;
		type_name = "Vampire";
		max_strength = strength;
	}
	
	
	
	
	
	//get the defense point
	int Vampire::defense()
	{
		int roll = 0;
		int point = 0;
		int charm = 0; //charm opponent or not , 1 for yes, 0 for not
		
		for (int i = 0; i < defense_sizeDie; i++){
			roll = rand() % defense_die_side + 1;
			point = point + roll;
		}
		
		charm = rand()%2;
		if (charm == 1){
			point = 2147483646;
		}
		else{
		}
		return (point);
	}
	

	
	
	
	
	void Vampire::actual_damage(int attack_point, int defense_point){
		int total_damage = 0;
		
		if(defense_point == 2147483646)
		{
		}
		else{
			if (attack_point == 2147483646)
			{
				strength =  0;
			}
			else{
				total_damage = attack_point - defense_point - armor;
				if (total_damage <= 0){
					// do nothing
				}
				else{
					strength =  strength - total_damage;
				}
			}
		}
	}
}
