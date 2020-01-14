//
//  read_from_file.hpp
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

#ifndef read_from_file_hpp
#define read_from_file_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include<vector>
#include "input_validation.hpp"
#include "doubly-Linked_List.hpp"
#include "node_class.hpp"

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::vector;
using namespace cs_node_class;
using namespace cs_doubly_linked_list;

//Extra Credit Task 2
//Create a linked list by reading from a text file:
bool read_from_file(NumberList* numberlist);

#endif /* read_from_file_hpp */
