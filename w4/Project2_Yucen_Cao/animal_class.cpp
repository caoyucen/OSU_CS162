//
//  animal_class.cpp
//  Project2
//
// Yucen CAO
//
//For this project, we will write a zoo tycoon game using classes and inheritance. Zoo tycoon is a game that allows players to run a zoo business. Different types of animals cost different prices, have different maintenance costs, and of course, return a different profit at the end of each day. For this game, the player will be the proud owner of a virtual zoo that has spaces to house tigers, penguins and turtles.
//Game Flow:

//The player begins with a specific amount of money in the bank, e.g. 100,000 dollars. At the start, the user needs to buy three types of animals (tigers, penguins, turtles) to start the business. Each type should have a quantity of either 1 or 2. For each animal bought, the cost is subtracted from the bank. All newly bought animals are 1 day old.
//
//Each turn is a “day”. At the beginning of the day, all animals increase age by 1 day, and the user needs to pay the feeding cost of each animal. Feeding is required so the animals don’t die. After the feeding cost is subtracted from the bank, one randomized event takes place during the day.  You can determine how to implement the random functions by yourself.  The random function will pick one random event from the following list:
//  Copyright © 2019年 YUCEN CAO. All rights reserved.
//

#include "animal_class.hpp"

namespace cs_animal {
	Animal::Animal(int age1){
		age = age1; 
	}
	
	//setter
	void Animal::set_data(int cost1, int payoff1, int number_baby1,int baseFood_cost1){
		cost = cost1;
		baseFood_cost = baseFood_cost1;
		payoff = payoff1;
		number_baby = number_baby1;
	}
	
	//getter
	int Animal::get_age(){
		return (age);
	}
	
	int Animal::get_number_baby(){
		return (number_baby);
	}
	
	int Animal::get_baseFood_cost(){
		return (baseFood_cost);
	}
	
	//change_age
	void Animal::add_age(){
		age = age + 1;
	}
	
	//adult or not , return 1 if adult
//	int Animal::adult_or_not(){
//		if (age < 3){
//			return(0);
//		}
//		else{
//			return(1);
//		}
//	}
}




