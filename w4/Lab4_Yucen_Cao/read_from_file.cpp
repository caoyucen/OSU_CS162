//
//  read_from_file.cpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#include "read_from_file.hpp"

//Add a person by reading a saved information from a file 
bool add_people_file(int *add_type, float *add_scores, string& add_name)
{
	
	ifstream fin;
	vector <string> temp(3); //to store the strings from the file 
	
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
	int i = 0;
	while(!fin.eof())
	{
		getline(fin, temp[i]);
		i++;
	}
	
	*add_type = myStoi(temp[0]); //0 for student, 1 for instructor.
	add_name = temp[1];
	*add_scores = myStof(temp[2]);
	
	fin.close();
	temp.clear();
	return(1);
}
