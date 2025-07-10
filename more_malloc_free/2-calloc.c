#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
**_calloc - allocates memory for an array
*@nmemb: element of the array
*@size: size of the array
*Return: NULL or a pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(size) * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
