/*
By: Daniel Louis
project euler .net problem to solve # 52 under their archives
https://projecteuler.net/problem=52
problem:
*It can be seen that the number, 125874, and its double, 251748, contain exactly the same digits, but in a different order.
*Find the smallest positive integer, x, such that 2x, 3x, 4x, 5x, and 6x, contain the same digits.
*/
#include <iostream>
#include <string>

bool PermutedMultiples(int test, int multiplier);

int main()
{
	int test = 1;
	int multiplier = 2;
	while (!PermutedMultiples(test, multiplier))
	{
		test++;
	}
	std::cout << "the smallest permuted multiple integer is: " << test << '\n';
}
/*
function permutedMultiples

*/
bool PermutedMultiples(int test, int multiplier)
{
	int multiplierTemp = test * multiplier;
	std::string first = std::to_string(test);
	std::string second = std::to_string(multiplierTemp);
	std::cout << first << "and " << second << '\n';
	bool wasFound = false;

	//steps through first word and matches the number to another number in the second word
	//if it is there it continues if not it returns false.
	for(std::string::iterator itr = first.begin(); itr != first.end(); itr++)
	{
		for(std::string::iterator itr2 = second.begin(); itr2 != second.end(); itr2++ )
		{
			if (second.size() == 0)
			{
				return false;
			}
			if(*itr == *itr2)
			{
				wasFound = true;
				second.erase(itr2);
				break;
			}
		}
		if(wasFound == false)
		{
			return false;
		}
		else
		{
			wasFound = false;
		}

	}
	if (multiplier < 6)
		return PermutedMultiples(test, ++multiplier);
	else
		return true;

}
