/*
 
Lab1_Yucen_Cao

Create a matrix calculator program 

*/

#include "determinant.hpp"

int determinant(int **array, int size)
{
	int determinant_matrix = 0;
	
	if (size == 2)
	{
		// |A| = ad − bc
		determinant_matrix = array[0][0] * array[1][1] - array[0][1] * array[1][0];
	}
	else 
	{
		// |A| = a(ei − fh) − b(di − fg) + c(dh − eg)
		determinant_matrix = array[0][0] * (array[1][1] * array[2][2] - array[1][2] * array[2][1]) - array[0][1] *(array[1][0] * array[2][2] - array[1][2] * array[2][0]) + array[0][2] * (array[1][0] * array[2][1] - array[1][1] * array[2][0]);
	}
	return determinant_matrix;
}
