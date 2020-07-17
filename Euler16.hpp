#pragma once 
#include <cmath>
#include <iostream>

/*
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
*/

int numberOfChars(double num)
{
	double temp = num;
	int count = 0; 
	while(temp > 1)
	{
		temp = temp / 10;
		count++;
	}
	return count;
}

double longPow(int a, int n)
{
	double aa = static_cast<double>(a);
	double multiplier = aa;
	for(int i = 1; i < n; i++)
	{
		aa = aa * multiplier;
	}
	return aa;
}

double Euler16()
{
	double powed = longPow(2,1000);
	double temp = powed;
	double sum = 0;
	for(int i = 0; i < numberOfChars(powed); i++)
	{
		sum += fmod(temp, 10);
		temp = std::trunc(temp / 10);
	}
	return sum;
}