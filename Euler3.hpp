#pragma once
#include <math.h>
#include <iostream>
#include <cmath>

/*
Euler problem 3: 
*The prime factors of 13195 are 5, 7, 13 and 29.

*What is the largest prime factor of the number 600851475143 ?
*/

bool isPrime3(double num)
{
	std::cout << std::fixed << "\nchecking if " << num << " is prime.\n";
	if( num <= 3 && num >= 2)
	{
		return true;
	}
	for(double i = 2; i <= num / 2; i++)
	{
		if(fmod(num,i)==0)
		{
			return false;
		}
	}
	return true;
}

double Euler3()
{
	double num = 600851475143;
	for(double i = round(num / 2.0); i > 0.0; i--)
	{
		if(fmod(num, i) == 0)
		{
			if(isPrime3(i))
			{
				std::cout << "this is the awnser: ";
				return i;
			}
		}
	}
	return -1;
}

