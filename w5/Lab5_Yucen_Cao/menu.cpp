//
//  menu.cpp
//  Lab5
//
//  Created by YUCEN CAO on 2019/4/30.
//  Copyright © 2019年 YUCEN CAO. All rights reserved.
//
//
//Create and use recursive functions
//In this lab, we will write a program that uses three recursive functions.
//The program needs to demonstrate all three functions by providing a menu.
//The menu should provide user choices to select one of the three functions to call, after prompting user input for function call and the function outputs results, the menu should go back to the first menu to let the user continue choosing functions to call.
//
//
//

#include "menu.hpp"



//choose the function type
int menu_function_type()
{
	string temp;
	int function_type = 0;
	
	std::cout << std::endl << "-------------------------------------------------" << std::endl;
	std::cout << "Please select one of the three functions to call" << std::endl << std::endl;
	std::cout << "Function #1 prints a string in reverse" << std::endl;
	std::cout << "Function #2 calculates the sum of an array of integers" << std::endl;
	std::cout << "Function #3 calculates the triangular number of an integer N" << std::endl << std::endl;
	std::cout << "Please Enter the number: "  << std::endl;
	temp.clear();
	temp = enter_input();
	function_type = validation_range(temp, 1, 3);
	
	return (function_type);
}




//quit or not
int menu_end()
{
	int mark = -2222; //initialize to a big negtive int, 0 quit, 1 continue
	string temp;
	
	temp.clear();
	std :: cout << std::endl << "Do you want to end the game? Quit enter 0, Continue enter 1 " << std::endl;
	temp = enter_input();
	mark = validation_one_zero(temp);
	
	return(mark);
}


//for user input the string of function1
string menu_function1()
{
	string s;
	
	std :: cout << "Please enter the string to reverse: " << std::endl;
	s = enter_input();
	
	return(s);
}




//for user input the size of the array for function2
int menu_function2_size()  
{
	int n = 0;
	string temp;
	
	std :: cout << "Please enter the how many integers int the array: " << std::endl;
	temp = enter_input();
	n = validation_positive_int(temp);
	
	return (n);
}




//for user input the integers in the array for function2
int menu_function2_array(int num)  
{
	int n = 0;
	string temp;
	
	std :: cout << "Please enter the No." << num + 1 << " integer of the array: " << std::endl;
	temp = enter_input();
	n = validation_range(temp, 0, 9);
	
	return (n);
}


//for user input the integer for function3
int menu_function3()
{
	int n = 0;
	string temp;
	
	std :: cout << "Please enter an integer to print the triangular number: " << std::endl;
	temp = enter_input();
	n = validation_positive_int(temp);
	
	return(n);
}










