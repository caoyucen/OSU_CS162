//
//  QueueNode.hpp
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

#ifndef QueueNode_hpp
#define QueueNode_hpp

#include <stdio.h>
#include<iostream>


namespace cs_queue_node {
	class QueueNode{
	private:
		int val;
		QueueNode* next;
		QueueNode* prev;
		
	public:
		
		//construction
		QueueNode(int Val);
		
		//deconstruction
		~QueueNode();
		
		//getter
		int get_val();
		QueueNode* get_next();
		QueueNode* get_prev();
		
		//setter
		void set_val(int Val);
		void set_next(QueueNode* Next);
		void set_prev(QueueNode* Prev);
	};
}


#endif /* QueueNode_hpp */
