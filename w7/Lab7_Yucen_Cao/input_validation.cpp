//
//  input_validation.cpp
//*********************************************************************
// Program name: Lab7
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 16, 2019
// Description: In this lab, we will create a queue data structure utilizing circular linked list.
//1. Add a value to the back of queue
//2. Display the front value
//3. Remove the front node
//4. Display the queue’s content
//5.Exit.
// *********************************************************************

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








//This function to check if it is only n-m (non_negative)
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





