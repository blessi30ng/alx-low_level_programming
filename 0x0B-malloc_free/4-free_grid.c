#include "main.h"

/**
 * free_grid - free previously allocated memory
 * @grid: pointer to the array
 * @height: no of rows
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
