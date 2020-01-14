//
//  FibonacciR.cpp
//  Lab10
//
// Source:  https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c (Links to an external site.)
//

#include "FibonacciR.hpp"
#include <iostream>
   
     FibonacciR::FibonacciR() {
     }
     
     FibonacciR::FibonacciR(const int &n):n_(&n){
     }
     
     FibonacciR::~FibonacciR() {
     }
     
     int FibonacciR::Fibonacci(const int &n){
     	if(n==0)
     		return 0;
     	else if(n==1)
     		return 1;
     	return Fibonacci(n-1) + Fibonacci(n-2);
     }
     void FibonacciR::PrintFibonacciR(){
     	int FibonaciNum=Fibonacci(*n_);
     	std::cout<<*n_<<"th fibonacci number: "<<FibonaciNum<<std::endl;
     }

 
