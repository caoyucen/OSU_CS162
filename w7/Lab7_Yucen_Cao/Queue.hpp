//
//  Queue.hpp
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

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>
#include "QueueNode.hpp"
using namespace cs_queue_node;


namespace cs_queue{
	class Queue{
	private:
		QueueNode* head;
		
	public:
		//Constructor 
		Queue();
		
		//destructor 
		~Queue();
		
		//checks if the queue is empty. If so, returns true; otherwise, return false.
		bool isEmpty();
		
		//takes a user­inputted integer, creates a QueueNode with user­inputted integer, and appends it to the back of the list.
		void addBack(int val);
		
		//returns the value of the node at the front of the queue.
		int getFront();
		
		//removes the front QueueNode of the queue and free the memory.
		void removeFront();
		
		//traverses through the queue from head using next pointers, and prints the values of each QueueNode in the queue.
		void printQueue();
		
		
	};
}

#endif /* Queue_hpp */











