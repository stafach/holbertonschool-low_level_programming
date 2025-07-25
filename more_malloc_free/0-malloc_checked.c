#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
**malloc_checked - allocates memory using malloc
*@b: number of bytes
*Return: Nothing
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
