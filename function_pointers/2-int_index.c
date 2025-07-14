#include "function_pointers.h"

/**
*int_index - searches for an integer in an array.
*@array: the array of integer
*@size: the size of the array
*@cmp: the function that decide number to search
*Return: -1 or the place of the number in the array
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL
		|| cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
