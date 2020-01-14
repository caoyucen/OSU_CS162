//
//  person_class.hpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#ifndef person_class_hpp
#define person_class_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include<string.h>
#include <stdlib.h>
using std :: cout;
using std :: endl;
using std :: string;
using std::ifstream;
using std::ofstream;

namespace cs_person{
	class Person{
	private:
		string name;
		int age;
		
	public:
		//constructor
		Person(string s);
		
		//do_work
		virtual void do_work() = 0;
		
		
		//print
		virtual void print();
		
		//save
		virtual void save(ofstream& fout);
		
		// getter
		string get_name();
		
	
	};
}

#endif /* person_class_hpp */
