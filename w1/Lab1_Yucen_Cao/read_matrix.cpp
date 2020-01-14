/*
 Lab1_Yucen_Cao
 
 Create a matrix calculator program 
 
 */

#include "read_matrix.hpp"


void readMatrix(int **array, int size)
{
	if (size == 2)
	{
		std::cout << "Please enter 4 integers" << std::endl;
		
	}
	else
		std::cout << "Please enter 9 integers" << std::endl;
	
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << "Enter number: ";
			std::cin >> array[i][j];
		}
	}
}
