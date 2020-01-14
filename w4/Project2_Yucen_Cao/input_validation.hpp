// Yucen CAO
//
//For this project, we will write a zoo tycoon game using classes and inheritance. Zoo tycoon is a game that allows players to run a zoo business. Different types of animals cost different prices, have different maintenance costs, and of course, return a different profit at the end of each day. For this game, the player will be the proud owner of a virtual zoo that has spaces to house tigers, penguins and turtles.
//Game Flow:

//The player begins with a specific amount of money in the bank, e.g. 100,000 dollars. At the start, the user needs to buy three types of animals (tigers, penguins, turtles) to start the business. Each type should have a quantity of either 1 or 2. For each animal bought, the cost is subtracted from the bank. All newly bought animals are 1 day old.
//
//Each turn is a “day”. At the beginning of the day, all animals increase age by 1 day, and the user needs to pay the feeding cost of each animal. Feeding is required so the animals don’t die. After the feeding cost is subtracted from the bank, one randomized event takes place during the day.  You can determine how to implement the random functions by yourself.  The random function will pick one random event from the following list:
//

#ifndef input_validation_hpp
#define input_validation_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
#include <ctype.h>
#include <cctype>
using std :: cout;
using std :: endl;
using std::string;

//check the string is empty or not, and return the string
string enter_input();

//to check it is non_negitive int or not
bool validation_int(string s);

// C++ version in osu not suppot the stoi function, so I write myStoi
int myStoi(string s);

//This function to check if it is only n-m
int validation_range(string temp, int n, int m);

//This function to check if it is only 0/1
int validation_one_zero(string temp);

//This function to check if it is positive int
int validation_positive_int(string temp);

#endif /* input_validation_hpp */

