//
//  save_to_file.cpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#include "save_to_file.hpp"



//save the information to a file called "output_file.txt"
void save_information(University u)
{
	ofstream fout("output_file.txt");
	
	//save buildings
	u.save_all_building(fout);
	
	//save people
	u.save_all_people(fout);
	
	fout.close();
}
