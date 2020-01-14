//
//  buliding_class.hpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#ifndef buliding_class_hpp
#define buliding_class_hpp

#include <stdio.h>
#include <iostream>
#include<string.h>
#include <stdlib.h>
using std::string;

namespace cs_building {
	class Building{
	private:
		string name;
		float size;
		string address;
		
	public:
		//constructor
		Building(string Name, float Size, string Address);
		
		//getter
		string get_name();
		float get_size();
		string get_address();
	};
}

#endif /* buliding_class_hpp */
