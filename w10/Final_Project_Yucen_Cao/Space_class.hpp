//
//  Space_class.hpp
//*********************************************************************
// Program name: Final project
// Author: YUCEN CAO - CS162 Spring 2019
// Date: June 11, 2019
// Description: In the final project, you will be able to design and implement a one-player, text-based game where the player can move through spaces to get items and accomplish goals.
// It is a collecting item game, when the player collect all the item, it will win. 
// The max step is 11, step will reduce by each move.
// Every room has different items, and some of the room is very dangerous
// *********************************************************************

#ifndef Space_class_hpp
#define Space_class_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "menu.hpp"
using std::vector;
using std :: cout;
using std :: endl;
using std::string;


class Space{
private:
	Space* left;
	Space* right;
	Space* top;
	Space* bottom;
protected:
	vector<vector<char>> map;
	string name;
public:
	Space();
	Space(bool cash, bool knife, bool clothes, bool dog);
	~Space();
	Space* get_left();
	Space* get_right();
	Space* get_top();
	Space* get_bottom();
	void set_location(Space* left, Space* right, Space* top, Space* bottom);
	//If there is dog in int room or not
	bool see_dog();
	void print_map();
	//choose the item in the room
	virtual void choose_item(vector<char>* c) = 0;
	virtual bool empty_room() = 0;
};

#endif /* Space_class_hpp */




