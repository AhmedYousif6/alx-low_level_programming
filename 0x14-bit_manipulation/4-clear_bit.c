#include "main.h"

/**
 * clear_bit - clears bit at index.
 * @n: number of index.
 * @index: bit to clear.
 * Return: 1 on success or -1 on faliure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1L << index)
		*n ^= 1L << index;

	return (1);
}
