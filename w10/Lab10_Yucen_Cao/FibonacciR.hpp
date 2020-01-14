//
//  FibonacciR.hpp
//  Lab10
//
// Source:  https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c (Links to an external site.)
//

#ifndef FibonacciR_hpp
#define FibonacciR_hpp

#include <stdio.h>

class FibonacciR {
public:
	FibonacciR(const int &n);
	virtual ~FibonacciR();
	void PrintFibonacciR();
private:
	FibonacciR();
	int Fibonacci(const int &n);
	const int *n_;
};

#endif /* FibonacciR_hpp */


