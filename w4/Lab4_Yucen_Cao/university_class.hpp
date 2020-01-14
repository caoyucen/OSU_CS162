//
//  university_class.hpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#ifndef university_class_hpp
#define university_class_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include<string.h>
#include <stdlib.h>
#include<vector>
#include "buliding_class.hpp"
#include "person_class.hpp"
using namespace cs_building;
using namespace cs_person;
using std::string;
using std::vector;
using std::ifstream;
using std::ofstream;


namespace cs_university {
	class University{
	private:
		string name;
		vector<Building*> buildings;
		vector<Person*> persons;
		
	public:
		//constructor
		University();
		
		//setter
		void add_building(Building* b);
		void add_person(Person* p);
		
		//getter
		int get_persons_size();
		int get_building_size();
		
		//print
		void print_all_building();
		void print_all_people();
		void print_all_names();
		
		//save information
		void save_all_building(ofstream& fout);
		void save_all_people(ofstream& fout);
		
		//do_work
		void to_do_work(int n);
		
		//deconstruction
		~University();
	};
}

#endif /* university_class_hpp */
