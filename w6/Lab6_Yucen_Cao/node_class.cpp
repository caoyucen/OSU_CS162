//
//  node_class.cpp
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

#include "node_class.hpp"


namespace cs_node_class {
	
	//construction
	Node::Node(int Val){
		val = Val;
		next = nullptr;
		prev = nullptr;
	}
	
	
	
	//getter
	int Node::get_val(){
		return (val);
	}
	
	
	Node* Node::get_next(){
		return(next);
	}
	
	
	Node* Node::get_prev(){
		return(prev);
	}
	
	
	
	
	
	
	//setter
	void Node::set_val(int Val){
		val = Val;
	}
	
	
	void Node::set_next(Node* Next){
		next = Next;
	}
	
	void Node::set_prev(Node* Prev){
		prev = Prev;
	}
}





