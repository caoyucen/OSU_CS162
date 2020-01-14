//*********************************************************************
// Project3
// Program name: character_base.hpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************

#ifndef character_base_hpp
#define character_base_hpp

#include <stdlib.h>
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;


namespace cs_characterBase{
	class CharacterBase{
	protected:
		int attack_sizeDie; //how many dies when attatck
		int attack_die_side; //the side of die when attatck
		int defense_sizeDie; //how many dies when defense
		int defense_die_side; //the side of die when defense
		int armor;
    int max_strength;  //the orignal stength of a character
		int strength;
		int ctype;   //type of the character
		string type_name;  //the name 
    string character_name; //the character name
		
	public:
		
		//constructor
		CharacterBase(const string name = "");
		
		//get type name
		string get_name();

    string get_character_name();
		
		//get armor
		int get_armor();
		
		//get strength
		int get_strength();
		
		//get type of the character
		int get_ctype();
		
//		int change_strength(int reduce_strength);
//
    void recover(double pct);

    void decide_recover();
		
		//get the attack point
		virtual int attack();
		
		//get the defense point
		virtual int defense();
		
		//virtual void hurtedBy(CharacterBase* Character);
		virtual void actual_damage(int attact_point, int defense_point);

	};
	
}

#endif /* character_base_hpp */
