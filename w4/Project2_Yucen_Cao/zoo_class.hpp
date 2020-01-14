//
//  zoo_class.hpp
//  Project2
//
// Yucen CAO
//
//For this project, we will write a zoo tycoon game using classes and inheritance. Zoo tycoon is a game that allows players to run a zoo business. Different types of animals cost different prices, have different maintenance costs, and of course, return a different profit at the end of each day. For this game, the player will be the proud owner of a virtual zoo that has spaces to house tigers, penguins and turtles.
//Game Flow:

//The player begins with a specific amount of money in the bank, e.g. 100,000 dollars. At the start, the user needs to buy three types of animals (tigers, penguins, turtles) to start the business. Each type should have a quantity of either 1 or 2. For each animal bought, the cost is subtracted from the bank. All newly bought animals are 1 day old.
//
//Each turn is a “day”. At the beginning of the day, all animals increase age by 1 day, and the user needs to pay the feeding cost of each animal. Feeding is required so the animals don’t die. After the feeding cost is subtracted from the bank, one randomized event takes place during the day.  You can determine how to implement the random functions by yourself.  The random function will pick one random event from the following list:
// Copyright © 2019年 YUCEN CAO. All rights reserved.
//

#ifndef zoo_class_hpp
#define zoo_class_hpp

#include <stdio.h>
#include "animal_class.hpp"
#include "tiger_class.hpp"
#include "penguin_class.hpp"
#include "turtle_class.hpp"
#include "dynamic_array.hpp"
using namespace cs_tiger;
using namespace cs_animal;
using namespace cs_turtle;
using namespace cs_penguin;

namespace cs_zoo {
	class Zoo{
	private:
		dynamic_array <Tiger> tigers;
		dynamic_array <Penguin> penguins;
		dynamic_array <Turtle> turtles;
//		int arraysize;
		int num_tigers;
		int num_penguins;
		int num_turtles;

	
	public:
		//constructor
		Zoo();
		
		
		//add
		void add_tigers(int num, int Age);
		void add_penguins(int num, int Age);
		void add_turtles(int num, int Age);
		
		//remove
		void remove_tigers();
		void remove_penguins();
		void remove_turtles();
		
		//
		int adult_tigers();
		int adult_penguins();
		int adult_turtles();
		
		
		//get baby, age = 0
		void baby_tigers();
		void baby_penguins();
		void baby_turtles();
		
		////increase age for every animals
		void incincrease_age();
		
		
		//feed cost every day
		int feed_cost();
		
		
		//get
		int num_of_tigers();
		int num_of_penguins();
		int num_of_turtles();
	};
}

#endif /* zoo_class_hpp */
