#include <stdlib.h>

/**
 * free_grid - free up allocated grid by the alloc_grid
 *
 * @grid: - the grid to free
 * @height: - the height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (!grid)
		return;
	if (!grid[0])
		return;
	while (height-- > 0)
		free(grid[height]);
	free(grid);
}
