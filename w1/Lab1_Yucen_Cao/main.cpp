/*
 
 Lab1_Yucen_Cao
 
 Create a matrix calculator program 
 
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using std :: cin;
using std :: cout;
using std :: endl;
#include "determinant.hpp"
#include "read_matrix.hpp"
#include "input_validation.hpp"

int main(int argc, const char * argv[]) {
	
	int size = 0;
	char c = '0';        //for the input validation
	int determinant_matrix = 0;
	int **array2D = NULL; 
	
	std::cout << "Please enter the size of the matrix (choose 2 or 3): ";
	
	//input validation  
	while (size == 0) 
	{
		std::cin >> c; 
		size = input_validation(c);
	}
	
	
	//allocate the memory
	array2D = new int *[size];
	for (int i = 0; i < size; i++)
	{
		array2D[i] = new int [size]; 
	}
	
	
	
	//using function
	readMatrix(array2D, size);
	determinant_matrix = determinant(array2D, size);
	
	
	//print out
	std::cout << "The matrix is: " << std::endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << array2D[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "The determinant of the matrix is: " << determinant_matrix << std::endl;
	
	
	//free memory
	for (int i = 0; i < size; i++)
	{
		delete [] array2D[i];
	}
	delete [] array2D;
		
		
	return 0;
}





/*
 Please enter the size of the matrix (choose 2 or 3): 3
 Please enter 9 integers
 Enter number: 2
 Enter number: -3
 Enter number: 1
 Enter number: 2
 Enter number: 0
 Enter number: -1
 Enter number: 1
 Enter number: 4
 Enter number: 5
 The matrix is: 
 2 -3 1 
 2 0 -1 
 1 4 5 
 The determinant of the matrix is: 49
 Program ended with exit code: 0
 
 
 
 
 
 Please enter the size of the matrix (choose 2 or 3): 2
 Please enter 4 integers
 Enter number: -1
 Enter number: -2
 Enter number: 6
 Enter number: 3
 The matrix is: 
 -1 -2 
 6 3 
 The determinant of the matrix is: 9
 Program ended with exit code: 0
 
 
 
 
 Please enter the size of the matrix (choose 2 or 3): c
 Enter size is wrong, please enter the size of the matrix (choose 2 or 3): a
 Enter size is wrong, please enter the size of the matrix (choose 2 or 3): #
 Enter size is wrong, please enter the size of the matrix (choose 2 or 3): 0
 Enter size is wrong, please enter the size of the matrix (choose 2 or 3): 2
 Please enter 4 integers
 Enter number: 1
 Enter number: 2
 Enter number: 3
 Enter number: 4
 The matrix is: 
 1 2 
 3 4 
 The determinant of the matrix is: -2
 Program ended with exit code: 0
 
 
 
 */
