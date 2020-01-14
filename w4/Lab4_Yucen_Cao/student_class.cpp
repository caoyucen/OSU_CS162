//
//  student_class.cpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#include "student_class.hpp"

namespace cs_student{
	
	//constructor
	Student :: Student(string s, float c) : Person(s){
		gpa = c;
	}
	
	
	//do_work
	void Student:: do_work(){
		int hour = 0;
		hour = rand()% 80 + 1;
		//1-80 hours of grading / doing homework per week reasonable
		//from [a,b], use(rand() % (b-a+1))+ a;
		std::cout << get_name() << " did " << hour << " hours of homework." << std::endl << std::endl;
	}
	
	
	//print
	void Student:: print(){
		Person::print();
		std :: cout << "GPA: " << gpa << std::endl;
	}
	
	
	//save
	void Student:: save(ofstream& fout){
		Person::save(fout);
		fout << "GPA: " << gpa << std::endl;
	}
	
}
