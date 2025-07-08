#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
***alloc_grid - returns a pointer to a 2 dimensional array
*@width: the widht of the array
*@height: the height of the array
*Return: NULL or the pointer
*/

int **alloc_grid(int width, int height)
{
	int **mem = malloc(sizeof(int *) * width);
	int j = 0;
	int i = 0;


	if (mem == NULL)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);

	while (i < width)
	{
		mem[i] = malloc(sizeof(int) * height);

		if (mem[i] == NULL)
			return (NULL);

		while (j < height)
		{
			mem[i][j] = 0;
			j++;
		}
		i++;
	}

	return (mem);
}
