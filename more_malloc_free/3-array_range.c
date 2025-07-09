#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
**array_range - creates an array of integers.
*@min: the minimum of the array
*@max: the max of the array
*Return: NULL or the array
*/

int *array_range(int min, int max)
{
	int size = max - min + 1;
	int *arr = malloc(sizeof(int) * size);
	int i = 0;
	
	if (min > max)
		return (NULL);

	if (arr == NULL)
		return (NULL);


	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}

