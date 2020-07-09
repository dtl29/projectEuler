#pragma once
#include <iostream>

/*
The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

 1: 1
 3: 1,3
 6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?
*/
int NumberOfDivisors(int num)
{
	int divisorCount = 0;
	for(int i = 1; i < (num); i++)
	{
		if(num%i==0)
		{
			divisorCount++;
		}
	}
	std::cout << " has this many divisors " << divisorCount << std::endl;
	return divisorCount;
}

int Euler12()
{
	//2147483647
	int shouldEnd = 2147483647;
	int triangleAdder = 1;
	int traingleNumbers = 1;
	std::cout << "\nThe triangle numebrs are: ";
	for(int i = 1; i < shouldEnd; i++)
	{
		//need to find how many divisors each traingleNumbers have 
		std::cout << traingleNumbers;
		if(NumberOfDivisors(traingleNumbers) >= 500)
		{
			return traingleNumbers;
		}
		triangleAdder += 1;
		traingleNumbers += triangleAdder;
	}
	std::cout << std::endl;
	return -1;
}