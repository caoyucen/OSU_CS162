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



#ifndef function_hpp
#define function_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
using std::ifstream;
using std::ofstream;
using std::string;
using std::endl;

//void count_letters(ifstream & fin, int *count);
//fin: it is from the ifstream fin  
//count: it is the int array for the count the letter, it is all set to be 0
void count_letters(ifstream & fin, int *count);



//void count_letters(ofstream & fout, int *count);
//fout: it is from the ofstream fout  
//count: it is the int array for the count of letter
void output_letters(ofstream& fout, int *count);

#endif /* function_hpp */
