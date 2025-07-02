#include "main.h"

/**
*test_sqrt - fonction for define the square
*@n: the number to square
*@t: the test number
*Return: -1 or t
*/

int test_sqrt(int n, int t)
{
	if (t * t > n)
		return (-1);

	else if (t * t == n)
		return (t);

	return (test_sqrt(n, t + 1));
}


/**
*_sqrt_recursion - returns the natural square root of a number.
*@n: the number
*Return: -1 or the square
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);


	return (test_sqrt(n, 1));
}
