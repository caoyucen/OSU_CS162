//
//  zoo_class.cpp
//  Project2
//
//For this project, we will write a zoo tycoon game using classes and inheritance. Zoo tycoon is a game that allows players to run a zoo business. Different types of animals cost different prices, have different maintenance costs, and of course, return a different profit at the end of each day. For this game, the player will be the proud owner of a virtual zoo that has spaces to house tigers, penguins and turtles.
//Game Flow:

//The player begins with a specific amount of money in the bank, e.g. 100,000 dollars. At the start, the user needs to buy three types of animals (tigers, penguins, turtles) to start the business. Each type should have a quantity of either 1 or 2. For each animal bought, the cost is subtracted from the bank. All newly bought animals are 1 day old.
//
//Each turn is a “day”. At the beginning of the day, all animals increase age by 1 day, and the user needs to pay the feeding cost of each animal. Feeding is required so the animals don’t die. After the feeding cost is subtracted from the bank, one randomized event takes place during the day.  You can determine how to implement the random functions by yourself.  The random function will pick one random event from the following list:
//
//
//


#include "zoo_class.hpp"

namespace cs_zoo {
	
	//constructor
	Zoo::Zoo()
	:tigers(dynamic_array<Tiger>()), penguins(dynamic_array<Penguin>()), turtles(dynamic_array<Turtle>()) {
		num_tigers = 0;
		num_penguins = 0;
		num_turtles = 0;
	}
	
	
	//add
	void Zoo::add_tigers(int num, int Age){
		for (int i = 0; i < num; i++){
			tigers.add(*new Tiger(Age));
		}
		num_tigers = num_tigers + num;
	}
	
	void Zoo::add_penguins(int num, int Age){
		for (int i = 0; i < num; i++){
			penguins.add(*new Penguin(Age));
		}
		num_penguins = num_penguins + num;
	}
	
	void Zoo::add_turtles(int num, int Age){
		for (int i = 0; i < num; i++){
			turtles.add(*new Turtle(Age));
		}
		num_turtles = num_turtles + num;
	}
	
	//remove
	void Zoo::remove_tigers(){
		tigers.remove_last();
		num_tigers--;
	}
	
	void Zoo::remove_penguins(){
		penguins.remove_last();
		num_penguins--;
	}
	
	void Zoo::remove_turtles(){
		turtles.remove_last();
		num_turtles--;
	}
	
	//how many adults
	int Zoo::adult_tigers(){
		int n = 0;
		
		for (int i = 0 ; i < num_tigers; i++){
			if (tigers[i].get_age() >= 3){
				n++;
			}
		}
		
		return(n);
	}
	
	int Zoo::adult_penguins(){
		int n = 0;
		
		for (int i = 0 ; i < num_penguins; i++){
			if (penguins[i].get_age() >= 3){
				n++;
			}
		}
		
		return(n);
	}
	
	int Zoo::adult_turtles(){
		int n = 0;
		
		for (int i = 0 ; i < num_turtles; i++){
			if (turtles[i].get_age() >= 3){
				n++;
			}
		}
		
		return(n);
	}
	
	
	//get baby, age = 0
	void Zoo::baby_tigers(){
		add_tigers(1, 0);
	}
	
	
	void Zoo::baby_penguins(){
		add_penguins(5, 0);
	}
	
	void Zoo::baby_turtles(){
		add_turtles(10, 0);
	}
	
	
	//increase age for every animals
	void Zoo::incincrease_age(){
		for (int i = 0 ; i < num_tigers; i++){
			tigers[i].add_age();
		}
		for (int j = 0 ; j < num_penguins; j++){
			penguins[j].add_age();
		}
		for (int i = 0 ; i < num_turtles; i++){
			turtles[i].add_age();
		}
	}
	
	
	//feed cost every day
	int Zoo::feed_cost(){
		int cost = 0;
		
		//tigers food 50
		//penguins food 10
		//turtles food 5
		
		cost = num_tigers * 50 + num_penguins * 10 + num_turtles *5;
		
		return(cost);
	}
	
	
	
	//get
	int Zoo::num_of_tigers(){
		return (num_tigers);
	}
	int Zoo::num_of_penguins(){
		return (num_penguins);
	}
	int Zoo::num_of_turtles(){
		return (num_turtles);
	}
	
	
	
	
}
