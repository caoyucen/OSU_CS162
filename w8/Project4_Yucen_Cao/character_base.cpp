//*********************************************************************
// Project3
// Program name: character_base.cpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#include "character_base.hpp"


namespace cs_characterBase {
	
	//constructor
	CharacterBase::CharacterBase(const string name)
	{
		attack_sizeDie = 0;
		attack_die_side = 0; 
		defense_sizeDie = 0;
		defense_die_side = 0; 
		armor = 0;
		strength = 0;
		ctype = 0;  //1 Vampire, 2 Barbarian, 3 Blue Men, 4 Medusa, 5 Harry Potter
		type_name = "";
    character_name = name;
	}
	
	
	//get type name
	string CharacterBase::get_name(){
		return (type_name);
	}

  string CharacterBase::get_character_name() {
    return character_name;
  }
	
	//get armor
	int CharacterBase::get_armor(){
		return (armor);
	}
	
	//get strength
	int CharacterBase::get_strength(){
		return (strength);
	}
	
	//get type
	int CharacterBase::get_ctype()
	{
		return (ctype);
	}

  /**
   * recovers pct % of max health
   */
  void CharacterBase::recover(double pct) {
    strength = ((strength + pct * max_strength) > max_strength) 
      ? (strength + pct * max_strength) : max_strength;
    //std::cout << "Recover: " << get_character_name() 
//      << "recovered " << pct << " percent of max strength, current strength is: " 
//      << get_strength() << std::endl; 
  }

  void CharacterBase::decide_recover() {
    recover(double(rand() % 101) * 0.01);
  }
	
	//get the attack point
	int CharacterBase::attack()
	{
		//std::cout<< "---Attack---" << std::endl;
		int roll = 0;
		int point = 0;
		
		for ( int i = 0 ; i < attack_sizeDie; i++){
			roll = rand() % attack_die_side + 1;
			point =point + roll;
			//std::cout << "The attack: " <<"NO." << i+1 << " dice rolls " << roll << " points." << std::endl;
		}
		
		//std::cout << type_name << " attacks " << point << " points." << std::endl;
		return (point);
	}
	
	//get the defense point
	int CharacterBase::defense()
	{
		int roll = 0;
		int point = 0;
		
		//std::cout<< "---Defense---" << std::endl;
		for (int i = 0; i < defense_sizeDie; i++){
			roll = rand() % defense_die_side + 1;
			point = point + roll;
			//std::cout << "The defense: NO." << i+1 << " dice rolls " << roll << " points." << std::endl;
		}
		
		
		//std::cout << type_name << " defenses " << point << " points." << std::endl;
		return (point);
	}
	
	void CharacterBase::actual_damage(int attack_point, int defense_point)
	{
		
		int total_damage = 0;
		
		//std::cout<< "---Total inflicted damage---" << std::endl;
		if (attack_point == 2147483646)
		{
			//std::cout << "The total inflicted damage calculation is: " << strength << "." << std::endl << "Oops, someone die because of the Glare. " << std::endl;
			strength =  0;
		}
		else{
			total_damage = attack_point - defense_point - armor;
			if (total_damage <= 0){
				//std::cout << " The defense is really strong, no damage." << std::endl;
			}
			else{
				strength =  strength - total_damage;
				//std::cout << "The total inflicted damage calculation is:" << total_damage<< std::endl;
			}
		}
		//"The Defender's Updated Strength After Damage Subtracted:"
		if (strength <= 0){
			//std::cout << type_name << " dies. No more strength" << std::endl;
		}
		else{
			//std::cout << "After Damage Subtracted: " << type_name << "'s strength is: " << strength << std::endl;
		}
	}

}
