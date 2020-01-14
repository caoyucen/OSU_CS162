//
//  read_file.cpp
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

#include "read_file.hpp"

bool read_file(int *array, string s, int& size){
	ifstream fin;
	fin.open(s);
	if (!fin)
	{
		std::cout << "This file is not exist." << std::endl;
		return (0);
	}
	if(fin.eof())
	{
		std::cout << "The file is empty." << std::endl;
		return (0);
	}
	while(!fin.eof())
	{
		fin >> array[size];
		size++;
	}
	size--;  //delete the size, because the last is not exit
	//delete
	fin.close();
	return(1);
}
