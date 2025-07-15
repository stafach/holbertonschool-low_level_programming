#include "3-calc.h"

/**
*op_add - addition of two interger
*@a: 1st int
*@b: 2nd int
*Return: the sum of the integer
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - return the difference of two int
*@a: 1st int
*@b: 2nd int
*Return: the result
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
*op_mul - multiply two int
*@a: 1st int
*@b: 2nd int
*Return: the result
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
*op_div - div two int
*@a: 1st int
*@b: 2nd int
*Return: error if int = 0 or the result
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
*op_mod - modulo two int
*@a: 1st int
*@b: 2nd int
*Return: error if b = 0 or the remainder of the div
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
