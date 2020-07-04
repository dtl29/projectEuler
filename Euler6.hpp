#pragma once

/*
Euler problem 6:
*The sum of the squares of the first ten natural numbers is,

12+22+...+102=385
*The square of the sum of the first ten natural numbers is,

(1+2+...+10)2=552=3025
*Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025−385=2640.

*Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

int Euler6()
{
	int sumofSquares = 0;
	int squaredSum = 0;
	int loop = 100;
	for(int i = 1; i <= loop; i++)
	{
		sumofSquares += (i * i);
		squaredSum += i;
	}
	squaredSum *= squaredSum;
	return squaredSum - sumofSquares;
}