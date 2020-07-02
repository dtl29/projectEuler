#pragma once

/*
Euler problem 5:
*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

*What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

int Euler5()
{
	int numberofdivisors = 20;
	bool thisone = true;
	for(int j = 14; j < 2147483647; j++)
	{
		for(int i = 1; i <= numberofdivisors; i++)
		{
			if((j % i) != 0) 
			{
				thisone = false;
			}
			if(i==numberofdivisors && thisone)
			{
				return j;
			}
		}
		thisone = true;
	}
	return -1;
	/*
	bool nottrue = false;
	for(int i = 1; i < 2147483647; i++)
	{
		for(int j = 1; j <= 10; j++)
		{
			if(i%j!=0)
			{
				nottrue = true;
			}
			if(j==20 && !nottrue)
			{
				return i;
			}
		}
		nottrue = false; 
	}
	return -1;
	*/
}