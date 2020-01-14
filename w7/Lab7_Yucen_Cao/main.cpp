//
//  main.cpp
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

#include <iostream>
#include "menu.hpp"
#include "QueueNode.hpp"
#include "Queue.hpp"
using namespace cs_queue;
using namespace cs_queue_node;

int main() {
	int mark_end = 1; //the mark for end the game or not, 0 for end, 1 continue
	Queue q;
	
	while(mark_end)
	{
		int options = 0;
		options = choose_function();
		//Exit
		if (options == 5){   
			mark_end = 0;
		}
		//1. Add a value to the back of queue
		else if(options == 1){
			q.addBack(menu_enter_number());
		}
		//2. Display the front value
		else if(options == 2){
			int front = q.getFront();
			if (front != 0){
			std::cout << "The first node value is: " << q.getFront() << std::endl;
			}
		}
		//3. Remove the front node
		else if(options == 3){
			q.removeFront();
		}
		//4. Display the queue’s content
		else if(options == 4){
			q.printQueue();
		}
	}
	
	
	
	
	
	return 0;
}
