#include "main.h"

/**
*_strlen_recursion - returns the length of a string
*@s: the string
*Return: the lenght of the string
*/

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		i = i + (_strlen_recursion(s + 1));
		return (i);
	}

	return (i - 1);
}
