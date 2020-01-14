//
//  doubly-Linked_List.cpp
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

#include "doubly-Linked_List.hpp"


namespace cs_doubly_linked_list {
	
	//construction
	NumberList::NumberList(){
		head = nullptr;
	}
	
	
	//deconstruction
	NumberList::~NumberList(){
		delete head;
	}
	
	
	
	//add a new node to the head
	void NumberList::add_head(int number){
		if (head == nullptr){
			head = new Node(number);
			head->set_prev(head);
		}
		else{
			Node* temp = new Node(number);
			temp->set_next(head);
			temp->set_prev(temp);
			head->set_prev(temp);
			head = temp;
			//free memory
			//temp->~Node();
			temp = nullptr;
			//delete temp;
		}
		
		displayList();
		
	}
	
	
	//add a new node to the tail
	void NumberList::add_tail(int number){
		if (head == nullptr){
			head = new Node(number);
			head->set_prev(head);
		}
		else{
			//the list is not empty
			Node* nodepoint = head;
			while(nodepoint->get_next() != nullptr){
				nodepoint = nodepoint->get_next();
			}
			
			nodepoint->set_next(new Node(number));
			(nodepoint->get_next())->set_prev(nodepoint);
			//free memory
			//nodepoint->~Node();
			//nodepoint = nullptr;
			//delete nodepoint;
		}
		
	}
	
	
	
	
	
	
	
	//delete a new node to the head
	void NumberList::delete_head(){
		if (head == nullptr){
			std::cout << "The list is empty, nothing to be delete" << std::endl;
		}
		else{
			if (head->get_next() == nullptr){
				head->~Node();
				head = nullptr;
			}
			else{
			//nodepoint the the next node of the head
			Node* nodepoint = head->get_next();
			//set the prev node point of the next node to itself
			nodepoint->set_prev(nodepoint);
			//delete the head head node
			head->~Node();
			//set the head point to the nodepoint
			head = nodepoint;
			}
		}
		displayList();
	}
	
	
	
	
	//delete a new node to the tail
	void NumberList::delete_tail(){
		if (head == nullptr){
			std::cout << "The list is empty, nothing to be delete" << std::endl;
		}
		else{
			Node* nodepoint = head;
			while(nodepoint->get_next() != nullptr){
				nodepoint = nodepoint->get_next();
			}
			if (nodepoint->get_prev() == nodepoint){   //come to the first one
				head->~Node();
				head = nullptr;
			}
			else{
				(nodepoint->get_prev())->set_next(nullptr);
				nodepoint->~Node();
//				delete nodepoint;    指针要不要delete
			}
		}
		displayList();
	}
	
	
	
	
	//display the list
	void NumberList::displayList(){
		if (head == nullptr){
			std::cout << "The list is empty, nothing to traverse" << std::endl;
		}
		else{
			std::cout << "Your linked list is:" ;
			Node* nodepoint = head;
			while(nodepoint){
				std::cout << " " << nodepoint->get_val();
				nodepoint = nodepoint->get_next();
			}
			std::cout << std::endl;
		}
		//add edge for fun
		//std :: cout << std::endl <<"---------------------------------"<< std::endl;
	}
	
	
	//traverse the list reversely
	void NumberList::print_reverse(){
		if (head == nullptr){
			std::cout << "The list is empty, nothing to traverse" << std::endl;
		}
		else{
			Node* nodepoint = head;
			int mark = 1;  //how many node in the list
			while(nodepoint->get_next() != nullptr){
				nodepoint = nodepoint->get_next();
				mark++;
			}
			//test
			//std::cout << std::endl << "number is : "<<mark << std::endl;;
			
			std::cout << "Your reversed linked list is:";
			while(mark > 0){
				std::cout << " " << nodepoint->get_val();
				nodepoint = nodepoint->get_prev();
				mark--;
			}
			std:: cout << std::endl;
		}
		//add edge for fun
		//std :: cout << std::endl <<"---------------------------------"<< std::endl;
	}
	
	
	
	
	
	
	
	//extra point 1
	//Print the value of the Node the head is pointing to
	void NumberList::print_head(){
		if (head == nullptr){
			std::cout << "The list is empty, nothing to traverse" << std::endl;
		}
		else{
			std::cout << "The head of the linked list is:";
			Node* nodepoint = head;
			std::cout << " " << nodepoint->get_val() << std::endl;;
		}
			
	}
	
	
	//extra point 1
	//Print the value of the Node the tail is pointing to
	void NumberList::print_tail(){
		if (head == nullptr){
			std::cout << "The list is empty, nothing to traverse" << std::endl;
		}
		else{
			std::cout << "The tail of the linked list is:";
			Node* nodepoint = head;
			while(nodepoint->get_next() != nullptr){
				nodepoint = nodepoint->get_next();
			}
			std::cout << " " << nodepoint->get_val() << std::endl;;
		}
	}
}










