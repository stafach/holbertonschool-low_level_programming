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
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}

