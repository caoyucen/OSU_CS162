//
//  QueueNode.cpp
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

#include "QueueNode.hpp"

namespace cs_queue_node{
	
	//construction
	QueueNode::QueueNode(int Val){
		val = Val;
		next = nullptr;
		prev = nullptr;
	}
	
	
	
	//deconstruction
	QueueNode::~QueueNode(){
		next = nullptr;
		prev = nullptr;
	}
	
	
	
	
	//getter
	int QueueNode::get_val(){
		return (val);
	}
	
	
	QueueNode* QueueNode::get_next(){
		return(next);
	}
	
	
	QueueNode* QueueNode::get_prev(){
		return(prev);
	}
	
	
	
	
	
	
	//setter
	void QueueNode::set_val(int Val){
		val = Val;
	}
	
	
	void QueueNode::set_next(QueueNode* Next){
		next = Next;
	}
	
	void QueueNode::set_prev(QueueNode* Prev){
		prev = Prev;
	}
}
