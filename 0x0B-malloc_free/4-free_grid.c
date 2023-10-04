#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2 dimensional array
 * @grid: 2 dimensional grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{

		free(grid[i]);
	}

	free(grid);
}
