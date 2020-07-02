#pragma once
#include <string>
#include <iostream>

/*
Euler probel 4:
*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

*Find the largest palindrome made from the product of two 3-digit numbers.
*/
bool palidrome(int num)
{
	std::string intstr = std::to_string(num);
	char* start = &intstr[0];
	char* end = &intstr[intstr.size()-1];
	while(start != &intstr[intstr.size()-1])
	{
		if(*start != *end)
		{
			return false;
		}
		start++;
		end--;
	}
	return true;
}

int Euler4()
{
	int largest = 0;
	for(int i = 100; i < 1000; i++)
	{
		for(int j = 100; j < 1000; j++)
		{
			if(palidrome(i*j) && (i*j) > largest)
			{
				largest = i * j;
			}
		}
	}
	return largest;
}