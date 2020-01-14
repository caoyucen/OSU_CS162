//
//  functions.cpp
//*********************************************************************
// Program name: Lab8
// Author: YUCEN CAO - CS162 Spring 2019
// Date: May 24, 2019
// Description: In this lab, we will use algorithms to search data and sort data.
//1. Read Values from Files
//2. Simple Search
//3. Sorting
//4. Binary Search
// *********************************************************************

#include "functions.hpp"

//simple_search
bool simple_search(int target, int* array, int size)
{
	for (int i = 0; i < size; i++){
		if (array[i] == target){
			return (1);
		}
	}
	return (0);
}

//print the search result
void print_search(bool mark, string s)
{
	std::cout << s << ": ";
	if(mark == 1){
		std::cout << "target value found" << std::endl;
	}
	else{
		std::cout << "target value not found" << std::endl;
	}
}


//sorting
void sorting(int* array, int size, string s, string output_file){
	//sorting: select sort algorithm
	int minIndex = 0;
	int min;
	int temp = 0;
	for(int i = 0; i < size; i++){
		min = 100000;
		for (int j = i; j < size; j++){
			if (min > array[j]){
				min = array[j];
				minIndex = j;
			}
		}
		temp = array[i];
		array[i] = array[minIndex];
		array[minIndex] = temp;
	}
	//print
	std::cout << "The sorted values for " << s << " is:" << std::endl;
	ofstream fout(output_file);
	for (int i = 0; i < size; i++){
		std::cout << array[i] << " ";
		fout<< array[i] << " ";
	}
	std::cout << std::endl;
	fout.close();
}


//binary_search
bool binary_search(int target, int* array, int size)
{
	int left = 0;
	int right = size - 1;
	
	while(left <= right){
		int mid = left + (right -left)/2;
		if (target < array[mid]){
			right = mid -1;
		}
		else if (target > array[mid]){
			left = mid + 1;
		}
		else{
			return (1);
		}
	}
	return (0);
}


