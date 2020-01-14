//
//  recursive_function.cpp
//  Lab5
//
//  Created by YUCEN CAO on 2019/4/30.
//  
//
//
//Create and use recursive functions
//In this lab, we will write a program that uses three recursive functions.
//The program needs to demonstrate all three functions by providing a menu.
//The menu should provide user choices to select one of the three functions to call, after prompting user input for function call and the function outputs results, the menu should go back to the first menu to let the user continue choosing functions to call.
//
//
//

#include "recursive_function.hpp"



//Write a function that recursively prints a string in reverse. The function has ONLY one parameter of type string. It prints the reversed character to the screen followed by a newline character.
//
//Example: Input of “Hello, world” should output “dlrow ,olleH(newline)”.
//
void prints_string_reverse(string s)
{	
	if (s.length() == 0){
		std::cout << std::endl;
	}
	else{
		std::cout << s[s.length()-1];
		prints_string_reverse(s.substr(0,(s.length()-1)));
	}	
}



//Write a function that recursively calculates the sum of an array of integers. The function has 2 parameters:
//
//A pointer to the integer array
//An integer for the number of elements in the array.
//
int calculates_sum_arrayIntegers(int* int_array, int size)
{	
	if( size == 0){
		return (0);
	}
	else{
		return(int_array[size - 1] + calculates_sum_arrayIntegers(int_array, size-1));
	}
}


//Write a function that recursively calculates the triangular number of an integer N.  You can set an up-limit for N. You don’t need to handle extra large integers.
//
//The function has one parameter that take in integer N.
//Example: If the integer N is 3, the function should output the triangular number 6, since 1 + 2 + 3 = 6.
//
int calculates_triangular_number(int N)
{
	if(N == 1){
		return (1);
	}
	else{
		return (N + calculates_triangular_number(N - 1));
	}
}

