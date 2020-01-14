 //*********************************************************************
// Project3
// Program name: game.cpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#include "game.hpp"

namespace cs_game {
	
	//constract
	Game::Game(){
		fighter = new CharacterBase*[2];
		
	}
	
	//deconstruct
//	Game::~Game(){
//		for (int i = 0; i < 2; i++){
//			delete fighter[i];
//		}
//		delete [] fighter;
//	}
	
	//set fighter
	//get the type from the menu. and set it

   	
  void Game::set_fight(CharacterBase* fighter_1, CharacterBase* fighter_2) {
    fighter[0] = fighter_1;
    fighter[1] = fighter_2;
//    std::cout << "fighter_0: " << fighter[0] -> get_name() << ", current_strength: " << fighter[0] -> get_strength() << std::endl;
//    std::cout << "fighter_1: " << fighter[1] -> get_name() << ", current_strength: " << fighter[1] -> get_strength() << std::endl;

    
  }
	
	//fight
	bool Game::fight(){
		int die = 0;
		int attack_point = 0;
		int defense_point = 0;
		int round = 0;
		
		while (die == 0)
		{
//			std::cout << std::endl << std::endl << std::endl <<"---------------------------------" << std::endl << "     The NO."<< ++round << " round " <<  std::endl << "---------------------------------" << std::endl;
//			std::cout << "------ The First attack -------"<< std::endl;
//			//fight0(attacker) to fight1
//			std::cout << "Attacker type is: " << fighter[0]->get_name() << ", strength: " << fighter[0] -> get_strength() << std::endl;
//			std::cout << "Defender type is: " << fighter[1]->get_name() << ", strength: " << fighter[1] -> get_strength() << std::endl <<"Defender    armor is: " << fighter[1]->get_armor() << std::endl << "Defender strength is: " << fighter[1]->get_strength() << std::endl;
			attack_point = fighter[0]->attack();
			defense_point = fighter[1]->defense();
			fighter[1]->actual_damage(attack_point, defense_point);
			
			
//			std::cout << std::endl << "------ The Second attack -------"<< std::endl;
//			//fight0(attacker) to fight1
//			std::cout << "Attacker type is: " << fighter[1]->get_name() << std::endl;
//			std::cout << "Defender type is: " << fighter[0]->get_name() << std::endl <<"Defender    armor is: " << fighter[0]->get_armor() << std::endl << "Defender strength is: " << fighter[0]->get_strength() << std::endl;
			attack_point = fighter[1]->attack();
			defense_point = fighter[0]->defense();
			fighter[0]->actual_damage(attack_point, defense_point);
			
			if(fighter[0]->get_strength()<= 0){
				//std::cout << "--- Game over ---" << std::endl;
				if (fighter[1]->get_strength() <= 0){
					die = 1;
					//std::cout << "All of them are dead. This is a tie." << std::endl;
//					std::cout << "both " << fighter[0] -> get_character_name() << " and " << fighter[1] -> get_character_name() << " dead, this is a tie" << std::endl;
				}
				else{
					die = 1;
				}
			}
			else if(fighter[1]->get_strength() <= 0){
				//std::cout << "--- Game over ---" << std::endl;
				die = 1;
			}
			
		}
		
		
		return (0);
	}

	
	
	
	
	
}
