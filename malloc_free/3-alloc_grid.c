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
	int **mem;
	int j = 0;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	mem = malloc(sizeof(int*) * height);
	if (mem == NULL)
		return (NULL);

	while (i < height)
	{
		mem[i] = malloc(sizeof(int) * width);

		if (mem[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(mem[i]);
			}
			free(mem);
			return (NULL);
		}
		while (j < width)
		{
			mem[i][j] = 0;
			j++;
		}
		i++;
	}

	return (mem);
}
