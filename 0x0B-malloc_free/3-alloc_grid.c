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
	int i, a;

	grid = (int **)malloc(height * sizeof(int *));
	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = (int *)malloc(width * sizeof(int));
			if (grid[i] == 0)
			{
				while (i--)
					free(grid[i]);
				free(grid);
				return (NULL);
			}
			for (a = 0; a < width; a++)
				grid[i][a] = 0;
		}
	}
	return (grid);
}
