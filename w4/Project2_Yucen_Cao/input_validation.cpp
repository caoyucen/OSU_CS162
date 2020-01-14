//
//  input_validation.cpp

// Yucen CAO
//
//For this project, we will write a zoo tycoon game using classes and inheritance. Zoo tycoon is a game that allows players to run a zoo business. Different types of animals cost different prices, have different maintenance costs, and of course, return a different profit at the end of each day. For this game, the player will be the proud owner of a virtual zoo that has spaces to house tigers, penguins and turtles.
//Game Flow:

//The player begins with a specific amount of money in the bank, e.g. 100,000 dollars. At the start, the user needs to buy three types of animals (tigers, penguins, turtles) to start the business. Each type should have a quantity of either 1 or 2. For each animal bought, the cost is subtracted from the bank. All newly bought animals are 1 day old.
//
//Each turn is a “day”. At the beginning of the day, all animals increase age by 1 day, and the user needs to pay the feeding cost of each animal. Feeding is required so the animals don’t die. After the feeding cost is subtracted from the bank, one randomized event takes place during the day.  You can determine how to implement the random functions by yourself.  The random function will pick one random event from the following list:
//

#include "input_validation.hpp"


//check the string is empty or not, and return the string
string enter_input()
{
	string temp;
	int re_enter_mark = 1; //to track if it need enter again or not, 1 for enter, 0 for not enter
	while (re_enter_mark)
	{
		temp.clear(); //empty string temp
		getline(std::cin,temp);
		if(temp.empty() && temp.length() == 0) {
			std::cout << "You didn't enter anything, please Enter again."<< std::endl;
		}
		else{
			re_enter_mark = 0;
		}
	}
	
	return (temp);
}





//to check it is non_negitive int or not
bool validation_int(string s)
{
	for(int i = 0; i < s.length(); i++){
		if(!isdigit(s[i])){
			return (0); //it is not non-negative int
		}
	}
	
	//it is non-negative int
	return (1);
}




// C++ version in osu not suppot the stoi function, so I write myStoi
int myStoi(string s) 
{ 
	int res = 0; // Initialize result 
	
	// Iterate through all characters of input string and 
	for (int i = 0; s[i] != '\0'; ++i) 
		res = res*10 + s[i] - '0'; 
	
	return res; 
}


//This function to check if it is only n-m
int validation_range(string temp, int n, int m)
{
	int num = -1; // initialize num to -1 which is not 0 or 1
	int re_enter_mark = 1; //to track if it need enter again or not, 1 for enter, 0 for not enter
	while (re_enter_mark)
	{
		if (validation_int(temp)== 0){
			std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
			temp.clear(); //empty string temp
			temp = enter_input();
		}
		else{
			num = myStoi(temp);
			if (num >m || num < n){   //choose the program from n to m
				std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
				temp.clear(); //empty string temp
				temp = enter_input();
				//num = 0;
			}
			else{
				re_enter_mark = 0;
			}
		}
	}
	return (num);  //return the positive number
}


//This function to check if it is only 0/1
int validation_one_zero(string temp)
{
	int num = -1; // initialize num to -1 which is not 0 or 1
	int re_enter_mark = 1; //to track if it need enter again or not, 1 for enter, 0 for not enter
	while (re_enter_mark)
	{
		if (validation_int(temp)== 0){
			std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
			temp.clear(); //empty string temp
			//std::cin >> temp;
			//getline(std::cin, temp);
			temp = enter_input();
		}
		else{
			num = myStoi(temp);
			if (num != 0 && num != 1){
				std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
				temp.clear(); //empty string temp
				//std::cin >> temp;
				//getline(std::cin, temp);
				temp = enter_input();
				//num = 0;
			}
			else{
				re_enter_mark = 0;
			}
		}
	}
	return (num);  //return the number
}



//This function to check if it is positive int
int validation_positive_int(string temp)
{
	int num = -1; // initialize num to -1 which is not 0 or 1
	int re_enter_mark = 1; //to track if it need enter again or not, 1 for enter, 0 for not enter
	while (re_enter_mark)
	{
		if (validation_int(temp)== 0){
			std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
			temp.clear(); //empty string temp
			temp = enter_input();
		}
		else{
			num = myStoi(temp);
			if (num == 0 || num > 288999999){   //edge of the biggest int
				std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
				temp.clear(); //empty string temp
				temp = enter_input();
				//num = 0;
			}
			else{
				re_enter_mark = 0;
			}
		}
	}
	return (num);  //return the positive number
}
