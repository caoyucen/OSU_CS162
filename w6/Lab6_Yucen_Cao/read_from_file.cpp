//
//  read_from_file.cpp
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

#include "read_from_file.hpp"

//Extra Credit Task 2
//Create a linked list by reading from a text file:
bool read_from_file(NumberList* numberlist)
{
	
	ifstream fin;
	//vector <string> temp(1000); 
	string *temp;       //to store the strings from the file 
	
	temp = new string[1000];
	
	fin.open("input_file.txt");
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
	int size = 0;
	
	while(!fin.eof())
	{
		getline(fin, temp[size]);
		size++;
	}
	
	//add from the tail
	for (int i = 0; i < size; i++){
		numberlist->add_tail(myStoi(temp[i]));
	}
	
	//delete
	fin.close();
	delete []temp;
	return(1);
}
