#ifndef game_duo_player_hpp
#define game_duo_player_hpp

#include "loop_container.hpp"
#include <stdio.h>
#include <string>
#include "character_base.hpp"
#include "vampire.hpp"
#include "barbarian.hpp"
#include "blueMen.hpp"
#include "medusa.hpp"
#include "harry_potter.hpp"
#include "game.hpp"


namespace cs_game {
	
	using namespace cs_container;
	
	class Player {
	public:
		LoopContainer<CharacterBase*> lineup;
		int score;
		
		Player();
	};
	
	class GameDuoPlayer {
	public:
		LoopContainer<std::string> losers;  //one loser pile for both teams
		Player player_1;
		Player player_2;
		
		GameDuoPlayer();
		void add_fighter_by_type(const int team, const int type, const string name);
		void decide_winner();
		
		// play tournament
		void play(); 
	};
	
}
#endif

