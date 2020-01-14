//*********************************************************************
// Project3
// Program name: blueMen.cpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************
#include "blueMen.hpp"

namespace cs_blueMen {
	//constructor
	BlueMen::BlueMen(): CharacterBase(){
		attack_sizeDie = 2;
		attack_die_side = 10; 
		defense_sizeDie = 3;
		defense_die_side = 6; 
		armor = 3;
		strength = 12;
		ctype = 3;
		type_name = "BlueMen";
	}
	
	
	void BlueMen::actual_damage(int attack_point, int defense_point){
		int total_damage = 0;
		
		std::cout<< "---Total inflicted damage---" << std::endl;
		if (attack_point == 2147483646)
		{
			std::cout << "The total inflicted damage calculation is: " << strength << "." << std::endl << "Oops, someone die because of the Glare. " << std::endl;
			strength =  0;
		}
		else{
			total_damage = attack_point - defense_point - armor;
			if (total_damage <= 0){
				std::cout << " The defense is really strong, no damage." << std::endl;
			}
			else{
				strength =  strength - total_damage;
				std::cout << "The total inflicted damage calculation is:" << total_damage<< std::endl;
			}
		}
		if (strength <= 0){
			std::cout << type_name << " dies. No more strength" << std::endl;
		}
		else{
			std::cout << "After Damage Subtracted: " << type_name << "'s strength is: " << strength << std::endl;
		}
		
		
		//blue man change die or not
		if (strength <= 8 && strength > 4){
			defense_sizeDie = 2;
		}
		else if (strength <= 4){
			defense_sizeDie = 1;
		}
	}		
}
