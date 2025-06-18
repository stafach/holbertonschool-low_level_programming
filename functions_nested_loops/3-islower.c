#include "main.h"

/**
 * _islower - Check for lowercase
*@c: int
 * Return:  0 if lowercase, 1 if otherwise
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
