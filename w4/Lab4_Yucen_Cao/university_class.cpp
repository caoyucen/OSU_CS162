//
//  university_class.cpp
//  Lab4
//
//  YUCEN CAO
//  CS 162
//  Lab4
//
//  This program is a simple representation of an Oregon State information system that contains information about the university.
//  It has University Class, Building Class,Person Class, Student Class, Instructor Class
//  It can do some function according to the function description

#include "university_class.hpp"

namespace cs_university {
	//constructor
	University::University(){
		name = "Oregon State University";
	}
	
	
	//setter
	void University::add_building(Building* b) {
		buildings.push_back(b);
	}
	
	void University::add_person(Person* p) {
		persons.push_back(p);
	}
	
	//getter
	int University::get_persons_size(){
		int n = int(persons.size());
		
		return (n);
	}
	
	int University::get_building_size(){
		int n = int(buildings.size());
		
		return (n);
	}
	
	//print
	void University::print_all_building(){
		for (int i = 0; i < buildings.size(); i++){
			std::cout << "name: " << buildings[i] -> get_name() << std::endl;
			std::cout << "address: " << buildings[i] -> get_address() << std::endl;
			std::cout << "size: " << buildings[i] -> get_size() << " sqft" << std::endl << std::endl;
		}
	}
	
	
	void University::print_all_people(){
		for (int j = 0; j < persons.size(); j++){
			persons[j] -> print();
			std :: cout << std :: endl;
		}
	}
	
	void University::print_all_names(){
		std::cout << std::endl;
		for (int k = 0; k < persons.size(); k++){
			std::cout << k+1 <<".";
			std::cout << persons[k] -> get_name() << "  "; 
		}
		std::cout << std::endl;
	}
	
	
	//save 
	void University::save_all_building(ofstream& fout){
		fout << "The information for all buildings:" << std :: endl << std :: endl;
		for (int i = 0; i < buildings.size(); i++){
			fout << "name: " << buildings[i] -> get_name() << std::endl;
			fout << "address: " << buildings[i] -> get_address() << std::endl;
			fout << "size: " << buildings[i] -> get_size() << " sqft" << std::endl << std::endl;
		}
	}
	
	
	void University::save_all_people(ofstream& fout){
		fout << std :: endl << std :: endl;
		fout << "The information for all people:" << std :: endl;
		for (int j = 0; j < persons.size(); j++){
			persons[j] -> save(fout);
			fout << std :: endl;
		}
	}
	
	
	//do_work
	void University::to_do_work(int n){
		persons[n - 1] -> do_work(); 
	}
	
	
	//deconstruction
	University::~University(){   //?????怎么写vector的析构函数？？？
		buildings.clear();
		persons.clear();
	}
}
