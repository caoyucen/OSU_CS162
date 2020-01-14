//
//  Lab2 _ cs162
//	Yucen Cao
//  
//  In this lab, we will implement a program that reads a file filled with letters, count the letter frequencies in the file, and write the results to a new file.
//
//  The right input file should consist of only ‘a’ - ‘z’, ‘A’ – ‘Z’, space character, newline characters.
//
//  Each paragraph should have its own output file. And they sholud have different output file name.
//
//void count_letters(ifstream & fin, int *count);
//fin: it is from the ifstream fin  
//count: it is the int array for the count the letter, it is all set to be 0
//
//void count_letters(ofstream & fout, int *count);
//fout: it is from the ofstream fout  
//count: it is the int array for the count of letter
//

#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include "function.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::string;


int main() {
	string l = "abcdefghijklmnopqrstuvwxyz";
	string input_filename = "";
	string output_filename = "";
	int file_number = 1;  //initialize the number of output file to 1
	int count[26] = {0};  //letter frequency initialized to 0 
	
	
	//READ ME
	std::cout << "READ ME: "<< std::endl << "The right input file should consist of only ‘a’ - ‘z’, ‘A’ – ‘Z’, space character, newline characters. Please choose the right input file." << std::endl <<"Each paragraph should have its own output file. Please Enter the different output file name." << std::endl;
	
	//which file to input
	std::cout << "Please Enter the input file name: " << std::endl;
	std::cin >> input_filename;

	ifstream fin;
	fin.open(input_filename.c_str());
	if (!fin)
	{
		std::cout << "This file is not exist." << std::endl;
		return (0);
	}
	if(fin.eof())
	{
		std::cout << "The file is empty." << std::endl;
		return (0);
	}
	while(!fin.eof())
	{
		for (int i = 0; i < 26; i++){
			count [i] = 0;
		}
		count_letters(fin, count);

		//which file to output
		output_filename.clear();  //reset the string output_filename
		std::cout << "Please Enter the No." << file_number << " output file name: " << std::endl;
		std::cin >> output_filename;
		file_number++;  //to trace how many output files
		
		ofstream fout(output_filename.c_str());
		output_letters(fout, count);
		fout.close();
	}
	fin.close();
	
	return 0;
}



//Example test in shell
//LuJiayis-MacBook-Pro:test baobao$ make
//g++ -c main.cpp
//g++ -c function.cpp
//g++ main.o function.o -o output
//LuJiayis-MacBook-Pro:test baobao$ ./output
//READ ME:
//The right input file should consist of only ‘a’ - ‘z’, ‘A’ – ‘Z’, space character, newline characters. Please choose the right input file.
//Each paragraph should have its own output file. Please Enter the different output file name.
//Please Enter the input file name:
//a.txt
//This file is not exist.
//LuJiayis-MacBook-Pro:test baobao$ ./output
//READ ME:
//The right input file should consist of only ‘a’ - ‘z’, ‘A’ – ‘Z’, space character, newline characters. Please choose the right input file.
//Each paragraph should have its own output file. Please Enter the different output file name.
//Please Enter the input file name:
//input.txt
//Please Enter the No.1 output file name:
//1.txt
//Please Enter the No.2 output file name:
//2.txt
//Please Enter the No.3 output file name:
//3.txt
//Please Enter the No.4 output file name:
//4.txt
