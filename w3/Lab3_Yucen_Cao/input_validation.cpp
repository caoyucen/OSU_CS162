//
//  input_validation.cpp
//  Lab3
//
//  YUCEN CAO
//  
//In this project,  it is a 2-player game. It is played through dice. The player who rolls higher number gets one point. If both players roll the same number, it is considered a draw and no one gets a point.
//
//

#include "input_validation.hpp"


//to check it is int or not
bool validation_int(string s)
{
	//if the string have "-", "." or other character, it will return (0). So negative number or float number will all return(0)
	for(int i = 0; i < s.length(); i++){
		if(!isdigit(s[i])){
			return (0); //it is not non-negative int
		}
	}
	
	//it is non-negative int
	return (1);
}


// C++ version not suppot the stoi function, so I write myStoi
int myStoi(string s) 
{ 
	int res = 0; // Initialize result 
	
	// Iterate through all characters of input string and 
	for (int i = 0; s[i] != '\0'; ++i) 
		res = res*10 + s[i] - '0'; 
	
	return res; 
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
			std::cin >> temp;
		}
		else{
			num = myStoi(temp);
			if (num != 0 && num != 1){
				std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
				temp.clear(); //empty string temp
				std::cin >> temp;
				//num = 0;
			}
			else{
				re_enter_mark = 0;
			}
		}
	}
	return (num);  //return the positive number
}


//To check it is postive int or not, the biggest num is 46000
int validation_positive_int(string temp)
{
	int num = 0;
	int re_enter_mark = 1; //to track if it need enter again or not, 1 for enter, 0 for not enter
	while (re_enter_mark)
	{
		if (validation_int(temp)== 0){
			std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
			temp.clear(); //empty string temp
			std::cin >> temp;
		}
		else{
			num = myStoi(temp);
			if (num == 0 || num > 46000){
				std::cout << "You Enter the wrong number, please Enter again."<< std::endl;
				temp.clear(); //empty string temp
				std::cin >> temp;
				//num = 0;
			}
			else{
				re_enter_mark = 0;
			}
		}
	}
	return (num);  //return the positive number
}
