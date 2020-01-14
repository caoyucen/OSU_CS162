//
//  game.hpp
//  Group_P
//
//  Created by baobao on 2019/5/10.
//  Copyright © 2019年 YUCEN CAO. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

#include <stdio.h>
#include "Grid.hpp"
#include "menu.hpp"
#include "Ant.hpp"
#include "Doodlebug.hpp"
#include "Critter.hpp"

class Game{
private:
	int step;
	int rows;
	int cols;
	Grid *grid;
public:
	Game(int Rows, int Cols, int Step);
	~Game();
	void change_step(int N);
	void random_grid();
	void one_step();  //让所有动物吃掉，move，生孩子的一步 共step步
	void move_doodlebugs();
	void move_ants();
	void breed();
	bool check_all_dead();
};

#endif /* game_hpp */
