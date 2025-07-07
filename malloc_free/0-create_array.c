#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
**create_array - create an array of char
*@size: the size of the array
*@c: the char
*Return: pointer to the array or 0
*/

char *create_array(unsigned int size, char c)
{
	char *str = 0;

	str = malloc(sizeof(c) * size);

	if (size == 0)
		return (0);

	if (str == 0)
		return (0);
		
	return (str);
	free(str);
}
