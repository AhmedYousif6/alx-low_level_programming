#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: first array
 * @height: second array
 * Return: pointer ot NULL if arrays 0 or less
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, k, s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (s = 0; s < i; s++)
			{
				free(grid[s]);
			}
			free(grid);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
		grid[i][k] = 0;
		}
	}
	return (grid);
}
