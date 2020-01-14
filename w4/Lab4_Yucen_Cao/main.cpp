//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#include <iostream>
#include <fstream>
#include "buliding_class.hpp"
#include "university_class.hpp"
#include "student_class.hpp"
#include "instructor_class.hpp"
#include "person_class.hpp"
#include "menu.hpp"
#include "read_from_file.hpp"
#include "save_to_file.hpp"
using std::cout;
using std::endl;
using std::ifstream;
using std::ofstream;
using namespace cs_university;
using namespace cs_building;
using namespace cs_student;
using namespace cs_instructor;


int main() {
	int input_program = 0;
	int input_name = 0;    //name while program is do_work
	int add_type = -1;
	float add_scores = 0.0;
	string add_name;
	
	
	//begin 
	std::cout << "Start the Program!!" << std::endl << std::endl;
	
	
	
	
	
	//hard coding the information
	University osu;
	
	osu.add_building(new Building("Adams Hall", 11168, "606 SW 15TH ST"));
	osu.add_building(new Building("Aero Engineering Lab", 3637, "852 SW 30TH STREET"));
	
	osu.add_person(new Instructor("Jack", 4.5));
	osu.add_person(new Student("Lucy", 3.9));
	osu.add_person(new Student("Tom", 3.8));
	
	
	
	
	
	
	//extra point: Read a saved information from a file
	//Add a person by reading a saved information from a file called "input_file.txt"
	if (add_people_file(&add_type, &add_scores, add_name) == 1){
		
		//add_type 0 for student, 1 for instructor.
		if (add_type == 0){   
			osu.add_person(new Student(add_name, add_scores));
		}
		else{
			osu.add_person(new Instructor(add_name, add_scores));
		}
	}
	
	
	
	
	
	
	
	//extra point : Add people to the program during runtime
	//Add people by user
	add_type = -1;    //
	add_scores = 0.0; // reuse them, initialize them
	add_name.clear(); //
	
	if (menu_add_people(&add_type, &add_scores, add_name) == 1){
		
		//add_type 0 for student, 1 for instructor.
		if (add_type == 0){   
			osu.add_person(new Student(add_name, add_scores));
		}
		else{
			osu.add_person(new Instructor(add_name, add_scores));
		}
	}
	
	
	
	
	
	//extra point : Save the information to a file
	//save the information to a file called "output_file.txt"
	save_information(osu);
	
	
	
	
	
	
	// program choose from 1 - 4
	if(menu_program(&input_program) == 0){
		return (0);
	}
	
	if(input_program == 1){
		//Prints information about all the buildings
		osu.print_all_building();
	}
	else if(input_program == 2){
		//Prints information of everybody at the university
		osu.print_all_people();
	}
	else if(input_program == 3){
		//Choose a person to do work
		osu.print_all_names();
		menu_name(&input_name, osu.get_persons_size());
		osu.to_do_work(input_name);
	}
	
	

	
	return 0;
}





