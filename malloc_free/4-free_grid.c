#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*free_grid - frees a 2 dimensional grid previously created
*@grid: the grid
*@height: the height of the grid
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
