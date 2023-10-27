#include "main.h"

/**
 * set_bit - sets bit at index.
 * @n: number of index.
 * @index: bit of set.
 * Return: 1 on seccess or -1 on faliure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!!(*n |= 1L << index));
}
