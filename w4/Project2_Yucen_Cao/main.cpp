//
//  main.cpp
//  Project2
//
//
// Yucen CAO
//
//For this project, we will write a zoo tycoon game using classes and inheritance. Zoo tycoon is a game that allows players to run a zoo business. Different types of animals cost different prices, have different maintenance costs, and of course, return a different profit at the end of each day. For this game, the player will be the proud owner of a virtual zoo that has spaces to house tigers, penguins and turtles.
//Game Flow:

//The player begins with a specific amount of money in the bank, e.g. 100,000 dollars. At the start, the user needs to buy three types of animals (tigers, penguins, turtles) to start the business. Each type should have a quantity of either 1 or 2. For each animal bought, the cost is subtracted from the bank. All newly bought animals are 1 day old.
//
//Each turn is a “day”. At the beginning of the day, all animals increase age by 1 day, and the user needs to pay the feeding cost of each animal. Feeding is required so the animals don’t die. After the feeding cost is subtracted from the bank, one randomized event takes place during the day.  You can determine how to implement the random functions by yourself.  The random function will pick one random event from the following list:
//
//
//  

//

#include <iostream>
#include "zoo_class.hpp"
#include "menu.hpp"
#include "game.hpp"
using namespace cs_zoo;

int main() {
	Zoo zoo;
	double money = 100000;
	
	
	//begin , start the business
	int start_tiger = 0;
	int start_penguin= 0; 
	int start_turtle = 0;
	menu_begin(&start_tiger, &start_penguin, &start_turtle);
	
	//start and buy animals
	zoo.add_tigers(start_tiger, 1);
	zoo.add_penguins(start_penguin, 1); 
	zoo.add_turtles(start_turtle, 1); 
	money = money - start_tiger*10000 - start_penguin*1000 - start_turtle*100;
	
	

	//a day long
	int i = 1;	
	while (i!= 0){
		std :: cout<< std::endl << "Today is a new day, good luck!" << std::endl;
		std::cout << "Right now you have $" << money << std::endl << "Tiger: " << zoo.num_of_tigers() << "   Penguin: "<< zoo.num_of_penguins() << "   Turtles: " << zoo.num_of_turtles()  << std::endl << std::endl;
		
		i = day(zoo, &money);
		
		//test
		
	}
	
	return 0;
}
