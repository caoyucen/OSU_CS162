//
//  game.cpp
//*********************************************************************
// Program name: Final project
// Author: YUCEN CAO - CS162 Spring 2019
// Date: June 11, 2019
// Description: In the final project, you will be able to design and implement a one-player, text-based game where the player can move through spaces to get items and accomplish goals.
// It is a collecting item game, when the player collect all the item, it will win. 
// The max step is 11, step will reduce by each move.
// Every room has different items, and some of the room is very dangerous
// *********************************************************************

#include "game.hpp"

//check if all the items be collected
bool check_container(vector<char> container)
{
	if (container.size() > 0){
		std:: cout << std::endl << "The items in the container: ";
	}
	int a = 0; //&
	int b = 0; //$
	int c = 0; //#
	
	for ( int i = 0; i < container.size(); i++){
		std:: cout << " " << container[i] << " ";
		if (container[i] == '&'){
			a++;
		}
		else if (container[i] == '$'){
			b++;
		}
		else if (container[i] == '#'){
			c++;
		}
	}
	std:: cout << std::endl << std::endl;
	if (a*b*c == 0){
		return (0);
	}
	return (1);
}


bool game(vector<char>* container, int step)
{
	Lroom L;
	Bedroom B1;
	Bedroom B2;
	Kitchen K;
	Balcony C;
	DogRoom D1;
	DogRoom D2;
	DogRoom D3;
	DogRoom D4;
	DogRoom D5;
	DogRoom D6;
	DogRoom D7;
	DogRoom D8;
	
	//set all the room in the location
	//set_location(Space* left, Space* right, Space* top, Space* bottom);
	L.set_location(&C, &K, &B1, &B2);
	B1.set_location(&D1, &D3, &D2, &L);
	B2.set_location(&D7, &D5, &L, &D6);
	K.set_location(&L, &D4, &D3, &D5);
	C.set_location(&D8, &L, &D1, &D7);
	
	//test
	//std::cout <<"here I am" << std::endl;
	
	Space *standing;
	standing = &L;
	for (int z = 0; z < step; z++)
	{
		std::cout << std::endl;
		std::cout << "******************************************" << std::endl;
		std::cout << "-------------- No." << z+1 << " step ---------------"<< std::endl;
		std::cout << "Target: get money($), clothes(&), knife(#)" << std::endl;
		std::cout << "Be Careful! Dog is dangerous." << std::endl;
		std::cout << step - z -1 << " steps left." << std::endl;
		std::cout << "******************************************" << std::endl << std::endl;
		int next = 0;
		standing->print_map();
		if(standing->see_dog() == 0){
			if (standing->empty_room() == 0){
				std::cout << "The room is empty, nothing to collect." << std::endl;
				if (z == step -1){
					return (0); 
				}
			}
			else{ //not empty room
				standing->choose_item(container);
			}
		}
		else{ //see dog
			std::cout << "There is a dog in the room, you Pass Out in Shock, and wait for 5 step. " << std::endl;
			std::cout << "If you don't die, you will wake up in the living room." << std::endl;
			z = z + 5; //mark for step
			if (z >= step){
				return (0); 
			}
			standing = &L;
		}
		if (check_container(*container) == 0){
			next = menu_next();
			if (next == 1){
				standing = standing->get_top();
			}
			if (next == 2){
				standing = standing->get_bottom();
			}
			if (next == 3){
				standing = standing->get_left();
				
			}
			if (next == 4){
				standing = standing->get_right();
			}
		}
		else{
			return(1); //win the game
		}
	}
	return (0); //lose the game
}
