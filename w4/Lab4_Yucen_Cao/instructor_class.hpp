//
//  instructor_class.hpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#ifndef instructor_class_hpp
#define instructor_class_hpp

#include <stdio.h>
#include <iostream>
#include<string.h>
#include <stdlib.h>
#include <fstream>
#include "person_class.hpp"
using std::string;
using std :: cout;
using std :: endl;
using std::ifstream;
using std::ofstream;
using namespace cs_person;

namespace cs_instructor{
	class Instructor : public Person{
	private:
		float rating;
		
	public:
		//constructor
		Instructor(string s, float c);
		
		//do_work
		virtual void do_work();
		
		//print
		virtual void print();
		
		//save
		virtual void save(ofstream& fout);
	};
}

#endif /* instructor_class_hpp */
