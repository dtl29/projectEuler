#pragma once
#include <math.h>
#include <iostream>
#include <cmath>

/*
Euler problem 3: 
*The prime factors of 13195 are 5, 7, 13 and 29.

*What is the largest prime factor of the number 600851475143 ?
*/

bool isPrime(double num)
{
	if(num < 2)
	{
		return false;
	}
	if(fmod(num, 2) ==0 || fmod(num , 5) ==0 || fmod(num , 3) ==0 || fmod(num , 7) ==0 || fmod(num , 9) ==0)
	{
		return false;
	}
	for(double i = 2; i <= num / 2; ++i)
	{
		if(fmod(num , i) == 0)
		{
			return false;
		}
	}
	return true;
}

int Euler3()
{
	
	double og = 600851475143;
	int n = 2147483646;
	for(double i = round(og / 2000); i > 3; i--)
	{
		std::cout << i << "next, ";
		if(isPrime(i))
		{
			if(fmod(og, i == 0))
			{
				return i;
			}
		}
	}
	return -1;
	
}

