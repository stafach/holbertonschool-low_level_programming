#include "main.h"

/**
*_pow_recursion - that returns the value of x^y
*@x: an integer
*@y: the power
*Return: -1 or the value of x^y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x , y - 1));
}
