#include "game_duo_player.hpp"

namespace cs_game {
	
	Player::Player()
	:score(0) {} 
		
	GameDuoPlayer::GameDuoPlayer()
	:player_1(Player()), player_2(Player()) {} 
	
	void GameDuoPlayer::add_fighter_by_type(const int team, const int type, const string name){
		Player* the_player = NULL;
		if (team == 0) {
			the_player = &player_1;
		} else {
			the_player = &player_2;
		}
		
		switch (type) {
			case 1:
				(the_player -> lineup).push(new Vampire(name));
				break;
			case 2:
				(the_player -> lineup).push(new Barbarian(name));
				break;
			case 3:
				(the_player -> lineup).push(new BlueMen(name));
				break;
			case 4:
				(the_player -> lineup).push(new Medusa(name));
				break;
			case 5:
				(the_player -> lineup).push(new Harry_potter(name));
				break;
			default:
				break;
		}
	}
	
	void GameDuoPlayer::decide_winner() {
		int score_diff = player_1.score - player_2.score;
		if (score_diff > 0) {
			std::cout << "Tournament ended: Team A won with score " << player_1.score << ":" << player_2.score <<  "!" << std::endl;
		} else if (score_diff == 0) {
			std::cout << "Tournament ended: Team A and Team B got a tie with score" << player_1.score << ":" << player_2.score <<  "!" << std::endl;
		} else {
			std::cout << "Tournament ended: Team B won with score " << player_1.score << ":" << player_2.score <<  "!" << std::endl;
		}
	}
	
	/**
	 * play alternatively 
	 */
	void GameDuoPlayer::play() {
		int round = 1;
		while (!player_1.lineup.empty() && !player_2.lineup.empty()) {
			
			auto character_1 = player_1.lineup.front();
			auto character_2 = player_2.lineup.front();
			
			Game current_game;
			current_game.set_fight(character_1, character_2);
			current_game.fight();
			
			string winner;
			
			if (character_1 -> get_strength() <= 0) {
				losers.push(character_1 -> get_character_name());
				player_1.lineup.pop();
				winner = character_2 -> get_character_name();
			} else {
				// recover with certain chance 
				character_1 -> decide_recover();
				player_1.lineup.step();
				player_1.score += 1;
			} 
			if (character_2 -> get_strength() <= 0) {
				losers.push(character_2 -> get_character_name());
				player_2.lineup.pop();
				winner = character_1 -> get_character_name();
			} else {
				character_2 -> decide_recover();
				player_2.lineup.step();
				player_2.score += 1;
			} 
			
			std::cout << "Round " << round++ 
			<< ": Team A " << character_1 -> get_character_name() 
			<< " vs. "
			<< " Team B " << character_2 -> get_character_name() << ", "
			<< winner << " Won!" << std::endl;
		}
		
		if (player_1.lineup.empty() || player_2.lineup.empty()) {
			decide_winner();
		}
	}
			
	
} // end namespace cs_game
