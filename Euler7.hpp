#pragma once

/*
Euler problem 7:
*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

*What is the 10 001st prime number?
*/

bool isPrime(int num)
{
	if( num <= 3 && num >= 2)
	{
		return true;
	}
	for(int i = 2; i <= num / 2; i++)
	{
		if((num%i)==0)
		{
			return false;
		}
	}
	return true;
}

int Euler7()
{
	int primeCount = 1;
	for(int i = 3; i<=2147483647 ;i++)
	{
		if(isPrime(i))
		{
			primeCount += 1;
			if(primeCount == 10001)
			{
				return i;
			}
		}
	}
}