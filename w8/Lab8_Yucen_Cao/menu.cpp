//
//  menu.cpp
//*********************************************************************
// Program name: Lab8
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 24, 2019
// Description: In this lab, we will use algorithms to search data and sort data.
//1. Read Values from Files
//2. Simple Search
//3. Sorting
//4. Binary Search
// *********************************************************************

#include "menu.hpp"



//Enter the target integer
int menu_target()
{
	int num = 0;
	string temp;
	
	temp.clear();
	std :: cout << std::endl << "What is target value: " << std::endl;
	temp = enter_input();
	num = validation_range(temp, -2147483645, 2147483646);
	
	return (num);
}

//enter the name of the output file
string menu_output_file(string s)
{
	string output_file;
	
	output_file.clear();
	std :: cout  << "Please enter the output file name for " << s << std::endl;
	output_file = enter_input();
	
	return (output_file);
}
