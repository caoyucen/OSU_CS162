//
//  menu.cpp
//*********************************************************************
// Program name: Lab6
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this lab, we will create a simple doubly-linked list data structures consisting of Node objects. 
// Implement the functions to do the following linked list operations:
// 1.Add a new node to the head.
// 2.Add a new node to the tail.
// 3.Delete the first node in the list.
// 4.Delete the last node in the list.
// 5.Traverse the list reversely.
// 6.Traverse the list.
// 7.Print the value of the Node the head is pointing to.
// 8.Print the value of the Node the tail is pointing to.
// *********************************************************************

#include "menu.hpp"

//choose the function from 1 to 6
int choose_function()
{
	int mark = -2222; //initialize to a big negtive int;
	string temp;
	
	temp.clear();
	std :: cout << std::endl <<"-------------------------------"<< std::endl << std::endl;
	std :: cout << std::endl << "Choose from following options: " << std::endl << std::endl;
	
	std :: cout << "1.Add a new node to the head;" << std::endl;
	std :: cout << "2.Add a new node to the tail;" << std::endl;
	std :: cout << "3.Delete from head;" << std::endl;
	std :: cout << "4.Delete from tail;" << std::endl;
	std :: cout << "5.Traverse the list reversely;" << std::endl;
	std :: cout << "6.Traverse the list;" << std::endl;
	std :: cout << "7.Print the value of the Node the head is pointing to;" << std::endl;
	std :: cout << "8.Print the value of the Node the tail is pointing to;" << std::endl;
	std :: cout << "9.Exit." << std::endl;
		
	temp = enter_input();
	mark = validation_range(temp, 1, 9);
	
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
	num = validation_positive_int(temp);
	
	return (num);
}


//if Create a linked list by reading from a text file or not
int read_orNot()
{
	int num = 0;
	string temp;
	
	temp.clear();
	std :: cout << "Do you want to Create a linked list by reading from a text file? Yes Enter 1, No Enter 0" << std::endl;
	temp = enter_input();
	num = validation_one_zero(temp);
	
	return (num);
}
