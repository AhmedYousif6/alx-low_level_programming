#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers
 * @min: minimum value of integers
 * @max: max value of integers
 * Return: pointer to the array or null
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i, len = 0;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
