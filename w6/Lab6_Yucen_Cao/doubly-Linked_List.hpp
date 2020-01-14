//
//  doubly-Linked_List.hpp
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

#ifndef doubly_Linked_List_hpp
#define doubly_Linked_List_hpp

#include <stdio.h>
#include <iostream>
#include "node_class.hpp"
using namespace cs_node_class;
using std::cout;
using std::endl;


namespace cs_doubly_linked_list {
	class NumberList{
	protected:
		Node* head;         //list head pointer
		
	public:
		//construction
		NumberList();
		
		//deconstruction
		~NumberList();
		
		//add a new node to the head
		void add_head(int number);
		
		//add a new node to the tail
		void add_tail(int number);
		
		
		//delete a new node to the head
		void delete_head();
		
		//delete a new node to the tail
		void delete_tail();
		
		//display the list
		void displayList();
		
		//traverse the list reversely
		void print_reverse();
		
		
		
		//extra point 1
		//Print the value of the Node the head is pointing to
		void print_head();
		
		
		//extra point 1
		//Print the value of the Node the tail is pointing to
		void print_tail();
	};
}






#endif /* doubly_Linked_List_hpp */
