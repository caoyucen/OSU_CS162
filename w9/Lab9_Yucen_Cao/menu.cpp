//
//  menu.cpp
//*********************************************************************
// Program name: Lab9
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 30, 2019
// Description: In this lab, we will create two data structures using STL containers: “stack” and “queue”.
//For the Queue container, we will implement a program that simulates a buffer. The simulation needs a function that randomly generate number. And the buffer simulation starts with no value in the buffer.
//Use a stack to create a function that creates a palindrome, which is a string that is the same forwards and backwards.
// *********************************************************************

#include "menu.hpp"


//Enter the number
int menu_number(string s, int max)
{
	int num = 0;
	string temp;
	
	temp.clear();
	std :: cout << std::endl << s << std::endl;
	temp = enter_input();
	num = validation_range(temp, 0, max);
	
	return (num);
}


//enter a string for palindrome
string string_for_palindrome()
{
	string s;
	
	s.clear();
	std :: cout  <<"Please enter a string to palindrome."<< std::endl;
	s = enter_input();
	
	return (s);
}



