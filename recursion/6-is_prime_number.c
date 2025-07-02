#include "main.h"

/**
*test_prime_number - test if its a primer number
*@n: the number to test
*@t: the test number
*Return: 1 or 0
*/

int test_prime_number(int n, int t)
{
	if (t == 1)
		return (1);

	else if (n % t == 0)
		return (0);

	return (test_prime_number(n, t - 1));

}
/**
*is_prime_number - return 1 if its a prime number
*@n: the number
*Return: 1 if prime number otherwise 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (-0);

	return (test_prime_number(n, n - 1));
}
