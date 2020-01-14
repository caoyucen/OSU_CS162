//
//  main.cpp
//*********************************************************************
// Program name: Lab6
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 6, 2019
// Description: In this lab, we will create a simple doubly-linked list data structures consisting of Node objects. 
// Implement the functions to do the following linked list operations:
// 1.Add a new node to the head.
// 2.Add a new node to the tail.
// 3.Delete the first node in the list.
// 4.Delete the last node in the list.
// 5.Traverse the list reversely.
// 6.Traverse the list.
// 7.Print the value of the Node the head is pointing to.
// 8.Print the value of the Node the tail is pointing to.
// *********************************************************************


#include <iostream>
#include "doubly-Linked_List.hpp"
#include "node_class.hpp"
#include "menu.hpp"
#include "read_from_file.hpp"
using namespace cs_node_class;
using namespace cs_doubly_linked_list;

int main() {
	int mark_end = 1; //the mark for end the game or not, 0 for end, 1 continue
	NumberList numberlist;
	
	std::cout << "Lab6_Yucen_Cao" << std::endl;
	std::cout << "Finished Extra Credit Task 1" << std::endl;
	std::cout << "Finished Extra Credit Task 2" << std::endl << std::endl;
	
	if (read_orNot() == 1)
	{
		if(read_from_file(&numberlist) == 1){
			std::cout << std::endl <<"Finish reading from the file." << std::endl;
			numberlist.displayList();
		}
	}
	
	while(mark_end)
	{
		int options = 0;
		options = choose_function();
		if (options == 9){
			mark_end = 0;
		}
		else if(options == 1){
			numberlist.add_head(menu_enter_number());
		}
		else if(options == 2){
			numberlist.add_tail(menu_enter_number());
			numberlist.displayList();
		}
		else if(options == 3){
			numberlist.delete_head();
		}
		else if(options == 4){
			numberlist.delete_tail();
		}
		else if(options == 5){
			numberlist.print_reverse();
		}
		else if(options == 6){
			numberlist.displayList();
		}
		else if(options == 7){
			numberlist.print_head();
		}
		else if(options == 8){
			numberlist.print_tail();
		}
	}
	
	
	return 0;
}
