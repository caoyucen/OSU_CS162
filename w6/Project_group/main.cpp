//
//  main.cpp
//  Group_P
//
//  Created by baobao on 2019/5/10.
//  Copyright © 2019年 YUCEN CAO. All rights reserved.
//

#include <iostream>
#include "menu.hpp"
#include "game.hpp"

int main() {
	//写我们做了extra point，等等
	
	int rows = 0;
	int cols = 0;
	int step = 0;
	int mark_continue = 1;
	
	rows = menu_enter_rows();
	cols = menu_enter_cols();
	step = menu_enter_steps();
	
	Game game(rows, cols, step);
	
	while (mark_continue)
	{
		game.one_step(); 
		
		if (game.check_all_dead()){
			mark_continue = 0;
			std::cout << "All Critters are dead, game can't comtinue." << std::endl; 
			std::cout << "--------------  GAME    OVER  -------------" << std::endl; 
		}
		else{
			mark_continue = menu_continue();
			if (mark_continue == 1)
			{
				step = menu_enter_steps();
				game.change_step(step);
			}
		}
	}
	
	return (0);
}








