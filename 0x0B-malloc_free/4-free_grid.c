#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free grid of memory
 * @grid: 2d array
 * @height: number
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
