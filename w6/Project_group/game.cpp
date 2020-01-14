//
//  game.cpp
//  Group_P
//
//  Created by baobao on 2019/5/10.
//  Copyright © 2019年 YUCEN CAO. All rights reserved.
//

#include "game.hpp"

Game::Game(int Rows, int Cols, int Step){
	rows = Rows;
	cols = Cols;
	step = Step;
	grid = new Grid(rows, cols);
	//grid = nullptr;
	random_grid();
}


Game::~Game(){
	delete grid;
}



void Game::change_step(int N){
	step= N;
}



void Game::random_grid(){
	
	int num_ants = 0;
	int num_doodlebug = 0;
	
	//input the num of ants
	num_ants = menu_enter_ants(rows, cols);
	//input the num of doodlebugs
	num_doodlebug = menu_enter_doodlebugs(rows, cols, num_ants);
	
	
	
	//random find space to place ants
	for (int i = 0; i < num_ants; i++){
		int random_row = 0;
		int random_col = 0;
		bool space_empty = 0;
		while (!space_empty){
			//[a,b], use(rand() % (b-a+1))+ a;
			random_row = rand()% rows;
			random_col = rand()% cols;
			if (grid->check_space_empty(random_row, random_col)){
				space_empty = 1;
			}
		}
		grid->get_grid()[random_row][random_col] = new Ant(grid, random_row, random_col);
	}
	
	
	
	//random find space to place doodlebugs
	for (int i = 0; i < num_doodlebug; i++){
		int random_row = 0;
		int random_col = 0;
		bool space_empty = 0;
		while (!space_empty){
			//[a,b], use(rand() % (b-a+1))+ a;
			random_row = rand()% rows;
			random_col = rand()% cols;
			if (grid->check_space_empty(random_row, random_col)){
				space_empty = 1;
			}
		}
		grid->get_grid()[random_row][random_col] = new Doodlebug(grid, random_row, random_col);
	}
	
	std::cout << "The Random Initialized Grid is:" << std::endl;
	grid->print();
}





void Game::one_step(){  //让所有动物吃掉，move，生孩子的一步 共step步
	int count_step = 0; //count which step
	
	while (step > 0){
	// set all the critter's move to 0, new round
		for (int row = 0; row < grid->get_rows(); row++)
		{
			for (int col = 0; col < grid->get_cols(); col++)
			{
				if (grid->get_grid()[row][col] != nullptr)
				{
					grid->get_grid()[row][col]->resetMoved();
				}
			}
		}
		
	
		//move all the doodlebug, if the space is ant, eat it by move toward to the space
		move_doodlebugs();
	
	//test
		//std::cout <<"test" << std::endl;
	//test	
		
		//move all the ants
		move_ants();
	
		
		
		//doodlebugs and ants breed
		breed();
	
		
		
		//print every step
		std::cout << "NO." << ++count_step << " step." << std::endl;
		grid->print();
	
		
		step--;
		if (check_all_dead()){
			step = 0;
		}
	}
}

void Game::move_doodlebugs(){
	
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			
			if (grid->get_grid()[row][col] != nullptr && grid->get_grid()[row][col]->getType() == 2){ //type 2 for DOODLEBUG
				//the doodlebug is in on this space
				
				if (grid->get_grid()[row][col]->getMoved() == 0){
					//0 means the doodlebug didn't move
					grid->get_grid()[row][col]->move();
					// move, if the ant is on the next move space, eat it by moving to that space
				}
			}
		
		}
	}

}




void  Game::move_ants(){
	
	for (int row = 0; row < grid->get_rows(); row++)
	{
		for (int col = 0; col < grid->get_cols(); col++)
		{
			
			if (grid->get_grid()[row][col] != nullptr && grid->get_grid()[row][col]->getType() == 1) //type 1 for ant
				//the ant is in on this space
			{
				if (grid->get_grid()[row][col]->getMoved() == 0)
				{
					//0 means the ant didn't move
					grid->get_grid()[row][col]->move();
				}
			}
		}
	}
	
}



void  Game::breed(){
	for (int row = 0; row < grid->get_rows(); row++)
	{
		for (int col = 0; col < grid->get_cols(); col++)
		{
			if (grid->get_grid()[row][col] != nullptr)
			{
				//every alive critter breed
				grid->get_grid()[row][col]->breed();
				
				// the doodlebugs didn't eat for 3 days, on the end of 3 day, it will die
				if (grid->get_grid()[row][col]->getType() == 2) //type 2 for DOODLEBUG
				{
					if (dynamic_cast<Doodlebug *>(grid->get_grid()[row][col])->getDaysAfterEating() >= 3)
					{
						delete grid->get_grid()[row][col];
						grid->get_grid()[row][col] = nullptr;
					}
				}
				
				// the alive critter will add age.
				if (grid->get_grid()[row][col] != nullptr)
				{
					grid->get_grid()[row][col]->increaseAge();
				}
			}
		}
	}
}




//check if the critter on the grid all dead or not
bool Game::check_all_dead(){
	int mark_die = 1;
	for (int row = 0; row < grid->get_rows(); row++){
		for (int col = 0; col < grid->get_cols(); col++){
			if (grid->get_grid()[row][col] != nullptr){
				mark_die = 0;
				return(mark_die);
			}
		}
	}
	
	return (mark_die);
}





