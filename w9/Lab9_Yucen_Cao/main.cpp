//
//  main.cpp
//*********************************************************************
// Program name: Lab9
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 30, 2019
// Description: In this lab, we will create two data structures using STL containers: “stack” and “queue”.
//For the Queue container, we will implement a program that simulates a buffer. The simulation needs a function that randomly generate number. And the buffer simulation starts with no value in the buffer.
//Use a stack to create a function that creates a palindrome, which is a string that is the same forwards and backwards.
// *********************************************************************

#include <iostream>
#include "menu.hpp"
#include "functions.hpp"
#include <string>
using std::string;

int main() {
	int rounds = 0;
	int chance_to_put = 0;
	int chance_to_take = 0;
	string s; 
	
	// simulation
	std::cout << "--------------Buffer Simulation--------------" << std::endl;
	rounds = menu_number("How many rounds will be simulated?", 2147483646);
	chance_to_put = menu_number("Enter the percentage chance to put a randomly generated number at the end of buffer", 100);
	chance_to_take = menu_number("Enter the percentage chance to take out a randomly generated number at the front of buffer", 100);
	buffer_simulation(rounds, chance_to_put, chance_to_take);
	
	
	// creates a palindrome
	std::cout << "----------------Palindrome----------------" << std::endl;
	s = string_for_palindrome();
	palindrome(s);
	
	return 0;
}
