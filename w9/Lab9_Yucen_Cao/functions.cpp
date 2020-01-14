//
//  functions.cpp
//*********************************************************************
// Program name: Lab9
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 30, 2019
// Description: In this lab, we will create two data structures using STL containers: “stack” and “queue”.
//For the Queue container, we will implement a program that simulates a buffer. The simulation needs a function that randomly generate number. And the buffer simulation starts with no value in the buffer.
//Use a stack to create a function that creates a palindrome, which is a string that is the same forwards and backwards.
// *********************************************************************

#include "functions.hpp"

//simulates a buffer
void buffer_simulation(int rounds, int chance_to_put, int chance_to_take)
{
	queue<int> buffer;
	float al = 0;
	for(int i = 0; i < rounds; i++){
		int N = 0;
		float size = 0;  //size for the buffer
		int appending_number = 0;
		int removing_numbers = 0;
		
		N = rand()%1000 + 1;
		appending_number = rand()%100 + 1;
		removing_numbers = rand()%100 + 1;
		
//		test:
//		std::cout << "N: " << N <<" appending_number:" << appending_number << " removing_numbers:" << removing_numbers << std::endl;
		if (appending_number <= chance_to_put){
			buffer.push(N);
		}
		if (!buffer.empty()){
			if (removing_numbers <= chance_to_take){
				buffer.pop();
			}
		}
		//output buffer
		std::cout << "-------round "<< i+1 << "-------" << std::endl;
		print_buffer(buffer);
		//output size
		size = buffer.size();
		std::cout << "Output the length of the buffer:" << std::endl;
		std::cout << size << std::endl;
		//output average size
		al = (al * i + size) /(i+1);
		std::cout << "Output the average length of buffer:" << std::endl;
		std::cout << al << std::endl << std::endl;
	}
}





//output buffer
void print_buffer(queue<int> buffer)
{
	std::cout << "Output the values in the buffer:" << std::endl;
	while (!buffer.empty()){
		std::cout << buffer.front() << " ";
		buffer.pop();
	}
	std::cout << std::endl;
}




// creates a palindrome
void palindrome(string s)
{
	stack<char> p; //string for palindrome 
	int size = 0; //size of string s
	
	size = int(s.size());
	for (int i = 0; i < size; i++){
		p.push(s[i]);
	}
	
	std::cout << "The palindrome of the string is:" << std::endl;
	std::cout << s;
	while (!p.empty()){
		std::cout << p.top();
		p.pop();
	}
	std::cout << std::endl << std::endl;
}







