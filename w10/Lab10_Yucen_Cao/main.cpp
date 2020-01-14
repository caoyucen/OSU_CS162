//
//  main.cpp
//  Lab10
#include <iostream>
#include <stdio.h>      
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <math.h>       
#include "FibonacciR.hpp"
#include "FibonacciNR.hpp"
using std:: cout;
using std:: endl;


int main ()
{
	int i = 0;
	int n[5] = {2, 5, 25, 30, 40};
	while (i < 5){
		clock_t t1;
		clock_t t2;
		
		std::cout << "------------The NO."<< i+1 <<" round--------------" << std::endl;
		//Calculating for Fibonacci Recursive
		printf ("Calculating for Fibonacci Recursive...\n");
		t1 = clock();
		FibonacciR R1(n[i]);
		R1.PrintFibonacciR();
		t1 = clock() - t1;
		printf ("It took me %lu clicks (%f seconds).\n",t1,((float)t1)/CLOCKS_PER_SEC);
	    //Calculating for Fibonacci Non Recursive
		std::cout << std::endl << "Calculating for Fibonacci Non Recursive..." << std::endl;
		t2 = clock();
		FibonacciNR R2(n[i]);
		R2.PrintFibonacciNR();
		t2 = clock() - t2;
		printf ("It took me %lu clicks (%f seconds).\n",t2,((float)t2)/CLOCKS_PER_SEC);
		std::cout << std::endl << std::endl;
		
		i++;
	}
	
	
	return 0;
}
