//
//  main.cpp
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


#include <iostream>
#include <fstream>
#include <string>
#include "read_file.hpp"
#include "menu.hpp"
#include "functions.hpp"
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

int main() {
	int* num_array;
	int* early_array;
	int* mid_array;
	int* end_array;
	int size_num = 0;
	int size_early = 0;
	int size_mid = 0;
	int size_end = 0;
	int simple_target = 0;
	int binary_target = 0;
	string output_num;
	string output_early;
	string output_mid;
	string output_end;
	num_array = new int[100];
	early_array = new int[100];
	mid_array = new int[100];
	end_array = new int[100];
	
	//read file
	read_file(num_array, "num.txt", size_num);
	read_file(early_array, "early.txt", size_early);
	read_file(mid_array, "mid.txt", size_mid);
	read_file(end_array, "end.txt", size_end);
	
	
	//simple search
	std::cout << "----------------------" << std::endl<<"The Simple Search:" << std::endl;
	simple_target = menu_target();
	print_search(simple_search(simple_target, num_array, size_num), "num.txt");
	print_search(simple_search(simple_target, early_array, size_early), "early.txt");
	print_search(simple_search(simple_target, mid_array, size_mid), "mid.txt");
	print_search(simple_search(simple_target, end_array, size_end), "end.txt");
	
	//sorting
	std::cout << std::endl << "----------------------" << std::endl<<"The Sorting: select sort algorithm" << std::endl;
	output_num = menu_output_file("num.txt");
	output_early = menu_output_file("early.txt");
	output_mid = menu_output_file("mid.txt");
	output_end = menu_output_file("end.txt");
	sorting(num_array, size_num, "num.txt", output_num);
	sorting(early_array, size_early, "early.txt", output_early);
	sorting(mid_array, size_mid, "mid.txt", output_mid);
	sorting(end_array, size_end, "end.txt", output_end);
	
	//Binary Search
	std::cout << std::endl << "----------------------" << std::endl<<"The Binary Search" << std::endl;
	binary_target = menu_target();
	print_search(binary_search(binary_target, num_array, size_num), output_num);
	print_search(binary_search(binary_target, early_array, size_early), output_early);
	print_search(binary_search(binary_target, mid_array, size_mid), output_mid);
	print_search(binary_search(binary_target, end_array, size_end), output_end);
	
	
	delete []num_array;
	delete []early_array;
	delete []mid_array;
	delete []end_array;
	
	return 0;
}
