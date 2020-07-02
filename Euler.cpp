#include <iostream>
#include "Euler1.hpp"
#include "Euler2.hpp"
#include "Euler3.hpp"
#include "Euler4.hpp"
#include "Euler5.hpp"

/*
Main function to test problems
*/

int main() 
{
	std::cout << "#1: The sum of all multiples is " << Euler1() << std::endl;
	std::cout << "#2: The sum of fib sequance is " << Euler2() << '\n';
	//std::cout << "#3: The largest prime factor of 600851475143 is " << Euler3() << '\n';//not correct
	std::cout << "#4: The largest 3 digit palindrom is " << Euler4() << std::endl;
	//std::cout << "#5: The smallest number evenly divisible by all whole numbers 1-20 is " << Euler5() << std::endl;//coreect but takes a while
}