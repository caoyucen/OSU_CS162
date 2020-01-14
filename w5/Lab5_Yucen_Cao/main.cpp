//
//  main.cpp
//  Lab5
//
//  Created by YUCEN CAO on 2019/4/30.
//  Copyright © 2019年 YUCEN CAO. All rights reserved.
//
//Create and use recursive functions
//In this lab, we will write a program that uses three recursive functions.
//The program needs to demonstrate all three functions by providing a menu.
//The menu should provide user choices to select one of the three functions to call, after prompting user input for function call and the function outputs results, the menu should go back to the first menu to let the user continue choosing functions to call.
//
//
//

#include <iostream>
#include "recursive_function.hpp"
#include "menu.hpp"



int main() {
	
	int function_type = 0;
	int mark_end = 1; //the mark for end the game or not, 0 for end, 1 continue
	
	while(mark_end)
	{
		//choose the function
		function_type = menu_function_type();
		if (function_type == 1){
			string s = menu_function1();
			std::cout << std::endl;
			std::cout << "The reverse string is: ";
			prints_string_reverse(s);
			std::cout << std::endl;
			std::cout << "  The input string is: " << s << std::endl;
		}
		else if( function_type == 2){
			int size = 0; //array size
			int* int_array;
			int sum = 0;
			
			//intput the int array
			size = menu_function2_size();
			int_array = new int[size];
			for(int i = 0; i < size; i++){
				int_array[i] = menu_function2_array(i);
			}
			//calculates sum of array integers
			sum = calculates_sum_arrayIntegers(int_array, size);
			std::cout << "The sum of array integers: " << sum << std::endl;
			delete []int_array;
		}
		else{
			int triangular_number = 0;
			
			triangular_number = calculates_triangular_number(menu_function3());
			std::cout << "The triangular number of the number: " << triangular_number << std::endl;
		}
		
		mark_end = menu_end(); //end the game or not
	}
	
	return (0);
}
