//
//  input_validation.cpp
//*********************************************************************
// Program name: Final project
// Author: YUCEN CAO - CS162 Spring 2019
// Date: June 11, 2019
// Description: In the final project, you will be able to design and implement a one-player, text-based game where the player can move through spaces to get items and accomplish goals.
// It is a collecting item game, when the player collect all the item, it will win. 
// The max step is 11, step will reduce by each move.
// Every room has different items, and some of the room is very dangerous
// *********************************************************************


#include "input_validation.hpp"

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




//to check it is number or not
bool validation_number(string s)
{
	if(s[0] != '-' && !isdigit(s[0])){
		return (0);
	}
	for(int i = 1; i < s.length(); i++){
		if(!isdigit(s[i])){
			return (0); //it is not non-negative int
		}
	}
	
	//it is non-negative int
	return (1);
}





//This function to check if it is only n-m 
int validation_range(string temp, int n, int m)
{
	int num = -1; // initialize num to -1 which is not 0 or 1
	int re_enter_mark = 1; //to track if it need enter again or not, 1 for enter, 0 for not enter
	while (re_enter_mark)
	{
		if (validation_number(temp)== 0){
			//if (validation_int(temp)== 0){
			std::cout << "Please Enter the correct input."<< std::endl;
			temp.clear(); //empty string temp
			temp = enter_input();
		}
		else{
			num = stoi(temp);
			if (num >m || num < n){   //choose the program from n to m
				std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
				temp.clear(); //empty string temp
				temp = enter_input();
			}
			else{
				re_enter_mark = 0;
			}
		}
	}
	return (num);  //return the positive number
}

