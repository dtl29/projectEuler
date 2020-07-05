#pragma once

/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
bool isPrime10(double num)
{
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

double Euler10()
{
	int const below = 2000000;
	double product = 0;
	for(int i = 2; i <= below; i++)
	{
		if(isPrime10(static_cast<double>(i)))
		{
			product += static_cast<double>(i);
		}
	}
	return product;
}