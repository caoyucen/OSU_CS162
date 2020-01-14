//*********************************************************************
// Project4
// Program name: main.cpp
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this project, we will develop a fantasy combat game. This is going to be part 1 of the game development in which we develop the characters and a menu to test the characters.
// The game universe contains Vampire, Barbarian, Blue Men, Medusa, and Harry Potter. Each character has attributes of attack, defense, armor, and strength points.
// *********************************************************************


#include <iostream>
#include "character_base.hpp"
#include "menu.hpp"
#include "game.hpp"
#include "game_duo_player.hpp"
using namespace cs_characterBase;
using namespace cs_game;
using namespace cs_harry_potter;
using namespace cs_medusa;
using namespace cs_vampire;

////start or not
//int menu_start();
//
////end or not
//int menu_end();
//
////number of fighters for both team
//int menu_teamNumber();
//
////enter the information for each fighter
//void menu_eachFighter(int mark, int& type, string& name);
//
////display the content of the loser pile or not 
//int menu_loser();

int main() {
	
	
	//  game_duo_player.player_1.lineup.push(new Harry_potter());
	//  game_duo_player.player_1.lineup.push(new Barbarian());
	//  game_duo_player.player_2.lineup.push(new Vampire());
	//  game_duo_player.player_2.lineup.push(new Medusa());
	//
	//  game_duo_player.play();
	
	if (menu_start() == 1) {
		while (1) {
			GameDuoPlayer game_duo_player;
			int num_fighters = menu_teamNumber();
			for (int i = 0; i < num_fighters; i++) {
				int type = -1;
				string name;
				menu_eachFighter("A", i, type, name);
				game_duo_player.add_fighter_by_type(0, type, name);
				menu_eachFighter("B", i, type, name);
				game_duo_player.add_fighter_by_type(1, type, name);
			}
			game_duo_player.play();
			if (menu_loser() == 1) {
				game_duo_player.losers.print();
			}
			if (menu_end() == 2) {
				break;
			}
		}
	}
	
	return 0;
}

