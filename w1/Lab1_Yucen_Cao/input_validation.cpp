/*
 
 Lab1_Yucen_Cao
 
 Create a matrix calculator program 
 
 */

#include "input_validation.hpp"

int input_validation(char c)
{
	if(c == '2' || c  == '3')
		return (c - '0');
	else
	{
		std::cout << "Enter size is wrong, please enter the size of the matrix (choose 2 or 3): ";
		return (0);
	}
	
}
