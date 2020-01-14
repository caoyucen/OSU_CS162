//
//  instructor_class.cpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#include "instructor_class.hpp"

namespace cs_instructor{
	//constructor
	Instructor::Instructor(string s, float c):Person(s){
		rating = c;
	}
	
	
	//do_work
	void Instructor:: do_work(){
		int hour = 0;
		hour = rand()% 80 + 1;
		//1-80 hours of grading / doing homework per week reasonable
		//from [a,b], use(rand() % (b-a+1))+ a;
		std::cout << get_name() << " graded papers for " << hour << " hours." << std::endl << std::endl;
	}
	
	//print
	void Instructor:: print(){
		Person::print();
		std::cout << "Rating: " << rating << std::endl;
	}
	
	
	//save
	void Instructor:: save(ofstream& fout){
		Person::save(fout);
		fout << "Rating: " << rating << std::endl;
	}
}
