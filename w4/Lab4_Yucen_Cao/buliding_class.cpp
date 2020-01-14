//
//  buliding_class.cpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#include "buliding_class.hpp"

namespace cs_building {
	
	Building::Building(string Name, float Size, string Address)
	{
		name = Name;
		size = Size;
		address = Address;
	}
	
	//getter
	string Building::get_name(){
		return(name);
	}
	
	
	float Building::get_size(){
		return (size);
	}
	
	string Building::get_address(){
		return (address);
	}
}
