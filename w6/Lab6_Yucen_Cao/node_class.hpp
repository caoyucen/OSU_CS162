//
//  node_class.hpp
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

#ifndef node_class_hpp
#define node_class_hpp

#include <stdio.h>
#include<iostream>


namespace cs_node_class {
	class Node{
	private:
		int val;
		Node* next;
		Node* prev;
		
	public:
		
		//construction
		Node(int Val);
		
		
		//getter
		int get_val();
		Node* get_next();
		Node* get_prev();
		
		//setter
		void set_val(int Val);
		void set_next(Node* Next);
		void set_prev(Node* Prev);
	};
}



#endif /* node_class_hpp */
