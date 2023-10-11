#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: compare function
 * Return: integer index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int j = 1;

	if (array && size && cmp)
		while (j < size)
		{
			if (cmp(array[j]))
				return (j);
			j++;
		}
}
