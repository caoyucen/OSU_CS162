//
//  FibonacciNR.hpp
//  Lab10
//
// Source:  https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c (Links to an external site.)
//

#ifndef FibonacciNR_hpp
#define FibonacciNR_hpp

#include <stdio.h>

class FibonacciNR {
public:
	FibonacciNR(const int &n);
	virtual ~FibonacciNR();
	void PrintFibonacciNR();
private:
	FibonacciNR();
	int Fibonacci(const int &n);
	const int* n_;
};

#endif /* FibonacciNR_hpp */




