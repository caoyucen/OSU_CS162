//
//  menu.cpp
//  Group_P
//
//  Created by baobao on 2019/5/10.
//  Copyright © 2019年 YUCEN CAO. All rights reserved.
//

#include "menu.hpp"


int menu_enter_rows()
{
	int num = 0;
	string temp;
	
	temp.clear();
	std :: cout << std::endl << "How many rows? Please enter an integer between 20 and 200 (inclusive) : " << std::endl;
	temp = enter_input();
	num = validation_range(temp, 20, 200);
	
	return (num);
}





int menu_enter_cols()
{
	int num = 0;
	string temp;
	
	temp.clear();
	std :: cout << std::endl << "How many cols? Please enter an integer between 20 and 200 (inclusive) : " << std::endl;
	temp = enter_input();
	num = validation_range(temp, 20, 200);
	
	return (num);
}






int menu_enter_steps()
{
	int num = 0;
	string temp;
	
	temp.clear();
	std :: cout << std::endl << "How many steps? Please enter an integer less than 2147483647 : " << std::endl;
	temp = enter_input();
	num = validation_range(temp, 1, 2147483647);
	
	return (num);
}



int menu_enter_ants(int Rows, int Cols)
{
	int num = 0;
	string temp;
	
	temp.clear();
	std :: cout << std::endl << "How many ants? Please enter an integer less than " << Rows*Cols -1 << " : " << std::endl;
	temp = enter_input();
	num = validation_range(temp, 1, (Rows*Cols -1));
	
	return (num);
}





int menu_enter_doodlebugs(int Rows, int Cols, int numAnts)
{
	int num = 0;
	string temp;
	
	temp.clear();
	std :: cout << std::endl << "How many doodlebugs? Please enter an integer less than " << Rows*Cols - numAnts << " : " << std::endl;
	temp = enter_input();
	num = validation_range(temp, 1, (Rows*Cols  - numAnts));
	
	return (num);
}



//continue or not
int menu_continue(){
	int mark = -2222; //initialize to a big negtive int, 0 quit, 1 continue
	string temp;
	
	temp.clear();
	std :: cout << std::endl << "Do you continue the game? Quit enter 0, Continue enter 1 " << std::endl;
	temp = enter_input();
	mark = validation_one_zero(temp);
	
	return(mark);
}





