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
	Harry_potter::Harry_potter() : CharacterBase(){
		attack_sizeDie = 2;
		attack_die_side = 6; 
		defense_sizeDie = 2;
		defense_die_side = 6; 
		armor = 0;
		strength = 10;
		ctype = 5;
		die_time = 0;
		type_name = "Harry_potter";
	}
	
	
	
	
	
	
	void Harry_potter::actual_damage(int attack_point, int defense_point){
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
		
		//harry get back to life or not 
		if (strength <= 0 && die_time == 0){
			die_time = 1;
			std::cout << "Harry Potter uses Hogwarts." << std::endl;
			strength = 20;
		}

		if (strength <= 0){
			std::cout << type_name << " Dies. No more strength" << std::endl;
		}
		else{
			std::cout << "After Damage Subtracted: " << type_name << "'s strength is: " << strength << std::endl;
		}	
	}
}
