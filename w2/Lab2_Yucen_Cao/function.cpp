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


#include "function.hpp"


void count_letters(ifstream & fin, int *count) 
//fin: it is from the ifstream fin  count: it is the int array for the count the letter, it is all set to be 0
{
	string sl = "abcdefghijklmnopqrstuvwxyz";
	string bl = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string s = "";
	
	getline(fin, s);
	
	int i = 0;
	while(s[i])
	{
		for (int j = 0; j < 26; j++)
		{
			if(s[i] == sl[j] || s[i] == bl[j])
			{
				count[j] = count[j] + 1;
			}
		}
		i++;
	}
}



void output_letters(ofstream& fout, int *count)
//fout: it is from the ofstream fout  count: it is the int array for the count of letter(letter frequency) 
{
	string l = "abcdefghijklmnopqrstuvwxyz";
	
	for (int i = 0; i < 26; i++)
	{
		fout << l[i] << ": ";
		fout << count[i] << std::endl;
	}
}
