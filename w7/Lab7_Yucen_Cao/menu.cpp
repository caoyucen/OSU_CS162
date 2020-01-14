//
//  menu.cpp
//*********************************************************************
// Program name: Lab7
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 16, 2019
// Description: In this lab, we will create a queue data structure utilizing circular linked list.
//1. Add a value to the back of queue
//2. Display the front value
//3. Remove the front node
//4. Display the queue’s content
//5.Exit.
// *********************************************************************

#include "menu.hpp"


//choose the function from 1 to 5
int choose_function()
{
	int mark = -2222; //initialize to a big negtive int;
	string temp;
	
	temp.clear();
	std :: cout << std::endl << std::endl << std::endl <<"-------------------------------";
	std :: cout << std::endl << "Choose from following options: " << std::endl << std::endl;
	std :: cout << "1. Add a value to the back of queue" << std::endl;
	std :: cout << "2. Display the front value" << std::endl;
	std :: cout << "3. Remove the front node" << std::endl;
	std :: cout << "4. Display the queue’s content" << std::endl;
	std :: cout << "5.Exit." << std::endl;
	
	temp = enter_input();
	mark = validation_range(temp, 1, 5);
	
	return(mark);
}





//Enter a positive integer:
int menu_enter_number()
{
	int num = 0;
	string temp;
	
	temp.clear();
	std :: cout << std::endl << "Please enter an integer between 1 and 100000 (inclusive) for the value of the node: " << std::endl;
	temp = enter_input();
	num = validation_range(temp, 1, 100000);
	
	return (num);
}
