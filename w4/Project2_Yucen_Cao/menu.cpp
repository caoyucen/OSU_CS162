//
//  menu.cpp
//  Project2
//
// Yucen CAO
//
//For this project, we will write a zoo tycoon game using classes and inheritance. Zoo tycoon is a game that allows players to run a zoo business. Different types of animals cost different prices, have different maintenance costs, and of course, return a different profit at the end of each day. For this game, the player will be the proud owner of a virtual zoo that has spaces to house tigers, penguins and turtles.
//Game Flow:

//The player begins with a specific amount of money in the bank, e.g. 100,000 dollars. At the start, the user needs to buy three types of animals (tigers, penguins, turtles) to start the business. Each type should have a quantity of either 1 or 2. For each animal bought, the cost is subtracted from the bank. All newly bought animals are 1 day old.
//
//Each turn is a “day”. At the beginning of the day, all animals increase age by 1 day, and the user needs to pay the feeding cost of each animal. Feeding is required so the animals don’t die. After the feeding cost is subtracted from the bank, one randomized event takes place during the day.  You can determine how to implement the random functions by yourself.  The random function will pick one random event from the following list:
//

#include "menu.hpp"

//begin and buy animals
void menu_begin(int* tiger, int* penguin, int* turtle)
{
	string temp;
	
	std :: cout << "Welcome to the game!" << std::endl << std::endl << "You needs to buy three types of animals (tigers, penguins, turtles) to start the business. Each type should have a quantity of either 1 or 2. " << std::endl << std::endl;
	
	std :: cout << "Please enter 1 or 2 for the number of tigers: " << std::endl;
	temp.clear();
	temp = enter_input();
	*tiger = validation_range(temp, 1, 2);
	
	std :: cout << "Please enter 1 or 2 for the number of penguins: " << std::endl;
	temp.clear();
	temp = enter_input();
	*penguin = validation_range(temp, 1, 2);
	
	std :: cout << "Please enter 1 or 2 for the number of turtles: " << std::endl;
	temp.clear();
	temp = enter_input();
	*turtle = validation_range(temp, 1, 2);
	
}


//get the feed type
int menu_feed()
{
	string temp;
	int food_type = -2828288;  // initialize the food type, 1 food  premium, -1 food cheap, 0 food normal
	int choose_temp;
	
	std :: cout << "Please choose the Feed Type, Cheap enter 1, Generic enter 2, Premium enter 3 : " << std::endl;
	temp.clear();
	temp = enter_input();
	choose_temp = validation_range(temp, 1, 3);
	
	food_type = choose_temp - 2; // 3->1, 2->0, 1->-1 
	
	return(food_type);
}




//quit or not
int menu_end()
{
	int mark = -2222; //initialize to a big negtive int
	string temp;
	
	temp.clear();
	std :: cout << "Do you want to end the game? Quit enter 0, Continue enter 1 " << std::endl;
	temp = enter_input();
	mark = validation_one_zero(temp);
	
	return(mark);
}


//buy new animal or not 
int menu_buy_animal()
{
	int mark = -2222; //initialize to a big negtive int;
	string temp;
	
	temp.clear();
	std :: cout << std::endl << "Do you want to buy animal? Yes enter 1, No enter 0 " << std::endl;
	temp = enter_input();
	mark = validation_one_zero(temp);
	
	if (mark == 1)
	{
		mark = -2222; //reuse it ,initialize to a big negtive int;
		temp.clear();
		std :: cout << "Do you want buy which types of animals? (Tigers enter 1, Penguins enter 2, Turtles enter 3)" << std::endl;
		temp.clear();
		temp = enter_input();
		mark = validation_range(temp, 1, 3);
	}
	
	return(mark);
}












