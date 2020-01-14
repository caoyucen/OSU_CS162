//
//  menu.cpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#include "menu.hpp"
 
bool menu_program(int *input_program)
{
	string temp;
	
	std:: cout << "which program do you want to selected?" << std::endl << "1. Prints information about all the buildings." << std::endl <<"2. Prints information of everybody at the university" << std::endl << "3. Choose a person to do work." << std::endl <<"4. Exit the program." << std::endl << "Please enter the number:" << std::endl;
	//std::cin >> temp; 
	//getline(std::cin, temp);
	temp = enter_input();
	
	*input_program = validation(temp);
	if (*input_program == 4){
		return (0);
	}
//	else if (input[0] == 3){
//		temp.clear(); //empty string temp
//		std:: cout <<"Choose a person to do work. Please enter the number"
//	}
	return (1);
}


void menu_name(int *intput_name, int all_person)
{
	string temp;
	
	std:: cout <<"Choose a person to do work. Please enter the number" << std::endl;
	//std::cin >> temp; 
	//getline(std::cin, temp);
	temp = enter_input();
	*intput_name = validation_number_person(temp, all_person);
	
}


bool menu_add_people(int *add_type, float *add_scores, string& add_name)
{
	int n = -1; //yes for 1, no for 0
	string temp;
	//int type = -1;
	//string name;
	//int age = 0;
	//float scores = 0.0;
	
	std:: cout <<"Do you want to add people? Yes enter 1, No enter 0." << std::endl;
	//getline(std::cin, temp);  //cin is the object to istream
	//std::cin >> temp;
	temp = enter_input();
	n = validation_one_zero(temp); 
	
	if (n == 0){
		return (0);
	}
	
	temp.clear(); //empty string temp
	std:: cout <<"The type of the people, 0 for student, 1 for instructor. Please enter  the number: " << std::endl;
	//std::cin >> temp;
	//getline(std::cin, temp);
	temp = enter_input();
	*add_type = validation_one_zero(temp);  //0 for student, 1 for instructor.
	
	
	std:: cout <<"Please enter the name of the people:" << std::endl;
	//std::cin >> add_name;
	//getline(std::cin, add_name);
	add_name = enter_input();
	
//	temp.clear(); //empty string temp
//	std:: cout <<"Please enter the age of the people(from 16 to 100):" << std::endl;
//	std::cin >> temp;
//	*add_age = validation_age(temp);
	
	if (*add_type == 0){   //student
		temp.clear(); //empty string temp
		std:: cout <<"Please enter the GPA for the Student:" << std::endl;
		//std::cin >> temp;
		//getline(std::cin, temp);
		temp = enter_input();
		*add_scores = validation_scores(temp, 4.0);
	}
	else{
		temp.clear(); //empty string temp
		std:: cout <<"Please enter the Rating for the Instructor:" << std::endl;
		//std::cin >> temp;
		//getline(std::cin, temp);
		temp = enter_input();
		*add_scores = validation_scores(temp, 5.0);
	}
	
	
	
	return (1);
}






