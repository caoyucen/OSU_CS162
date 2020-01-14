//
//  person_class.cpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#include "person_class.hpp"

namespace cs_person{
	
	//constructor
	Person :: Person(string s){
		name = s;
		age = rand()% 85 +16;
		//age 16 - 100 reasonable for both students and instructors
		//from [a,b], use(rand() % (b-a+1))+ a;
	}
	
	// getter
	string Person:: get_name(){
		return (name);
	}
	
	
	//print
	void Person:: print(){
		std :: cout << "Name: " << name << std::endl;
		std :: cout << "Age: " << age << std::endl;
	}
	
	//save
	void Person:: save(ofstream& fout){
		fout << "Name: " << name << std::endl;
		fout << "Age: " << age << std::endl;
	}
	
}
