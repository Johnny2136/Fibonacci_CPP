// Fibonacci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int fib1 = 0;
	int fib2 = 1;
	int fib3 = 0;
	int c;
	char g;
	std::cout << "How many fibonacci numbers do you want?" << std::endl;
	std::cin >> c;
	std::cout << fib1 << std::endl;;
	std::cout << fib2 << std::endl;;
	for (int i = 0; i < c; i++)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		std::cout << fib3 << std::endl;
	};
	std::cout << "press any key  then enter to exit." << std::endl;
	std::cin >> g;
	std::cout << g;
    return 0;
}

