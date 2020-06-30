#pragma once
#include <iostream>

/*
Euler problem 1: 
*If we list all the natural numbers below 10 that are multiples of 3 or 5, 
*we get 3, 5, 6 and 9. The sum of these multiples is 23.

*Find the sum of all the multiples of 3 or 5 below 1000.
*/

int Euler1()
{	
	int sum = 0;
	//std::cout << "The multiples are: ";
	for(int i = 1; i < 1000; i++)
	{
		if(i % 5 == 0 || i % 3 == 0)
		{
			sum += i;
			//std::cout << i << ',';
		}
	}
	return sum;
}