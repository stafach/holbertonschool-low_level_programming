#include "variadic_functions.h"

/**
*sum_them_all - return th sum of all the parameters
*@n: number of parameters
*Return: 0 or the sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list par;

	if (n == 0)
		return (0);

	va_start(par, n);

	for (i = 0; i < n; i++)
		total += va_arg(par, int);

	va_end(par);
	return (total);
}
