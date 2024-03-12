#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2 dimensional grid previously created by your alloc_grid
 * @grid: input
 * @height: input
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL || height <= 0)
		return;

	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
