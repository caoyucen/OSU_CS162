//
//  Queue.cpp
//*********************************************************************
// Program name: Lab7
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 16, 2019
// Description: In this lab, we will create a queue data structure utilizing circular linked list.
//1. Add a value to the back of queue
//2. Display the front value
//3. Remove the front node
//4. Display the queue’s content
//5.Exit.
// *********************************************************************

#include "Queue.hpp"


namespace cs_queue{
	
	//Constructor 
	Queue::Queue(){
		head = nullptr;
	}
	
	//destructor 
	Queue::~Queue(){
		if(head != nullptr){
			QueueNode* qhead = head;
			//delete queuenode one by one
			while (head->get_next() != qhead){
				QueueNode* temp = head;
				head = head->get_next();
				delete temp;
			}
			//delete the head node
			delete head;
		}
	}
	
	
	
	
	
	//checks if the queue is empty. If so, returns true; otherwise, return false.
	bool Queue::isEmpty(){
		bool empty = 1;
		if (head == nullptr){
			empty = 0;
		}
		return (empty);
	}
	
	
	
	
	
	//takes a user­inputted integer, creates a QueueNode with user­inputted integer, and appends it to the back of the list.
	void Queue::addBack(int val){
		if (head == nullptr){
			head = new QueueNode(val);
			head->set_prev(head);
			head->set_next(head);
		}
		else{
			QueueNode* qlast = head->get_prev();
			QueueNode* qnew = new QueueNode(val);
			qlast->set_next(qnew);
			qnew->set_prev(qlast);
			qnew->set_next(head);
			head->set_prev(qnew);
		}
	}
	
	
	
	
	
	
	//returns the value of the node at the front of the queue.
	int Queue::getFront(){
		int val = 0;
		if(head != nullptr){
			val = head->get_val();
		}
		else{
			std::cout << "The queue is empty, no value to print." << std::endl;
		}
		return (val);
	}
	
	
	
	
	
	//removes the front QueueNode of the queue and free the memory.
	void Queue::removeFront(){
		if (head == nullptr){
			std::cout << "The queue is empty, can not remove anything." << std::endl;
		}
		//only 1 left
		else if (head->get_next() == head){     
			delete head;
			head = nullptr;
		}
		else{
			QueueNode* qlast = head->get_prev();
			QueueNode* temp = head;
			//only 2 left
			if(qlast->get_prev() == head){      
				head = qlast;
				head->set_prev(head);
				head->set_next(head);
				delete temp;
			}
			else{
				QueueNode* second = head->get_next();
				second->set_prev(qlast);
				qlast->set_next(second);
				head = second;
				delete temp;
			}
		}
	}
	
	
	
	
	
	//traverses through the queue from head using next pointers, and prints the values of each QueueNode in the queue.
	void Queue::printQueue(){
		if (head == nullptr){
			std::cout << "The queue is empty, nothing to print." << std::endl;
		}
		else{
			std::cout << "Your queue is:";
			QueueNode* qtemp = head;
			while(qtemp->get_next() != head){
				std::cout << " " <<qtemp->get_val();
				qtemp = qtemp->get_next();
			}
			std::cout << " " <<qtemp->get_val();  //print the last one
		}
	}
	
	
}






